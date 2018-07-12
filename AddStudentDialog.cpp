///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#include "AddStudentDialog.h"

///////////////////////////////////////////////////////////////////////////

AddStudentDialog::AddStudentDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
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

	m_id_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_id_input;
	bSizer_id_input = new wxBoxSizer(wxHORIZONTAL);

	m_id_label = new wxStaticText(m_id_panel, wxID_ANY, wxT("ID"), wxDefaultPosition, wxDefaultSize, 0);
	m_id_label->Wrap(-1);
	bSizer_id_input->Add(m_id_label, 0, wxALL, 5);

	m_id_input = new wxTextCtrl(m_id_panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0);
	m_id_input->SetValidator(wxTextValidator(wxFILTER_NUMERIC, &id_validator));

	bSizer_id_input->Add(m_id_input, 1, wxALL | wxEXPAND, 5);


	m_id_panel->SetSizer(bSizer_id_input);
	m_id_panel->Layout();
	bSizer_id_input->Fit(m_id_panel);
	fgSizer2->Add(m_id_panel, 1, wxEXPAND | wxALL, 5);

	m_button_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_buttons;
	bSizer_buttons = new wxBoxSizer(wxHORIZONTAL);

	m_ok_button = new wxButton(m_button_panel, wxID_ANY, wxT("OK"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer_buttons->Add(m_ok_button, 0, wxALL, 5);

	m_cancel_button = new wxButton(m_button_panel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer_buttons->Add(m_cancel_button, 0, wxALL, 5);


	m_button_panel->SetSizer(bSizer_buttons);
	m_button_panel->Layout();
	bSizer_buttons->Fit(m_button_panel);
	fgSizer2->Add(m_button_panel, 1, wxEXPAND | wxALL, 5);


	this->SetSizer(fgSizer2);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(AddStudentDialog::m_init_edit_student));
	m_ok_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddStudentDialog::m_return_input), NULL, this);
	m_cancel_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddStudentDialog::m_cancel), NULL, this);
}

AddStudentDialog::~AddStudentDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(AddStudentDialog::m_init_edit_student));
	m_ok_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddStudentDialog::m_return_input), NULL, this);
	m_cancel_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(AddStudentDialog::m_cancel), NULL, this);
}
void AddStudentDialog::m_init_edit_student(wxInitDialogEvent& event)
{
	wxString m_id_string;
	m_id_string << m_id_text;
	m_name_input->SetValue(m_name_text);
	m_id_input->SetValue(m_id_string);
}
void AddStudentDialog::m_return_input(wxCommandEvent& event)
{
	m_name_text = m_name_input->GetLineText(0);
	m_id_text = wxAtoi(m_id_input->GetLineText(0));
	EndModal(wxOK);
}
void AddStudentDialog::m_cancel(wxCommandEvent& event)
{
	EndModal(wxCANCEL);
}
