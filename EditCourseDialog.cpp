///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#include "EditCourseDialog.h"

///////////////////////////////////////////////////////////////////////////
map<wxString, double> EditCourseDialog::m_entry_points_map;

EditCourseDialog::EditCourseDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxDialog(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxDefaultSize, wxDefaultSize);

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer(3, 3, 0, 0);
	fgSizer2->SetFlexibleDirection(wxBOTH);
	fgSizer2->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_portion_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerPortionList;
	bSizerPortionList = new wxBoxSizer(wxHORIZONTAL);

	m_portions_list = new wxListBox(m_portion_panel, wxID_ANY, wxDefaultPosition, wxSize(145, 100), 0, NULL, 0);
	m_portions_list->SetToolTip(wxT("Portion List"));

	bSizerPortionList->Add(m_portions_list, 0, wxALL, 5);


	m_portion_panel->SetSizer(bSizerPortionList);
	m_portion_panel->Layout();
	bSizerPortionList->Fit(m_portion_panel);
	fgSizer2->Add(m_portion_panel, 1, wxEXPAND | wxALL, 5);

	m_porton_info_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerPortionInfo;
	bSizerPortionInfo = new wxBoxSizer(wxVERTICAL);

	m_weight_text = new wxStaticText(m_porton_info_panel, wxID_ANY, wxT("Portion weight: 0%"), wxDefaultPosition, wxDefaultSize, 0);
	m_weight_text->Wrap(-1);
	bSizerPortionInfo->Add(m_weight_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_weight_total_text = new wxStaticText(m_porton_info_panel, wxID_ANY, wxT("Weight total: 0%"), wxDefaultPosition, wxDefaultSize, 0);
	m_weight_total_text->Wrap(-1);
	m_weight_total_text->SetForegroundColour(wxColour(255, 0, 0));

	bSizerPortionInfo->Add(m_weight_total_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);


	m_porton_info_panel->SetSizer(bSizerPortionInfo);
	m_porton_info_panel->Layout();
	bSizerPortionInfo->Fit(m_porton_info_panel);
	fgSizer2->Add(m_porton_info_panel, 0, wxALIGN_CENTER_VERTICAL | wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_portion_button_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerPortionButton;
	bSizerPortionButton = new wxBoxSizer(wxVERTICAL);

	m_add_portion_button = new wxButton(m_portion_button_panel, wxID_ANY, wxT("Add Portion"), wxDefaultPosition, wxDefaultSize, 0);
	bSizerPortionButton->Add(m_add_portion_button, 1, wxALL | wxEXPAND, 5);

	m_edit_portion_button = new wxButton(m_portion_button_panel, wxID_ANY, wxT("Edit Portion"), wxDefaultPosition, wxDefaultSize, 0);
	m_edit_portion_button->Enable(false);

	bSizerPortionButton->Add(m_edit_portion_button, 1, wxALL | wxEXPAND, 5);

	m_remove_portion_button = new wxButton(m_portion_button_panel, wxID_ANY, wxT("Remove Portion"), wxDefaultPosition, wxDefaultSize, 0);
	m_remove_portion_button->Enable(false);

	bSizerPortionButton->Add(m_remove_portion_button, 1, wxALL | wxEXPAND, 5);


	m_portion_button_panel->SetSizer(bSizerPortionButton);
	m_portion_button_panel->Layout();
	bSizerPortionButton->Fit(m_portion_button_panel);
	fgSizer2->Add(m_portion_button_panel, 1, wxALL | wxEXPAND, 5);

	m_student_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerStudentList;
	bSizerStudentList = new wxBoxSizer(wxVERTICAL);

	m_student_list = new wxListCtrl(m_student_panel, wxID_ANY, wxDefaultPosition, wxSize(145, 150), wxLC_REPORT | wxLC_SINGLE_SEL);
	m_student_list_menu = new wxMenu();
	m_sl_name_sort = new wxMenu();
	wxMenuItem* m_sl_name_sortItem = new wxMenuItem(m_student_list_menu, wxID_ANY, wxT("Sort by name"), wxEmptyString, wxITEM_NORMAL, m_sl_name_sort);
	wxMenuItem* m_sl_name_sort_az;
	m_sl_name_sort_az = new wxMenuItem(m_sl_name_sort, wxID_ANY, wxString(wxT("A to Z")), wxEmptyString, wxITEM_NORMAL);
	m_sl_name_sort->Append(m_sl_name_sort_az);

	wxMenuItem* m_sl_name_sort_za;
	m_sl_name_sort_za = new wxMenuItem(m_sl_name_sort, wxID_ANY, wxString(wxT("Z to A")), wxEmptyString, wxITEM_NORMAL);
	m_sl_name_sort->Append(m_sl_name_sort_za);

	m_student_list_menu->Append(m_sl_name_sortItem);

	m_sl_grade_sort = new wxMenu();
	wxMenuItem* m_sl_grade_sortItem = new wxMenuItem(m_student_list_menu, wxID_ANY, wxT("Sort by grade"), wxEmptyString, wxITEM_NORMAL, m_sl_grade_sort);
	wxMenuItem* m_sl_grade_sort_lh;
	m_sl_grade_sort_lh = new wxMenuItem(m_sl_grade_sort, wxID_ANY, wxString(wxT("Lowest to highest")), wxEmptyString, wxITEM_NORMAL);
	m_sl_grade_sort->Append(m_sl_grade_sort_lh);

	wxMenuItem* m_sl_grade_sort_hl;
	m_sl_grade_sort_hl = new wxMenuItem(m_sl_grade_sort, wxID_ANY, wxString(wxT("Highest to lowest")), wxEmptyString, wxITEM_NORMAL);
	m_sl_grade_sort->Append(m_sl_grade_sort_hl);

	m_student_list_menu->Append(m_sl_grade_sortItem);

	wxMenuItem* m_sl_color_code;
	m_sl_color_code = new wxMenuItem(m_student_list_menu, wxID_ANY, wxString(wxT("Color students by grade")), wxEmptyString, wxITEM_CHECK);
	m_student_list_menu->Append(m_sl_color_code);

	m_student_list->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(EditCourseDialog::m_student_listOnContextMenu), NULL, this);

	bSizerStudentList->Add(m_student_list, 1, wxALL | wxEXPAND, 5);


	m_student_panel->SetSizer(bSizerStudentList);
	m_student_panel->Layout();
	bSizerStudentList->Fit(m_student_panel);
	fgSizer2->Add(m_student_panel, 1, wxALL | wxEXPAND, 5);

	m_entry_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerEntryList;
	bSizerEntryList = new wxBoxSizer(wxVERTICAL);

	m_entry_list = new wxListCtrl(m_entry_panel, wxID_ANY, wxDefaultPosition, wxSize(145, 150), wxLC_REPORT | wxLC_SINGLE_SEL);
	m_entry_list_menu = new wxMenu();
	m_el_points_sort = new wxMenu();
	wxMenuItem* m_el_points_sortItem = new wxMenuItem(m_entry_list_menu, wxID_ANY, wxT("Sort by points"), wxEmptyString, wxITEM_NORMAL, m_el_points_sort);
	wxMenuItem* m_el_points_sort_lh;
	m_el_points_sort_lh = new wxMenuItem(m_el_points_sort, wxID_ANY, wxString(wxT("Lowest to highest")), wxEmptyString, wxITEM_NORMAL);
	m_el_points_sort->Append(m_el_points_sort_lh);

	wxMenuItem* m_el_points_sort_hl;
	m_el_points_sort_hl = new wxMenuItem(m_el_points_sort, wxID_ANY, wxString(wxT("Highest to lowest")), wxEmptyString, wxITEM_NORMAL);
	m_el_points_sort->Append(m_el_points_sort_hl);

	m_entry_list_menu->Append(m_el_points_sortItem);

	m_entry_list->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(EditCourseDialog::m_entry_listOnContextMenu), NULL, this);

	bSizerEntryList->Add(m_entry_list, 1, wxALL | wxEXPAND, 5);


	m_entry_panel->SetSizer(bSizerEntryList);
	m_entry_panel->Layout();
	bSizerEntryList->Fit(m_entry_panel);
	fgSizer2->Add(m_entry_panel, 1, wxEXPAND | wxALL, 5);

	m_entry_button_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerEntryButton;
	bSizerEntryButton = new wxBoxSizer(wxVERTICAL);

	m_add_entry_button = new wxButton(m_entry_button_panel, wxID_ANY, wxT("Add Entry"), wxDefaultPosition, wxDefaultSize, 0);
	m_add_entry_button->Enable(false);

	bSizerEntryButton->Add(m_add_entry_button, 1, wxALL | wxEXPAND, 5);

	m_edit_entry_button = new wxButton(m_entry_button_panel, wxID_ANY, wxT("Edit Entry"), wxDefaultPosition, wxDefaultSize, 0);
	m_edit_entry_button->Enable(false);

	bSizerEntryButton->Add(m_edit_entry_button, 1, wxALL | wxEXPAND, 5);

	m_remove_entry_button = new wxButton(m_entry_button_panel, wxID_ANY, wxT("Remove Entry"), wxDefaultPosition, wxDefaultSize, 0);
	m_remove_entry_button->Enable(false);

	bSizerEntryButton->Add(m_remove_entry_button, 1, wxALL | wxEXPAND, 5);


	m_entry_button_panel->SetSizer(bSizerEntryButton);
	m_entry_button_panel->Layout();
	bSizerEntryButton->Fit(m_entry_button_panel);
	fgSizer2->Add(m_entry_button_panel, 1, wxEXPAND | wxALL, 5);

	m_earned_button_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerEntryButton1;
	bSizerEntryButton1 = new wxBoxSizer(wxVERTICAL);

	m_earned_text = new wxStaticText(m_earned_button_panel, wxID_ANY, wxT("Points earned: -"), wxDefaultPosition, wxDefaultSize, 0);
	m_earned_text->Wrap(-1);
	bSizerEntryButton1->Add(m_earned_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_score_percentage_text = new wxStaticText(m_earned_button_panel, wxID_ANY, wxT("Score: -%"), wxDefaultPosition, wxDefaultSize, 0);
	m_score_percentage_text->Wrap(-1);
	m_score_percentage_text->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_CAPTIONTEXT));

	bSizerEntryButton1->Add(m_score_percentage_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_edit_score_button = new wxButton(m_earned_button_panel, wxID_ANY, wxT("Edit Score"), wxDefaultPosition, wxDefaultSize, 0);
	m_edit_score_button->Enable(false);

	bSizerEntryButton1->Add(m_edit_score_button, 0, wxTOP | wxBOTTOM | wxRIGHT | wxALIGN_CENTER_HORIZONTAL, 5);


	m_earned_button_panel->SetSizer(bSizerEntryButton1);
	m_earned_button_panel->Layout();
	bSizerEntryButton1->Fit(m_earned_button_panel);
	fgSizer2->Add(m_earned_button_panel, 1, wxEXPAND | wxALL, 5);

	m_entry_info_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerEntryInfo;
	bSizerEntryInfo = new wxBoxSizer(wxVERTICAL);

	m_possible_text = new wxStaticText(m_entry_info_panel, wxID_ANY, wxT("Points possible: -"), wxDefaultPosition, wxDefaultSize, 0);
	m_possible_text->Wrap(-1);
	bSizerEntryInfo->Add(m_possible_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_class_average_text = new wxStaticText(m_entry_info_panel, wxID_ANY, wxT("Class average: -"), wxDefaultPosition, wxDefaultSize, 0);
	m_class_average_text->Wrap(-1);
	bSizerEntryInfo->Add(m_class_average_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_score_average_text = new wxStaticText(m_entry_info_panel, wxID_ANY, wxT("Average score: -%"), wxDefaultPosition, wxDefaultSize, 0);
	m_score_average_text->Wrap(-1);
	bSizerEntryInfo->Add(m_score_average_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);


	m_entry_info_panel->SetSizer(bSizerEntryInfo);
	m_entry_info_panel->Layout();
	bSizerEntryInfo->Fit(m_entry_info_panel);
	fgSizer2->Add(m_entry_info_panel, 1, wxALL | wxEXPAND, 5);

	m_grade_points_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizerGradePoints;
	bSizerGradePoints = new wxBoxSizer(wxVERTICAL);

	m_grade_points_text = new wxStaticText(m_grade_points_panel, wxID_ANY, wxT("Units: 0.0"), wxDefaultPosition, wxDefaultSize, 0);
	m_grade_points_text->Wrap(-1);
	bSizerGradePoints->Add(m_grade_points_text, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);

	m_grade_points_button = new wxButton(m_grade_points_panel, wxID_ANY, wxT("Edit Units"), wxDefaultPosition, wxDefaultSize, 0);
	bSizerGradePoints->Add(m_grade_points_button, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);


	m_grade_points_panel->SetSizer(bSizerGradePoints);
	m_grade_points_panel->Layout();
	bSizerGradePoints->Fit(m_grade_points_panel);
	fgSizer2->Add(m_grade_points_panel, 1, wxEXPAND | wxALL | wxALIGN_CENTER_VERTICAL, 5);


	this->SetSizer(fgSizer2);
	this->Layout();

	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(EditCourseDialog::m_init_load_course));
	m_portions_list->Connect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(EditCourseDialog::m_load_portion), NULL, this);
	m_portions_list->Connect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_portion), NULL, this);
	m_add_portion_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_add_portion), NULL, this);
	m_edit_portion_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_portion), NULL, this);
	m_remove_portion_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_remove_portion), NULL, this);
	m_student_list->Connect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(EditCourseDialog::m_deselect_student), NULL, this);
	m_student_list->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(EditCourseDialog::m_select_student), NULL, this);
	this->Connect(m_sl_name_sort_az->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_name_az));
	this->Connect(m_sl_name_sort_za->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_name_za));
	this->Connect(m_sl_grade_sort_lh->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_grade_lowest_first));
	this->Connect(m_sl_grade_sort_hl->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_grade_highest_first));
	this->Connect(m_sl_color_code->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_toggle_color_code));
	m_entry_list->Connect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(EditCourseDialog::m_deselect_entry), NULL, this);
	m_entry_list->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(EditCourseDialog::m_load_entry), NULL, this);
	this->Connect(m_el_points_sort_lh->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_entries_by_points_lowest_first));
	this->Connect(m_el_points_sort_hl->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_entries_by_points_highest_first));
	m_add_entry_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_add_entry), NULL, this);
	m_edit_entry_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_entry), NULL, this);
	m_remove_entry_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_remove_entry), NULL, this);
	m_edit_score_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_score), NULL, this);
	m_grade_points_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_units), NULL, this);

	m_currently_selected_student = -1;
	m_currently_selected_entry = -1;
	m_colored_names_enabled = false;
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_entry_list->InsertColumn(0, _("Entries"), wxLIST_FORMAT_LEFT, 150);
}

EditCourseDialog::~EditCourseDialog()
{
	// Disconnect Events
	this->Disconnect(wxEVT_INIT_DIALOG, wxInitDialogEventHandler(EditCourseDialog::m_init_load_course));
	m_portions_list->Disconnect(wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler(EditCourseDialog::m_load_portion), NULL, this);
	m_portions_list->Disconnect(wxEVT_COMMAND_LISTBOX_DOUBLECLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_portion), NULL, this);
	m_add_portion_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_add_portion), NULL, this);
	m_edit_portion_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_portion), NULL, this);
	m_remove_portion_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_remove_portion), NULL, this);
	m_student_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(EditCourseDialog::m_deselect_student), NULL, this);
	m_student_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(EditCourseDialog::m_select_student), NULL, this);
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_name_az));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_name_za));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_grade_lowest_first));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_students_by_grade_highest_first));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_toggle_color_code));
	m_entry_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(EditCourseDialog::m_deselect_entry), NULL, this);
	m_entry_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(EditCourseDialog::m_load_entry), NULL, this);
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_entries_by_points_lowest_first));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(EditCourseDialog::m_sort_entries_by_points_highest_first));
	m_add_entry_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_add_entry), NULL, this);
	m_edit_entry_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_entry), NULL, this);
	m_remove_entry_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_remove_entry), NULL, this);
	m_edit_score_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_score), NULL, this);
	m_grade_points_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(EditCourseDialog::m_edit_units), NULL, this);

	delete m_student_list_menu;
	delete m_entry_list_menu;
}
void EditCourseDialog::m_init_load_course(wxInitDialogEvent& event)
{
	double weight, units;
	wxString weight_string, units_string;
	vector<wxString> portion_names;
	portion_names = m_active_course->c_get_portion_names();
	for (vector<wxString>::iterator it = portion_names.begin(); it != portion_names.end(); it++)
		m_portions_list->Insert(*it, 0);

	weight = m_active_course->c_get_total_weight();
	weight_string << weight;
	m_weight_total_text->SetLabel(_("Weight total: ") + weight_string + _("%"));
	if (weight == 100.0)
		m_weight_total_text->SetForegroundColour(*wxBLACK);
	else
		m_weight_total_text->SetForegroundColour(*wxRED);

	if (!m_students_in_course.empty())
	{
		for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
			m_student_list->InsertItem(0, it->first);
	}
	else
		m_student_list->Disable();

	units = m_active_course->c_get_units();
	units_string << units;
	m_grade_points_text->SetLabel(_("Units: ") + units_string);
	SetTitle(_("Course Editor - ") + m_active_course->c_get_name());
}
void EditCourseDialog::m_colorize_names()
{
	if (!m_active_course->c_validate_weights())
	{
		wxMessageBox(_("Cannot color code when the total weight does not add up to 100%!"), _("Error"), wxICON_ERROR);
		return;
	}

	long index;
	double grade;

	for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
	{
		index = m_student_list->FindItem(-1, it->first);
		grade = (it->second)->s_calculate_course(m_active_course->c_get_name());
		if (grade == -1)      // Students in blue have errors
			m_student_list->SetItemTextColour(index, *wxBLUE);
		else if (grade < 0.7) // Students in red have a failing grade (less than 70%)
			m_student_list->SetItemTextColour(index, *wxRED);
		else if (grade < 0.8) // Students in yellow are at risk of failing (less than 80%)
			m_student_list->SetItemTextColour(index, wxColour(204, 204, 0));
		else                  // Students in green have good grades
			m_student_list->SetItemTextColour(index, wxColour(0, 150, 0));
	}
}
void EditCourseDialog::m_reset_name_colors()
{
	for (long i = 0; i < m_student_list->GetItemCount(); i++)
		m_student_list->SetItemTextColour(i, *wxBLACK);
}
void EditCourseDialog::m_enable_entry_buttons()
{
	if (!m_edit_entry_button->IsEnabled())
		m_edit_entry_button->Enable();
	if (!m_remove_entry_button->IsEnabled())
		m_remove_entry_button->Enable();
}
void EditCourseDialog::m_disable_entry_buttons()
{
	if (m_edit_entry_button->IsEnabled())
		m_edit_entry_button->Disable();
	if (m_remove_entry_button->IsEnabled())
		m_remove_entry_button->Disable();
}
void EditCourseDialog::m_enable_portion_buttons()
{
	if (!m_edit_portion_button->IsEnabled())
		m_edit_portion_button->Enable();
	if (!m_remove_portion_button->IsEnabled())
		m_remove_portion_button->Enable();
}
void EditCourseDialog::m_disable_portion_buttons()
{
	if (m_edit_portion_button->IsEnabled())
		m_edit_portion_button->Disable();
	if (m_remove_portion_button->IsEnabled())
		m_remove_portion_button->Disable();
}
void EditCourseDialog::m_calculate_average_score()
{
	wxString working_entry = m_entry_list->GetItemText(m_currently_selected_entry, 0);
	double score = 0.0;
	wxString score_string, percentage_string;

	for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
		score += (it->second)->s_get_points_earned(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), working_entry);

	score_string << score / (double)m_students_in_course.size();
	percentage_string << ((score / (double)m_students_in_course.size()) / m_active_course->c_get_entry_points(m_portions_list->GetStringSelection(), working_entry)) * 100;
	m_class_average_text->SetLabel(_("Class average: ") + score_string);
	m_score_average_text->SetLabel(_("Average score: ") + percentage_string + _("%"));
}
void EditCourseDialog::m_load_portion(wxCommandEvent& event)
{
	m_enable_portion_buttons();

	if (!m_add_entry_button->IsEnabled())
		m_add_entry_button->Enable();

	m_disable_entry_buttons();
	m_currently_selected_entry = -1;

	wxString weight_string;
	weight_string << m_active_course->c_get_portion_weight(m_portions_list->GetStringSelection());
	m_weight_text->SetLabel(_("Portion weight: ") + weight_string + _("%"));

	m_possible_text->SetLabel(_("Points possible: -"));
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
	m_class_average_text->SetLabel(_("Class average: -"));
	m_score_average_text->SetLabel(_("Average score: -%"));
	m_entry_list->ClearAll();
	m_entry_list->InsertColumn(0, _("Entries"), wxLIST_FORMAT_LEFT, 150);

	vector<wxString> entry_names;
	entry_names = m_active_course->c_get_entry_names_by_portion(m_portions_list->GetStringSelection());
	for (vector<wxString>::iterator it = entry_names.begin(); it != entry_names.end(); it++)
		m_entry_list->InsertItem(0, *it);
}
void EditCourseDialog::m_edit_portion(wxCommandEvent& event)
{
	double old_weight, new_weight, total_weight;
	wxString old_name, new_name, weight_string, total_weight_string;
	AddEditPortionDialog dlg(this);

	old_name = m_portions_list->GetStringSelection();
	old_weight = m_active_course->c_get_portion_weight(m_portions_list->GetStringSelection());
	dlg.m_set_name_input(old_name);
	dlg.m_set_weight_input(old_weight);
	unsigned int i = m_portions_list->GetSelection();

	while (dlg.ShowModal() == wxOK)
	{
		new_name = dlg.m_get_name_input();
		new_weight = dlg.m_get_weight_input();

		if (old_name != new_name)
		{
			if (m_active_course->c_portion_name_exists(new_name))
			{
				wxMessageBox(_("There already is a portion with the name ") + dlg.m_get_name_input() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
				continue;
			}
			else
			{
				m_active_course->c_modify_portion_name(old_name, new_name);
				m_portions_list->SetString(i, new_name);
				for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
					(it->second)->s_update_portion_name(m_active_course->c_get_name(), old_name, new_name);
			}
		}
		if (old_weight != new_weight)
		{
			m_active_course->c_modify_portion_weight(new_name, new_weight);
			weight_string << new_weight;
			m_weight_text->SetLabel(_("Portion weight: ") + weight_string + _("%"));
			total_weight = m_active_course->c_get_total_weight();
			total_weight_string << total_weight;
			m_weight_total_text->SetLabel(_("Weight total: ") + total_weight_string + _("%"));
			if (total_weight == 100.0)
				m_weight_total_text->SetForegroundColour(*wxBLACK);
			else
				m_weight_total_text->SetForegroundColour(*wxRED);
		}
		break;
	}
}
void EditCourseDialog::m_add_portion(wxCommandEvent& event)
{
	double weight;
	wxString weight_string;
	AddEditPortionDialog dlg(this);
	dlg.m_set_name_input(_(" "));
	dlg.m_set_weight_input(0.0);

	while (dlg.ShowModal() == wxOK)
	{
		if (m_active_course->c_portion_name_exists(dlg.m_get_name_input()))
		{
			wxMessageBox(_("There already is a portion with the name ") + dlg.m_get_name_input() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			m_active_course->c_create_portion(dlg.m_get_name_input(), dlg.m_get_weight_input());
			m_portions_list->Insert(dlg.m_get_name_input(), 0);
			weight = m_active_course->c_get_total_weight();
			weight_string << weight;
			m_weight_total_text->SetLabel(_("Weight Total: ") + weight_string + _("%"));
			if (weight == 100.0)
				m_weight_total_text->SetForegroundColour(*wxBLACK);
			else
				m_weight_total_text->SetForegroundColour(*wxRED);
			break;
		}
	}
}
void EditCourseDialog::m_remove_portion(wxCommandEvent& event)
{
	double weight;
	wxString weight_string;
	wxMessageDialog conf_dlg(this, _("Removing this portion will delete all entries in it!\nAre you sure you want to do this?"), wxMessageBoxCaptionStr, wxYES_NO);
	unsigned int i = m_portions_list->GetSelection();

	if (i != wxNOT_FOUND && conf_dlg.ShowModal() == wxID_YES)
	{
		m_active_course->c_delete_portion(m_portions_list->GetStringSelection());
		for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
			(it->second)->s_remove_portion(m_active_course->c_get_name(), m_portions_list->GetStringSelection());
		m_portions_list->Delete(i);
		m_weight_text->SetLabel(_("Portion weight: 0%"));
		weight = m_active_course->c_get_total_weight();
		weight_string << weight;
		m_weight_total_text->SetLabel(_("Weight total: ") + weight_string + _("%"));
		if (weight == 100.0)
			m_weight_total_text->SetForegroundColour(*wxBLACK);
		else
			m_weight_total_text->SetForegroundColour(*wxRED);

		m_possible_text->SetLabel(_("Points possible: -"));
		m_earned_text->SetLabel(_("Points earned: -"));
		m_score_percentage_text->SetLabel(_("Score: -%"));
		m_class_average_text->SetLabel(_("Class average: -"));
		m_score_average_text->SetLabel(_("Average score: -%"));
		m_entry_list->ClearAll();
		m_entry_list->InsertColumn(0, _("Entries"), wxLIST_FORMAT_LEFT, 150);
		m_currently_selected_entry = -1;

		m_disable_portion_buttons();
		if (m_add_entry_button->IsEnabled())
			m_add_entry_button->Disable();
		m_disable_entry_buttons();
		if (m_edit_score_button->IsEnabled())
			m_edit_score_button->Disable();
	}
}
void EditCourseDialog::m_deselect_student(wxListEvent& event)
{
	m_currently_selected_student = -1;
	if (m_edit_score_button->IsEnabled())
		m_edit_score_button->Disable();
	m_score_percentage_text->SetLabel(_("Score: -%"));
}
void EditCourseDialog::m_select_student(wxListEvent& event)
{
	double earned, possible, percentage;
	wxString earned_string, percentage_string;
	m_currently_selected_student = m_student_list->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);

	if (m_currently_selected_entry != -1)
	{
		possible = m_active_course->c_get_entry_points(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
		earned = m_students_in_course[m_student_list->GetItemText(m_currently_selected_student)]->s_get_points_earned(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
		earned_string << earned;
		percentage = (earned / possible) * 100;
		percentage_string << percentage;
		m_earned_text->SetLabel(_("Points earned: ") + earned_string);
		m_score_percentage_text->SetLabel(_("Score: ") + percentage_string + _("%"));
		if (!m_edit_score_button->IsEnabled())
			m_edit_score_button->Enable();
	}
}
void EditCourseDialog::m_sort_students_by_name_az(wxCommandEvent& event)
{
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;

	// In std::maps, the string keys should already be ordered
	for (map<wxString, Student*>::reverse_iterator it = m_students_in_course.rbegin(); it != m_students_in_course.rend(); it++)
		m_student_list->InsertItem(0, it->first);
	if (m_colored_names_enabled)
		m_colorize_names();
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
}
void EditCourseDialog::m_sort_students_by_name_za(wxCommandEvent& event)
{
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;

	for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
		m_student_list->InsertItem(0, it->first);
	if (m_colored_names_enabled)
		m_colorize_names();
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
}
void EditCourseDialog::m_sort_students_by_grade_lowest_first(wxCommandEvent& event)
{
	if (!m_active_course->c_validate_weights())
	{
		wxMessageBox(_("Cannot sort students by grade when the total weight does not add up to 100%!"), _("Error"), wxICON_ERROR);
		return;
	}

	vector<Student*> s_vec_sorted;

	for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
	{
		(it->second)->s_calculate_course(m_active_course->c_get_name());
		s_vec_sorted.push_back(it->second);
	}

	std::sort(s_vec_sorted.begin(), s_vec_sorted.end(), m_grade_comparison);
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	for (vector<Student*>::reverse_iterator it = s_vec_sorted.rbegin(); it != s_vec_sorted.rend(); it++)
		m_student_list->InsertItem(0, (*it)->s_get_name());
	if (m_colored_names_enabled)
		m_colorize_names();
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
}
void EditCourseDialog::m_sort_students_by_grade_highest_first(wxCommandEvent& event)
{
	if (!m_active_course->c_validate_weights())
	{
		wxMessageBox(_("Cannot sort students by grade when the total weight does not add up to 100%!"), _("Error"), wxICON_ERROR);
		return;
	}

	vector<Student*> s_vec_sorted;

	for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
	{
		(it->second)->s_calculate_course(m_active_course->c_get_name());
		s_vec_sorted.push_back(it->second);
	}

	std::sort(s_vec_sorted.begin(), s_vec_sorted.end(), m_grade_comparison);
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	for (vector<Student*>::iterator it = s_vec_sorted.begin(); it != s_vec_sorted.end(); it++)
		m_student_list->InsertItem(0, (*it)->s_get_name());
	if (m_colored_names_enabled)
		m_colorize_names();
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
}
void EditCourseDialog::m_toggle_color_code(wxCommandEvent& event)
{
	if (!m_colored_names_enabled)
	{
		m_colored_names_enabled = true;
		m_colorize_names();
	}
	else
	{
		m_colored_names_enabled = false;
		m_reset_name_colors();
	}
}
void EditCourseDialog::m_deselect_entry(wxListEvent& event)
{
	m_currently_selected_entry = -1;
	m_disable_entry_buttons();
	if (m_edit_score_button->IsEnabled())
		m_edit_score_button->Disable();
	m_possible_text->SetLabel(_("Points possible: -"));
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
	m_class_average_text->SetLabel(_("Class average: -"));
	m_score_average_text->SetLabel(_("Average score: -%"));
}
void EditCourseDialog::m_load_entry(wxListEvent& event)
{
	m_enable_entry_buttons();

	double earned, possible, percentage;
	wxString earned_string, possible_string, percentage_string;
	m_currently_selected_entry = m_entry_list->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);

	possible = m_active_course->c_get_entry_points(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
	possible_string << possible;
	m_possible_text->SetLabel(_("Points possible: ") + possible_string);
	if (m_student_list->IsEnabled())
		m_calculate_average_score();
	if (m_student_list->IsEnabled() && m_currently_selected_student != -1)
	{
		earned = m_students_in_course[m_student_list->GetItemText(m_currently_selected_student)]->s_get_points_earned(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
		earned_string << earned;
		percentage = (earned / possible) * 100;
		percentage_string << percentage;
		m_earned_text->SetLabel(_("Points earned: ") + earned_string);
		m_score_percentage_text->SetLabel(_("Score: ") + percentage_string + _("%"));
		if (!m_edit_score_button->IsEnabled())
			m_edit_score_button->Enable();
	}
}
void EditCourseDialog::m_sort_entries_by_points_lowest_first(wxCommandEvent& event)
{
	vector<wxString> vec_sorted;

	for (long i = 0; i < m_entry_list->GetItemCount(); i++)
	{
		vec_sorted.push_back(m_entry_list->GetItemText(i, 0));
		m_entry_points_map.insert(std::pair<wxString, double>(m_entry_list->GetItemText(i, 0), m_active_course->c_get_entry_points(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(i, 0))));
	}

	std::sort(vec_sorted.begin(), vec_sorted.end(), m_points_comparison);
	m_currently_selected_entry = -1;
	m_entry_list->ClearAll();
	m_entry_list->InsertColumn(0, _("Entries"), wxLIST_FORMAT_LEFT, 150);
	for (vector<wxString>::reverse_iterator it = vec_sorted.rbegin(); it != vec_sorted.rend(); it++)
		m_entry_list->InsertItem(0, *it);

	m_possible_text->SetLabel(_("Points possible: -"));
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
	m_class_average_text->SetLabel(_("Class average: -"));
	m_score_average_text->SetLabel(_("Average score: -%"));
	m_disable_entry_buttons();
	if (m_edit_score_button->IsEnabled())
		m_edit_score_button->Disable();
	m_entry_points_map.clear();
}
void EditCourseDialog::m_sort_entries_by_points_highest_first(wxCommandEvent& event)
{
	vector<wxString> vec_sorted;

	for (long i = 0; i < m_entry_list->GetItemCount(); i++)
	{
		vec_sorted.push_back(m_entry_list->GetItemText(i, 0));
		m_entry_points_map.insert(std::pair<wxString, double>(m_entry_list->GetItemText(i, 0), m_active_course->c_get_entry_points(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(i, 0))));
	}

	std::sort(vec_sorted.begin(), vec_sorted.end(), m_points_comparison);
	m_currently_selected_entry = -1;
	m_entry_list->ClearAll();
	m_entry_list->InsertColumn(0, _("Entries"), wxLIST_FORMAT_LEFT, 150);
	for (vector<wxString>::iterator it = vec_sorted.begin(); it != vec_sorted.end(); it++)
		m_entry_list->InsertItem(0, *it);

	m_possible_text->SetLabel(_("Points possible: -"));
	m_earned_text->SetLabel(_("Points earned: -"));
	m_score_percentage_text->SetLabel(_("Score: -%"));
	m_class_average_text->SetLabel(_("Class average: -"));
	m_score_average_text->SetLabel(_("Average score: -%"));
	m_disable_entry_buttons();
	if (m_edit_score_button->IsEnabled())
		m_edit_score_button->Disable();
	m_entry_points_map.clear();
}
void EditCourseDialog::m_edit_entry(wxCommandEvent& event)
{
	double old_possible, new_possible, earned, percentage;
	wxString old_name, new_name, possible_string, earned_string, percentage_string;
	AddEditEntryDialog dlg(this);
	old_possible = m_active_course->c_get_entry_points(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
	old_name = m_entry_list->GetItemText(m_currently_selected_entry);
	dlg.m_set_entry_name(old_name);
	dlg.m_set_points(old_possible);

	while (dlg.ShowModal() == wxOK)
	{
		new_name = dlg.m_get_entry_name();
		new_possible = dlg.m_get_points();

		if (old_name != new_name)
		{
			if (m_active_course->c_entry_name_exists(new_name))
			{
				wxMessageBox(_("There already is an entry with the name ") + dlg.m_get_entry_name() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
				continue;
			}
			else
			{
				m_active_course->c_modify_entry_name(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry), new_name);
				m_entry_list->SetItem(m_currently_selected_entry, 0, new_name);
				for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
					(it->second)->s_update_entry_name(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), old_name, new_name);
			}
		}
		if (old_possible != new_possible)
		{
			m_active_course->c_modify_entry_points(m_portions_list->GetStringSelection(), new_name, new_possible);
			possible_string << new_possible;
			m_possible_text->SetLabel(_("Points possible: ") + possible_string);
			if (m_student_list->IsEnabled())
			{
				if (m_currently_selected_student != -1)
				{
					earned = m_students_in_course[m_student_list->GetItemText(m_currently_selected_student)]->s_get_points_earned(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), new_name);
					earned_string << earned;
					percentage = (earned / new_possible) * 100;
					percentage_string << percentage;
					m_earned_text->SetLabel(_("Points earned: ") + earned_string);
					m_score_percentage_text->SetLabel(_("Score: ") + percentage_string + _("%"));
				}
			}
		}
		break;
	}
	if (m_student_list->IsEnabled())
		m_calculate_average_score();
}
void EditCourseDialog::m_add_entry(wxCommandEvent& event)
{
	double possible;
	wxString name;
	AddEditEntryDialog dlg(this);
	dlg.m_set_entry_name(_(" "));
	dlg.m_set_points(0.0);

	while (dlg.ShowModal() == wxOK)
	{
		if (m_active_course->c_entry_name_exists(dlg.m_get_entry_name()))
		{
			wxMessageBox(_("There already is an entry with the name ") + dlg.m_get_entry_name() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			name = dlg.m_get_entry_name();
			possible = dlg.m_get_points();

			m_active_course->c_insert_entry(m_portions_list->GetStringSelection(), name, possible);
			m_entry_list->InsertItem(0, name);
			for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
				(it->second)->s_insert_entry(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), name, 0.0);
			break;
		}
	}
}
void EditCourseDialog::m_remove_entry(wxCommandEvent& event)
{
	wxMessageDialog conf_dlg(this, _("Are you sure you want to remove this entry?"), wxMessageBoxCaptionStr, wxYES_NO);

	if (m_currently_selected_entry != -1 && conf_dlg.ShowModal() == wxID_YES)
	{
		m_active_course->c_delete_entry(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
		for (map<wxString, Student*>::iterator it = m_students_in_course.begin(); it != m_students_in_course.end(); it++)
			(it->second)->s_remove_entry(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
		m_entry_list->DeleteItem(m_currently_selected_entry);

		m_possible_text->SetLabel(_("Points possible: -"));
		m_earned_text->SetLabel(_("Points earned: -"));
		m_score_percentage_text->SetLabel(_("Score: -%"));
		m_class_average_text->SetLabel(_("Class average: -"));
		m_score_average_text->SetLabel(_("Average score: -%"));
		m_currently_selected_entry = -1;

		m_disable_entry_buttons();
		if (m_edit_score_button->IsEnabled())
			m_edit_score_button->Disable();
	}
}
void EditCourseDialog::m_edit_score(wxCommandEvent& event)
{
	double earned, possible, percentage;
	wxString earned_string, percentage_string;
	wxTextEntryDialog text_input(this, _("Please enter points earned"));
	text_input.SetTextValidator(wxFILTER_NUMERIC);
	
	while (text_input.ShowModal() == wxID_OK)
	{
		earned = wxAtof(text_input.GetValue());
		if (earned < 0.0)
		{
			wxMessageBox(_("The score cannot be negative. Please enter a positive value."), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			earned_string << earned;
			possible = m_active_course->c_get_entry_points(m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry));
			percentage = (earned / possible) * 100;
			percentage_string << percentage;
			m_earned_text->SetLabel(_("Points Earned: ") + earned_string);
			m_score_percentage_text->SetLabel(_("Score: ") + percentage_string + _("%"));
			m_students_in_course[m_student_list->GetItemText(m_currently_selected_student)]->s_set_points_earned(m_active_course->c_get_name(), m_portions_list->GetStringSelection(), m_entry_list->GetItemText(m_currently_selected_entry), earned);
			m_calculate_average_score();
			break;
		}
	}
}
void EditCourseDialog::m_edit_units(wxCommandEvent& event)
{
	double units;
	wxString units_string;
	wxTextEntryDialog text_input(this, _("Please enter units (Min 1.0, Max 4.0)"));
	text_input.SetTextValidator(wxFILTER_NUMERIC);

	while (text_input.ShowModal() == wxID_OK)
	{
		units = wxAtof(text_input.GetValue());
		if (units < 1.0 || units > 4.0)
		{
			wxMessageBox(_("The units have to be in the range 1.0 and 4.0."), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			m_active_course->c_change_units(units);
			units_string << units;
			m_grade_points_text->SetLabel(_("Units: ") + units_string);
			break;
		}
	}
}