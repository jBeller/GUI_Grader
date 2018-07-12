/**
* @file Student.h
* @author James Beller
*
* @section DESCRIPTION
*
* Header file defining the Student class
*/
#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"

class Student
{
private:
	struct StudentEntry
	{
		wxString e_portion;              // Portion the entry belongs to
		wxString e_name;                 // Entry name
		double e_points_earned;          // Points the student earned
	};
	wxString s_name;                     // Student name
	int s_id;                            // Student ID
	double s_gpa;                        // Student GPA (used for sorting)
	double s_course_grade;               // Student grade for a course (used for sorting)
	map<wxString, Course*> s_courses;    // Courses the student took
	map<wxString, vector<StudentEntry*>> s_entries;  // s_entries[Course Name] = Vector of entries in Course Name
	void s_delete_all_entries();
	void s_delete_entries_by_course(wxString c);
	void s_delete_entries_by_portion(wxString c, wxString port);
public:
	Student(wxString n, int i) : s_name(n), s_id(i), s_gpa(0.0), s_course_grade(0.0) {}
	~Student();
	bool s_is_taking_course(wxString c);
	void s_update_course_name(wxString n1, wxString n2);
	void s_update_portion_name(wxString c, wxString n1, wxString n2);
	void s_remove_portion(wxString c, wxString n);
	void s_update_entry_name(wxString c, wxString p, wxString n1, wxString n2);
	void s_insert_entry(wxString c, wxString p, wxString n, double e);
	void s_remove_entry(wxString c, wxString p, wxString n);
	double s_get_points_earned(wxString c, wxString p, wxString n);
	void s_set_points_earned(wxString c, wxString p, wxString ent, double earn);
	void s_insert_course(wxString n, Course* c);
	void s_remove_course(wxString n);
	double s_calculate_course(wxString n);
	double s_calculate_gpa(vector<wxString> &err);
	Course* s_get_working_course(wxString n);
	wxString s_get_name() { return s_name; }
	wxString s_dump_data();
	void s_set_name(wxString n) { s_name = n; }
	vector<wxString> s_get_course_names();
	int s_get_id() { return s_id; }
	void s_set_id(int i) { s_id = i; }
	int s_get_no_of_courses() { return s_courses.size(); }
	double s_get_gpa() { return s_gpa; }
	double s_get_course_grade() { return s_course_grade; }
};

#endif