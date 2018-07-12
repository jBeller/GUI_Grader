///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////
#ifndef __ADDEDITENTRYDIALOG_H__
#define __ADDEDITENTRYDIALOG_H__

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
/// Class AddEditEntryDialog
///////////////////////////////////////////////////////////////////////////////
class AddEditEntryDialog : public wxDialog
{
private:
	wxPanel* m_name_panel;
	wxStaticText* m_name_label;
	wxTextCtrl* m_name_input;
	wxPanel* m_points_panel;
	wxStaticText* m_points_possible_label;
	wxSpinCtrl* m_points_possible_input;
	wxPanel* m_button_panel;
	wxButton* m_ok_button;
	wxButton* m_cancel_button;
	wxString m_entry_name;
	double m_possible;

protected:

	void m_init_edit(wxInitDialogEvent& event);
	void m_return_input(wxCommandEvent& event);
	void m_cancel(wxCommandEvent& event);

public:

	AddEditEntryDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Entry"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(237, 175), long style = wxDEFAULT_DIALOG_STYLE);
	~AddEditEntryDialog();
	void m_set_entry_name(wxString n) { m_entry_name = n; }
	wxString m_get_entry_name() { return m_entry_name; }
	double m_get_points() { return m_possible; }
	void m_set_points(double p) { m_possible = p; }
};

#endif // __ADDEDITENTRYDIALOG_H__

