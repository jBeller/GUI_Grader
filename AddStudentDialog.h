///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////
#ifndef __ADDSTUDENTDIALOG_H__
#define __ADDSTUDENTDIALOG_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/valtext.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class AddStudentDialog
///////////////////////////////////////////////////////////////////////////////
class AddStudentDialog : public wxDialog
{
private:
	wxPanel* m_name_panel;
	wxStaticText* m_name_label;
	wxTextCtrl* m_name_input;
	wxPanel* m_id_panel;
	wxStaticText* m_id_label;
	wxTextCtrl* m_id_input;
	wxPanel* m_button_panel;
	wxButton* m_ok_button;
	wxButton* m_cancel_button;
	wxString m_name_text;
	int m_id_text;

protected:

	void m_init_edit_student(wxInitDialogEvent& event);
	void m_return_input(wxCommandEvent& event);
	void m_cancel(wxCommandEvent& event);

public:
	wxString id_validator;

	AddStudentDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Add Student"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(236, 175), long style = wxDEFAULT_DIALOG_STYLE);
	~AddStudentDialog();
	void m_set_name_input(wxString s) { m_name_text = s; }
	void m_set_id_input(int i) { m_id_text = i; }
	wxString m_get_name_input() { return m_name_text; }
	int m_get_id_input() { return m_id_text; }
};

#endif // __ADDSTUDENTDIALOG_H__

