/**
* @file Course.cpp
* @author James Beller
*
* @section DESCRIPTION
*
* Source file defining functionalities of the Course class
*/
#include "Course.h"


Course::~Course()
{
	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
		delete *it;
	c_portions.clear();
	c_entries.clear();
}
void Course::c_update_portions(wxString n1, wxString n2)
{
	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		if ((*it)->e_portion == n1)
			(*it)->e_portion = n2;
	}
}
bool Course::c_validate_weights()
{
	double sum = 0.0;
	for (map<wxString, double>::iterator it = c_portions.begin(); it != c_portions.end(); it++)
		sum += it->second;
	if (sum == 100.0)
		return true;
	else
		return false;
}
bool Course::c_entry_name_exists(wxString n)
{
	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		if ((*it)->e_name == n)
			return true;
	}
	return false;
}
bool Course::c_portion_name_exists(wxString n)
{
	if (c_portions.count(n) > 0)
		return true;
	else
		return false;
}
void Course::c_create_portion(wxString n, double w)
{
	if (c_portions.count(n) == 0)
		c_portions.insert(std::pair<wxString, double>(n, w));
}
void Course::c_modify_portion_name(wxString n1, wxString n2)
{
	if (c_portions.count(n1) > 0 && n1 != n2)
	{
		c_portions[n2] = c_portions[n1];
		c_portions.erase(n1);
		c_update_portions(n1, n2);
	}
}
void Course::c_modify_portion_weight(wxString n, double w)
{
	if (c_portions.count(n) > 0)
		c_portions[n] = w;
}
void Course::c_delete_portion(wxString n)
{
	vector<Entry*>::iterator it = c_entries.begin();

	while (it != c_entries.end())
	{
		if ((*it)->e_name == n)
		{
			delete *it;
			it = c_entries.erase(it);
		}
		else
			it++;
	}
	c_portions.erase(n);
}
void Course::c_insert_entry(wxString port, wxString n, double pos)
{
	if (c_portions.count(port) == 0 || c_entry_name_exists(n))
		return;

	Entry* ent = new Entry;
	ent->e_portion = port;
	ent->e_name = n;
	ent->e_points_possible = pos;
	c_entries.push_back(ent);
}
void Course::c_modify_entry_name(wxString port, wxString n1, wxString n2)
{
	if (c_portions.count(port) == 0 || !c_entry_name_exists(n1))
		return;

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		if ((*it)->e_portion == port && (*it)->e_name == n1)
		{
			(*it)->e_name = n2;
			return;
		}
	}
}
void Course::c_modify_entry_points(wxString port, wxString n, double pos)
{
	if (c_portions.count(port) == 0 || !c_entry_name_exists(n))
		return;

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		if ((*it)->e_portion == port && (*it)->e_name == n)
		{
			(*it)->e_points_possible = pos;
			return;
		}
	}
}
void Course::c_modify_entry_portion(wxString port1, wxString n, wxString port2)
{
	if (c_portions.count(port1) == 0 || c_portions.count(port2) == 0 || !c_entry_name_exists(n))
		return;

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		if ((*it)->e_portion == port1 && (*it)->e_name == n)
		{
			(*it)->e_portion = port2;
			return;
		}
	}
}
void Course::c_delete_entry(wxString port, wxString n)
{
	if (c_portions.count(port) == 0 || !c_entry_name_exists(n))
		return;

	vector<Entry*>::iterator it = c_entries.begin();

	while (it != c_entries.end())
	{
		if ((*it)->e_portion == port && (*it)->e_name == n)
		{
			delete *it;
			it = c_entries.erase(it);
			return;
		}
		else
			it++;
	}
}
void Course::c_get_all_entry_info(wxString* port, wxString* n)
{
	unsigned int i = 0;

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		port[i] = (*it)->e_portion;
		n[i] = (*it)->e_name;
		i++;
	}
}
vector<wxString> Course::c_get_portion_names()
{
	vector<wxString> names;

	for (map<wxString, double>::iterator it = c_portions.begin(); it != c_portions.end(); it++)
		names.push_back(it->first);

	return names;
}
vector<wxString> Course::c_get_entry_names()
{
	vector<wxString> names;

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
		names.push_back((*it)->e_name);

	return names;
}
vector<wxString> Course::c_get_entry_names_by_portion(wxString port)
{
	vector<wxString> names;

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		if ((*it)->e_portion == port)
			names.push_back((*it)->e_name);
	}

	return names;
}
double Course::c_get_portion_weight(wxString port)
{
	if (c_portions.count(port) == 1)
		return c_portions[port];
	else
		return -1.0;
}
double Course::c_get_total_weight()
{
	double total = 0.0;

	for (map<wxString, double>::iterator it = c_portions.begin(); it != c_portions.end(); it++)
		total += it->second;

	return total;
}
double Course::c_get_entry_points(wxString port, wxString n)
{
	if (c_portions.count(port) == 0 || !c_entry_name_exists(n))
		return -1.0;

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
	{
		if ((*it)->e_portion == port && (*it)->e_name == n)
			return (*it)->e_points_possible;
	}
	return -1.0;
}
wxString Course::c_dump_data()
{
	wxString string_data;

	string_data << c_name << ";" << c_units << ";";

	for (map<wxString, double>::iterator it = c_portions.begin(); it != c_portions.end(); it++)
		string_data << it->first << "," << it->second << ",";

	string_data << ";";

	for (vector<Entry*>::iterator it = c_entries.begin(); it != c_entries.end(); it++)
		string_data << (*it)->e_name << "," << (*it)->e_portion << "," << (*it)->e_points_possible << ",";

	string_data << ";";

	return string_data;
}