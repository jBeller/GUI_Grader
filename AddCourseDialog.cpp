///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#include "AddCourseDialog.h"

///////////////////////////////////////////////////////////////////////////

AddCourseDialog::AddCourseDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer(3, 1, 0, 0);
	fgSizer2->SetFlexibleDirection(wxBOTH);
	fgSizer2->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_name_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_name_input;
	bSizer_name_input = new wxBoxSizer(wxHORIZONTAL);

	m_name_label = new wxStaticText(m_name_panel, wxID_ANY, wxT("Name"), wxDefaultPosition, wxDefaultSize, 0);
	m_name_label->Wrap(-1);
	bSizer_name_input->Add(m_name_label, 0, wxALL | wxEXPAND, 5);

	m_name_input = new wxTextCtrl(m_name_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	bSizer_name_input->Add(m_name_input, 1, wxALL | wxEXPAND, 5);


	m_name_panel->SetSizer(bSizer_name_input);
	m_name_panel->Layout();
	bSizer_name_input->Fit(m_name_panel);
	fgSizer2->Add(m_name_panel, 1, wxEXPAND | wxALL, 5);

	m_gp_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_id_input;
	bSizer_id_input = new wxBoxSizer(wxHORIZONTAL);

	m_gp_label = new wxStaticText(m_gp_panel, wxID_ANY, wxT("Grade Points"), wxDefaultPosition, wxDefaultSize, 0);
	m_gp_label->Wrap(-1);
	bSizer_id_input->Add(m_gp_label, 0, wxALL, 5);

	m_gp_input = new wxSpinCtrl(m_gp_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 4, 3);
	bSizer_id_input->Add(m_gp_input, 0, wxALL, 5);


	m_gp_panel->SetSizer(bSizer_id_input);
	m_gp_panel->Layout();
	bSizer_id_input->Fit(m_gp_panel);
	fgSizer2->Add(m_gp_panel, 1, wxEXPAND | wxALL, 5);

	m_button_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_buttons;
	bSizer_buttons = new wxBoxSizer(wxHORIZONTAL);

	m_ok_button = new wxButton(m_button_panel, wxID_ANY, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer_buttons->Add(m_ok_button, 1, wxALL | wxEXPAND, 5);

	m_cancel_button = new wxButton(m_button_panel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer_buttons->Add(m_cancel_button, 1, wxALL | wxEXPAND, 5);


	m_button_panel->SetSizer(bSizer_buttons);
	m_button_panel->Layout();
	bSizer_buttons->Fit(m_button_panel);
	fgSizer2->Add(m_button_panel, 1, wxEXPAND | wxALL, 5);


	this->SetSizer(fgSizer2);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	m_ok_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddCourseDialog::m_return_input), NULL, this);
	m_cancel_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddCourseDialog::m_cancel), NULL, this);
}

AddCourseDialog::~AddCourseDialog()
{
	// Disconnect Events
	m_ok_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddCourseDialog::m_return_input), NULL, this);
	m_cancel_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddCourseDialog::m_cancel), NULL, this);
}
void AddCourseDialog::m_return_input(wxCommandEvent& event)
{
	m_name_text = m_name_input->GetLineText(0);
	m_gp_value = (double)m_gp_input->GetValue();
	EndModal(wxOK);
}
void AddCourseDialog::m_cancel(wxCommandEvent& event)
{
	EndModal(wxCANCEL);
}
