///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////
#ifndef __EDITCOURSEDIALOG_H__
#define __EDITCOURSEDIALOG_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/listbox.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/stattext.h>
#include <wx/button.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/listctrl.h>
#include <wx/dialog.h>
#include <wx/msgdlg.h>
#include <wx/textdlg.h>
#include <algorithm>
#include "AddEditPortionDialog.h"
#include "AddEditEntryDialog.h"
#include "Student.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class EditCourseDialog
///////////////////////////////////////////////////////////////////////////////
class EditCourseDialog : public wxDialog
{
private:
	wxPanel* m_portion_panel;
	wxListBox* m_portions_list;
	wxPanel* m_porton_info_panel;
	wxStaticText* m_weight_text;
	wxStaticText* m_weight_total_text;
	wxPanel* m_portion_button_panel;
	wxButton* m_add_portion_button;
	wxButton* m_edit_portion_button;
	wxButton* m_remove_portion_button;
	wxPanel* m_student_panel;
	wxListCtrl* m_student_list;
	wxMenu* m_student_list_menu;
	wxMenu* m_sl_name_sort;
	wxMenu* m_sl_grade_sort;
	wxPanel* m_entry_panel;
	wxListCtrl* m_entry_list;
	wxMenu* m_entry_list_menu;
	wxMenu* m_el_points_sort;
	wxPanel* m_entry_button_panel;
	wxButton* m_add_entry_button;
	wxButton* m_edit_entry_button;
	wxButton* m_remove_entry_button;
	wxPanel* m_earned_button_panel;
	wxStaticText* m_earned_text;
	wxStaticText* m_score_percentage_text;
	wxButton* m_edit_score_button;
	wxPanel* m_entry_info_panel;
	wxStaticText* m_possible_text;
	wxStaticText* m_class_average_text;
	wxStaticText* m_score_average_text;
	wxPanel* m_grade_points_panel;
	wxStaticText* m_grade_points_text;
	wxButton* m_grade_points_button;
	Course* m_active_course;
	long m_currently_selected_student;
	long m_currently_selected_entry;
	bool m_colored_names_enabled;
	map<wxString, Student*> m_students_in_course;
	void m_colorize_names();
	void m_reset_name_colors();
	void m_enable_entry_buttons();
	void m_disable_entry_buttons();
	void m_enable_portion_buttons();
	void m_disable_portion_buttons();
	void m_calculate_average_score();
	static map<wxString, double> m_entry_points_map;  // Used for sorting entries
	static bool m_grade_comparison(Student* i, Student* j) { return i->s_get_course_grade() < j->s_get_course_grade(); }
	static bool m_points_comparison(wxString i, wxString j) { return m_entry_points_map[i] < m_entry_points_map[j]; }

protected:

	void m_init_load_course(wxInitDialogEvent& event);
	void m_load_portion(wxCommandEvent& event);
	void m_edit_portion(wxCommandEvent& event);
	void m_add_portion(wxCommandEvent& event);
	void m_remove_portion(wxCommandEvent& event);
	void m_deselect_student(wxListEvent& event);
	void m_select_student(wxListEvent& event);
	void m_sort_students_by_name_az(wxCommandEvent& event);
	void m_sort_students_by_name_za(wxCommandEvent& event);
	void m_sort_students_by_grade_lowest_first(wxCommandEvent& event);
	void m_sort_students_by_grade_highest_first(wxCommandEvent& event);
	void m_toggle_color_code(wxCommandEvent& event);
	void m_deselect_entry(wxListEvent& event);
	void m_load_entry(wxListEvent& event);
	void m_sort_entries_by_points_lowest_first(wxCommandEvent& event);
	void m_sort_entries_by_points_highest_first(wxCommandEvent& event);
	void m_add_entry(wxCommandEvent& event);
	void m_edit_entry(wxCommandEvent& event);
	void m_remove_entry(wxCommandEvent& event);
	void m_edit_score(wxCommandEvent& event);
	void m_edit_units(wxCommandEvent& event);

public:

	EditCourseDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Course Editor"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(490, 430), long style = wxDEFAULT_DIALOG_STYLE);
	~EditCourseDialog();
	void m_student_listOnContextMenu(wxMouseEvent &event)
	{
		m_student_list->PopupMenu(m_student_list_menu, event.GetPosition());
	}
	void m_entry_listOnContextMenu(wxMouseEvent &event)
	{
		m_entry_list->PopupMenu(m_entry_list_menu, event.GetPosition());
	}
	void m_set_active_course(Course* c) { m_active_course = c; }
	void m_set_student_list(map<wxString, Student*> s) { m_students_in_course = s; }
};

#endif // __EDITCOURSEDIALOG_H__

