/**
* @file Course.h
* @author James Beller
*
* @section DESCRIPTION
*
* Header file defining the Course class
*/
#ifndef COURSE_H
#define COURSE_H

#include <wx/string.h>
#include <map>
#include <vector>

using std::map;
using std::vector;

class Course
{
private:
	struct Entry {
		wxString e_portion;              // Portion the entry belongs to
		wxString e_name;                 // Entry name
		double e_points_possible;        // Points possible for that entry
	};
	wxString c_name;                     // Course name
	double c_units;                      // Course units
	map<wxString, double> c_portions;    // c_portions[Portion Name] = Porton weight (in percentage)
	vector<Entry*> c_entries;            // Entries in the course
	void c_update_portions(wxString n1, wxString n2);
public:
	Course(wxString n, double u) : c_name(n), c_units(u) {}
	~Course();
	bool c_validate_weights();
	bool c_portion_name_exists(wxString n);
	bool c_entry_name_exists(wxString n);
	void c_change_name(wxString n) { c_name = n; }
	void c_change_units(double u) { c_units = u; }
	void c_create_portion(wxString n, double w);
	void c_modify_portion_name(wxString n1, wxString n2);
	void c_modify_portion_weight(wxString n, double w);
	void c_delete_portion(wxString n);
	void c_insert_entry(wxString port, wxString n, double pos);
	void c_modify_entry_name(wxString port, wxString n1, wxString n2);
	void c_modify_entry_portion(wxString port1, wxString n, wxString port2);
	void c_modify_entry_points(wxString port, wxString n, double pos);
	void c_delete_entry(wxString port, wxString n);
	void c_get_all_entry_info(wxString* port, wxString* n);
	vector<wxString> c_get_portion_names();
	vector<wxString> c_get_entry_names();
	vector<wxString> c_get_entry_names_by_portion(wxString port);
	map<wxString, double> c_get_portion_map() { return c_portions; }
	wxString c_get_name() { return c_name; }
	wxString c_dump_data();
	double c_get_units() { return c_units; }
	double c_get_portion_weight(wxString port);
	double c_get_total_weight();
	double c_get_entry_points(wxString port, wxString n);
	int c_get_entry_size() { return c_entries.size(); }
};

#endif

