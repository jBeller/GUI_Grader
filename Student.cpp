/**
* @file Student.cpp
* @author James Beller
*
* @section DESCRIPTION
*
* Source file defining functionalities of the Student class
*/
#include "Student.h"


Student::~Student()
{
	s_delete_all_entries();
	s_entries.clear();
	s_courses.clear();
}
bool Student::s_is_taking_course(wxString c)
{
	if (s_courses.count(c) > 0)
		return true;
	else
		return false;
}
void Student::s_delete_all_entries()
{
	for (map<wxString, vector<StudentEntry*> >::iterator it = s_entries.begin(); it != s_entries.end(); it++)
	{
		for (vector<StudentEntry*>::iterator s_it = (it->second).begin(); s_it != (it->second).end(); s_it++)
			delete *s_it;
		(it->second).clear();
	}
	s_entries.clear();
}
void Student::s_delete_entries_by_course(wxString c)
{
	if (s_courses.count(c) == 0)
		return;

	vector<StudentEntry*> vec = s_entries[c];
	for (vector<StudentEntry*>::iterator it = vec.begin(); it != vec.end(); it++)
		delete *it;

	s_entries[c].clear();
	s_entries.erase(c);
	s_courses.erase(c);
}
void Student::s_delete_entries_by_portion(wxString c, wxString port)
{
	if (s_courses.count(c) == 0)
		return;

	vector<StudentEntry*>::iterator it = s_entries[c].begin();

	while (it != s_entries[c].end())
	{
		if ((*it)->e_name == port)
		{
			delete *it;
			it = s_entries[c].erase(it);
		}
		else
			it++;
	}
}
void Student::s_update_course_name(wxString n1, wxString n2)
{
	if (s_courses.count(n1) > 0 && n1 != n2)
	{
		s_courses[n2] = s_courses[n1];
		s_courses.erase(n1);
		s_entries[n2] = s_entries[n1];
		s_entries.erase(n1);
	}
}
void Student::s_update_portion_name(wxString c, wxString n1, wxString n2)
{
	if (s_courses.count(c) == 0 || n1 == n2)
		return;

	for (vector<StudentEntry*>::iterator it = s_entries[c].begin(); it != s_entries[c].end(); it++)
	{
		if ((*it)->e_portion == n1)
			(*it)->e_portion = n2;
	}
}
void Student::s_remove_portion(wxString c, wxString n)
{
	if (s_courses.count(c) == 0)
		return;

	s_delete_entries_by_portion(c, n);
}
void Student::s_update_entry_name(wxString c, wxString p, wxString n1, wxString n2)
{
	if (s_courses.count(c) == 0 || n1 == n2)
		return;

	for (vector<StudentEntry*>::iterator it = s_entries[c].begin(); it != s_entries[c].end(); it++)
	{
		if ((*it)->e_portion == p && (*it)->e_name == n1)
		{
			(*it)->e_name = n2;
			return;
		}
	}
}
void Student::s_insert_entry(wxString c, wxString p, wxString n, double e)
{
	if (s_courses.count(c) == 0)
		return;

	StudentEntry* ent = new StudentEntry;
	ent->e_portion = p;
	ent->e_name = n;
	ent->e_points_earned = e;
	s_entries[c].push_back(ent);
}
void Student::s_remove_entry(wxString c, wxString p, wxString n)
{
	if (s_courses.count(c) == 0)
		return;

	vector<StudentEntry*>::iterator it = s_entries[c].begin();

	while (it != s_entries[c].end())
	{
		if ((*it)->e_portion == p && (*it)->e_name == n)
		{
			delete *it;
			it = s_entries[c].erase(it);
			return;
		}
		else
			it++;
	}
}
double Student::s_get_points_earned(wxString c, wxString p, wxString n)
{
	if (s_courses.count(c) == 0)
		return -1.0;

	for (vector<StudentEntry*>::iterator it = s_entries[c].begin(); it != s_entries[c].end(); it++)
	{
		if ((*it)->e_portion == p && (*it)->e_name == n)
			return (*it)->e_points_earned;
	}

	return -1.0;
}
void Student::s_set_points_earned(wxString c, wxString p, wxString ent, double earn)
{
	if (s_courses.count(c) == 0)
		return;

	for (vector<StudentEntry*>::iterator it = s_entries[c].begin(); it != s_entries[c].end(); it++)
	{
		if ((*it)->e_portion == p && (*it)->e_name == ent)
		{
			(*it)->e_points_earned = earn;
			return;
		}
	}
}
void Student::s_insert_course(wxString n, Course* c)
{
	int e_size;
	wxString* port;
	wxString* name;

	if (s_courses.count(n) == 0)
	{
		s_courses.insert(std::pair<wxString, Course*>(n, c));
		e_size = c->c_get_entry_size();
		port = new wxString[e_size];
		name = new wxString[e_size];
		c->c_get_all_entry_info(port, name);
		for (int i = 0; i < e_size; i++)
			s_insert_entry(n, port[i], name[i], 0.0);
		delete[] port;
		delete[] name;
	}
}
void Student::s_remove_course(wxString n)
{
	if (s_courses.count(n) > 0)
		s_delete_entries_by_course(n);
}
double Student::s_calculate_course(wxString n)
{
	Course* c;
	if (s_courses.count(n) > 0)
		c = s_courses[n];
	else
		return -1.0;
	if (!c->c_validate_weights())
		return -1.0;

	map<wxString, double> total_earned;
	map<wxString, double> total_possible;
	map<wxString, double> portions = c->c_get_portion_map();
	vector<StudentEntry*> course_entries = s_entries[c->c_get_name()];
	double final_percentage = 0.0;

	for (map<wxString, double>::iterator it = portions.begin(); it != portions.end(); it++)
	{
		total_earned[it->first] = 0.0;
		total_possible[it->first] = 0.0;
	}
	for (vector<StudentEntry*>::iterator it = course_entries.begin(); it != course_entries.end(); it++)
	{
		total_earned[(*it)->e_portion] += (*it)->e_points_earned;
		total_possible[(*it)->e_portion] += c->c_get_entry_points((*it)->e_portion, (*it)->e_name);
	}
	for (map<wxString, double>::iterator it = portions.begin(); it != portions.end(); it++)
	{
		final_percentage += (total_earned[it->first] / total_possible[it->first])*(it->second / 100);
	}
	s_course_grade = final_percentage;
	return final_percentage;
}
double Student::s_calculate_gpa(vector<wxString> &err)
{
	bool error_occured = false;
	double points_earned = 0.0;
	double points_attempted = 0.0;
	double grade, mult;

	for (map<wxString, Course*>::iterator it = s_courses.begin(); it != s_courses.end(); it++)
	{
		if (!(it->second)->c_validate_weights())
		{
			error_occured = true;
			err.push_back(it->first);
		}
		if (error_occured)
			continue;
		else
		{
			points_attempted += (it->second)->c_get_units();
			grade = s_calculate_course((it->second)->c_get_name());
			if (grade >= 0.9)
				mult = 4.0;
			else if (grade >= 0.8)
				mult = 3.0;
			else if (grade >= 0.7)
				mult = 2.0;
			else if (grade >= 0.6)
				mult = 1.0;
			else
				mult = 0.0;
			points_earned += (it->second)->c_get_units() * mult;
		}
	}
	if (points_attempted == 0.0 || error_occured)
		return -1.0;

	s_gpa = points_earned / points_attempted;
	return s_gpa;
}
vector<wxString> Student::s_get_course_names()
{
	vector<wxString> names;

	for (map<wxString, Course*>::iterator it = s_courses.begin(); it != s_courses.end(); it++)
		names.push_back(it->first);

	return names;
}
Course* Student::s_get_working_course(wxString n)
{
	if (s_courses.count(n) > 0)
		return s_courses[n];
	else
		return NULL;
}
wxString Student::s_dump_data()
{
	wxString string_data;

	string_data << s_name << ";" << s_id << ";";

	for (map<wxString, Course*>::iterator it = s_courses.begin(); it != s_courses.end(); it++)
		string_data << it->first << ",";

	string_data << ";";

	for (map<wxString, vector<StudentEntry*> >::iterator m_it = s_entries.begin(); m_it != s_entries.end(); m_it++)
	{
		for (vector<StudentEntry*>::iterator v_it = (m_it->second).begin(); v_it != (m_it->second).end(); v_it++)
			string_data << m_it->first << "," << (*v_it)->e_name << "," << (*v_it)->e_portion << "," << (*v_it)->e_points_earned << ",";
	}

	string_data << ";";

	return string_data;
}