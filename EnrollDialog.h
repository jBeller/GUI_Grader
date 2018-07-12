///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////
#ifndef __ENROLLDIALOG_H__
#define __ENROLLDIALOG_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/listbox.h>
#include <wx/button.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/dialog.h>
#include "Student.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class EnrollDialog
///////////////////////////////////////////////////////////////////////////////
class EnrollDialog : public wxDialog
{
private:
	wxPanel* m_list_panel;
	wxStaticText* m_prompt_text;
	wxListBox* m_course_list;
	wxButton* m_enroll_button;
	wxButton* m_cancel_butotn;
	Student* m_active_student;
	wxString m_selected_course;
	vector<wxString> m_avaliable_courses;

protected:

	void m_init_load_avaliable_courses(wxInitDialogEvent& event);
	void m_set_course(wxCommandEvent& event);
	void m_enroll_student(wxCommandEvent& event);
	void m_cancel(wxCommandEvent& event);

public:

	EnrollDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Enroll Student"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(179, 271), long style = wxDEFAULT_DIALOG_STYLE);
	~EnrollDialog();
	void m_setup_avaliable_courses(vector<wxString> &vec) { m_avaliable_courses = vec; }
	void m_set_active_student(Student* s) { m_active_student = s; }
	wxString m_get_selected_course() { return m_selected_course; }

};

#endif // __ENROLLDIALOG_H__

