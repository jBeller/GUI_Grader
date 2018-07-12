///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////
#ifndef __ADDCOURSEDIALOG_H__
#define __ADDCOURSEDIALOG_H__

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
#include <wx/spinctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class AddCourseDialog
///////////////////////////////////////////////////////////////////////////////
class AddCourseDialog : public wxDialog
{
private:
	wxPanel* m_name_panel;
	wxStaticText* m_name_label;
	wxTextCtrl* m_name_input;
	wxPanel* m_gp_panel;
	wxStaticText* m_gp_label;
	wxSpinCtrl* m_gp_input;
	wxPanel* m_button_panel;
	wxButton* m_ok_button;
	wxButton* m_cancel_button;
	wxString m_name_text;
	double m_gp_value;

protected:

	void m_return_input(wxCommandEvent& event);
	void m_cancel(wxCommandEvent& event);

public:

	AddCourseDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Add Course"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(236, 175), long style = wxDEFAULT_DIALOG_STYLE);
	~AddCourseDialog();
	void m_set_gp_input(double g) { m_gp_value = g; }
	wxString m_get_name_input() { return m_name_text; }
	double m_get_gp_input() { return m_gp_value; }
};

#endif // __ADDCOURSEDIALOG_H__

