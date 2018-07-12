///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#ifndef __MAINFRAME_H__
#define __MAINFRAME_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/listctrl.h>
#include <wx/frame.h>
#include <wx/msgdlg.h>
#include <wx/textdlg.h>
#include <wx/filedlg.h>
#include <wx/wfstream.h>
#include <wx/textfile.h>
#include <wx/log.h>
#include <wx/stattext.h>
#include <algorithm>
#include "AddCourseDialog.h"
#include "EditCourseDialog.h"
#include "AddStudentDialog.h"
#include "EnrollDialog.h"
#include "Student.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrame
///////////////////////////////////////////////////////////////////////////////
class MainFrame : public wxFrame
{
private:
	enum filter {ALL, COURSE, STUDENT} m_filter_mode;
	bool m_changes_made;
	bool m_colored_names_enabled;
	wxPanel* m_student_panel;
	wxListCtrl* m_student_list;
	wxMenu* m_student_list_menu;
	wxMenu* m_sl_name_sort;
	wxMenu* m_sl_gpa_sort;
	wxButton* m_student_add_button;
	wxButton* m_student_change_info_button;
	wxButton* m_enroll_button;
	wxButton* m_student_remove_button;
	wxPanel* m_course_panel;
	wxListCtrl* m_course_list;
	wxMenu* m_course_list_menu;
	wxMenu* m_cl_name_sort;
	wxMenu* m_cl_unit_sort;
	wxButton* m_course_add_button;
	wxButton* m_course_edit_button;
	wxButton* m_course_change_name;
	wxButton* m_course_delete_button;
	wxPanel* m_grading_panel;
	wxStaticText* m_course_text;
	wxStaticText* m_course_units_text;
	wxStaticText* m_course_average_score_text;
	wxStaticText* m_student_text;
	wxStaticText* m_student_grade_text;
	wxStaticText* m_student_gpa_text;
	wxMenuBar* m_main_menu_bar;
	wxMenu* m_file_menu;
	wxMenu* m_filter_menu;
	wxMenu* m_help_menu;
	map<wxString, Student*> m_student_map;
	map<wxString, Course*> m_course_map;
	long m_currently_selected_student;
	long m_currently_selected_course;
	bool m_student_name_exists(wxString n);
	bool m_student_id_exists(int i);
	bool m_course_name_exists(wxString n);
	void m_disable_student_buttons();
	void m_disable_course_buttons();
	void m_colorize_names();
	void m_reset_name_colors();
	void m_set_course_text();
	void m_set_student_text();
	static bool m_gpa_comparison(Student* i, Student* j) { return i->s_get_gpa() < j->s_get_gpa(); }
	static bool m_unit_comparison(Course* i, Course* j) { return i->c_get_units() < j->c_get_units(); }

protected:

	void m_check_for_changes_before_close(wxCloseEvent& event);
	void m_student_deselect(wxListEvent& event);
	void m_load_courses(wxListEvent& event);
	void m_sort_students_by_name_az(wxCommandEvent& event);
	void m_sort_students_by_name_za(wxCommandEvent& event);
	void m_sort_students_by_gpa_lowest_first(wxCommandEvent& event);
	void m_sort_students_by_gpa_highest_first(wxCommandEvent& event);
	void m_toggle_color_code(wxCommandEvent& event);
	void m_add_student(wxCommandEvent& event);
	void m_change_student_info(wxCommandEvent& event);
	void m_enroll_student(wxCommandEvent& event);
	void m_remove_student(wxCommandEvent& event);
	void m_course_deselect(wxListEvent& event);
	void m_load_students(wxListEvent& event);
	void m_sort_courses_by_name_az(wxCommandEvent& event);
	void m_sort_courses_by_name_za(wxCommandEvent& event);
	void m_sort_courses_by_units_lowest_first(wxCommandEvent& event);
	void m_sort_courses_by_units_highest_first(wxCommandEvent& event);
	void m_course_error_check(wxCommandEvent& event);
	void m_add_course(wxCommandEvent& event);
	void m_edit_course(wxCommandEvent& event);
	void m_change_course_name(wxCommandEvent& event);
	void m_delete_course(wxCommandEvent& event);
	void m_open_file(wxCommandEvent& event);
	void m_save_file(wxCommandEvent& event);
	void m_filter_change_everything(wxCommandEvent& event);
	void m_filter_change_student(wxCommandEvent& event);
	void m_filter_change_course(wxCommandEvent& event);
	void m_display_about(wxCommandEvent& event);
	void m_show_color_help(wxCommandEvent& event);

public:

	MainFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("GUI Grader"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(562, 450), long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);
	~MainFrame();
	void m_student_listOnContextMenu(wxMouseEvent &event)
	{
		m_student_list->PopupMenu(m_student_list_menu, event.GetPosition());
	}
	void m_course_listOnContextMenu(wxMouseEvent &event)
	{
		m_course_list->PopupMenu(m_course_list_menu, event.GetPosition());
	}
};

#endif //__MAINFRAME_H__
