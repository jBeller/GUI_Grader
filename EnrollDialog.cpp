///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#include "EnrollDialog.h"

///////////////////////////////////////////////////////////////////////////
EnrollDialog::EnrollDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxFlexGridSizer* fgSizer7;
	fgSizer7 = new wxFlexGridSizer(4, 1, 0, 0);
	fgSizer7->SetFlexibleDirection(wxBOTH);
	fgSizer7->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_list_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer24;
	bSizer24 = new wxBoxSizer(wxVERTICAL);

	m_prompt_text = new wxStaticText(m_list_panel, wxID_ANY, wxT("Select course to enroll"), wxDefaultPosition, wxDefaultSize, 0);
	m_prompt_text->Wrap(-1);
	bSizer24->Add(m_prompt_text, 0, wxALL, 5);

	m_course_list = new wxListBox(m_list_panel, wxID_ANY, wxDefaultPosition, wxSize(-1, 150), 0, NULL, 0);
	bSizer24->Add(m_course_list, 1, wxALL | wxEXPAND, 5);

	m_enroll_button = new wxButton(m_list_panel, wxID_ANY, wxT("Enroll"), wxDefaultPosition, wxDefaultSize, 0);
	m_enroll_button->Enable(false);

	bSizer24->Add(m_enroll_button, 0, wxALL | wxEXPAND, 5);

	m_cancel_butotn = new wxButton(m_list_panel, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer24->Add(m_cancel_butotn, 0, wxALL | wxEXPAND, 5);


	m_list_panel->SetSizer(bSizer24);
	m_list_panel->Layout();
	bSizer24->Fit(m_list_panel);
	fgSizer7->Add(m_list_panel, 1, wxEXPAND | wxALL, 5);


	this->SetSizer(fgSizer7);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(EnrollDialog::m_init_load_avaliable_courses));
	m_course_list->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(EnrollDialog::m_set_course), NULL, this);
	m_enroll_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnrollDialog::m_enroll_student), NULL, this);
	m_cancel_butotn->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnrollDialog::m_cancel), NULL, this);
}

EnrollDialog::~EnrollDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(EnrollDialog::m_init_load_avaliable_courses));
	m_course_list->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(EnrollDialog::m_set_course), NULL, this);
	m_enroll_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnrollDialog::m_enroll_student), NULL, this);
	m_cancel_butotn->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EnrollDialog::m_cancel), NULL, this);
}
void EnrollDialog::m_init_load_avaliable_courses(wxInitDialogEvent& event)
{
	for (vector<wxString>::iterator it = m_avaliable_courses.begin(); it != m_avaliable_courses.end(); it++)
		m_course_list->Insert(*it, 0);
}
void EnrollDialog::m_set_course(wxCommandEvent& event)
{
	m_selected_course = m_course_list->GetStringSelection();
	if (!m_enroll_button->IsEnabled())
		m_enroll_button->Enable();
}
void EnrollDialog::m_enroll_student(wxCommandEvent& event)
{
	EndModal(wxOK);
}
void EnrollDialog::m_cancel(wxCommandEvent& event)
{
	EndModal(wxCANCEL);
}