///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////
#ifndef __ADDEDITPORTIONDIALOG_H__
#define __ADDEDITPORTIONDIALOG_H__

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
/// Class AddEditPortionDialog
///////////////////////////////////////////////////////////////////////////////
class AddEditPortionDialog : public wxDialog
{
private:
	wxPanel* m_name_panel;
	wxStaticText* m_name_label;
	wxTextCtrl* m_name_input;
	wxPanel* m_weight_panel;
	wxStaticText* m_weight_label;
	wxSpinCtrl* m_weight_input;
	wxPanel* m_button_panel;
	wxButton* m_ok_button;
	wxButton* m_cancel_button;
	wxString m_portion_name;
	double m_weight;

protected:

	void m_init_edit(wxInitDialogEvent& event);
	void m_return_input(wxCommandEvent& event);
	void m_cancel(wxCommandEvent& event);

public:

	AddEditPortionDialog(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Portion"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(236, 175), long style = wxDEFAULT_DIALOG_STYLE);
	~AddEditPortionDialog();
	void m_set_name_input(wxString n) { m_portion_name = n; }
	void m_set_weight_input(double w) { m_weight = w; }
	wxString m_get_name_input() { return m_portion_name; }
	double m_get_weight_input() { return m_weight; }

};

#endif // __ADDEDITPORTIONDIALOG_H__

