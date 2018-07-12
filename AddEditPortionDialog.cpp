///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#include "AddEditPortionDialog.h"

///////////////////////////////////////////////////////////////////////////

AddEditPortionDialog::AddEditPortionDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
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

	m_weight_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_weight_input;
	bSizer_weight_input = new wxBoxSizer(wxHORIZONTAL);

	m_weight_label = new wxStaticText(m_weight_panel, wxID_ANY, wxT("Weight (%)"), wxDefaultPosition, wxDefaultSize, 0);
	m_weight_label->Wrap(-1);
	bSizer_weight_input->Add(m_weight_label, 0, wxALL, 5);

	m_weight_input = new wxSpinCtrl(m_weight_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 1, 100, 1);
	bSizer_weight_input->Add(m_weight_input, 0, wxALL, 5);


	m_weight_panel->SetSizer(bSizer_weight_input);
	m_weight_panel->Layout();
	bSizer_weight_input->Fit(m_weight_panel);
	fgSizer2->Add(m_weight_panel, 1, wxEXPAND | wxALL, 5);

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
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(AddEditPortionDialog::m_init_edit));
	m_ok_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditPortionDialog::m_return_input), NULL, this);
	m_cancel_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditPortionDialog::m_cancel), NULL, this);
}

AddEditPortionDialog::~AddEditPortionDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(AddEditPortionDialog::m_init_edit));
	m_ok_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditPortionDialog::m_return_input), NULL, this);
	m_cancel_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditPortionDialog::m_cancel), NULL, this);
}
void AddEditPortionDialog::m_init_edit(wxInitDialogEvent& event)
{
	m_name_input->SetValue(m_portion_name);
	m_weight_input->SetValue(m_weight);
}
void AddEditPortionDialog::m_return_input(wxCommandEvent& event)
{
	m_portion_name = m_name_input->GetLineText(0);
	m_weight = (double)m_weight_input->GetValue();
	EndModal(wxOK);
}
void AddEditPortionDialog::m_cancel(wxCommandEvent& event)
{
	EndModal(wxCANCEL);
}