///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#include "AddEditEntryDialog.h"

///////////////////////////////////////////////////////////////////////////

AddEditEntryDialog::AddEditEntryDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
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

	m_points_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_points_input;
	bSizer_points_input = new wxBoxSizer(wxHORIZONTAL);

	m_points_possible_label = new wxStaticText(m_points_panel, wxID_ANY, wxT("Possible"), wxDefaultPosition, wxSize(-1, -1), 0);
	m_points_possible_label->Wrap(-1);
	bSizer_points_input->Add(m_points_possible_label, 0, wxALL, 5);

	m_points_possible_input = new wxSpinCtrl(m_points_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(100, -1), wxSP_ARROW_KEYS, 1, 100, 0);
	bSizer_points_input->Add(m_points_possible_input, 0, wxALL, 5);


	m_points_panel->SetSizer(bSizer_points_input);
	m_points_panel->Layout();
	bSizer_points_input->Fit(m_points_panel);
	fgSizer2->Add(m_points_panel, 1, wxALL | wxEXPAND, 5);

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
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(AddEditEntryDialog::m_init_edit));
	m_ok_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditEntryDialog::m_return_input), NULL, this);
	m_cancel_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditEntryDialog::m_cancel), NULL, this);
}

AddEditEntryDialog::~AddEditEntryDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(AddEditEntryDialog::m_init_edit));
	m_ok_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditEntryDialog::m_return_input), NULL, this);
	m_cancel_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddEditEntryDialog::m_cancel), NULL, this);
}
void AddEditEntryDialog::m_init_edit(wxInitDialogEvent& event)
{
	m_name_input->SetValue(m_entry_name);
	m_points_possible_input->SetValue(m_possible);
}
void AddEditEntryDialog::m_return_input(wxCommandEvent& event)
{
	m_entry_name = m_name_input->GetLineText(0);
	m_possible = (double)m_points_possible_input->GetValue();
	EndModal(wxOK);
}
void AddEditEntryDialog::m_cancel(wxCommandEvent& event)
{
	EndModal(wxCANCEL);
}