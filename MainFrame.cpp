///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep 26 2017)
// http://www.wxformbuilder.org/
///////////////////////////////////////////////////////////////////////////

#include "MainFrame.h"

///////////////////////////////////////////////////////////////////////////

MainFrame::MainFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style) : wxFrame(parent, id, title, pos, size, style)
{
	this->SetSizeHints(wxSize(562, 450), wxSize(562, 450));
	this->SetForegroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_WINDOW));
	this->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_MENU));

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer(0, 3, 0, 0);
	fgSizer1->SetFlexibleDirection(wxBOTH);
	fgSizer1->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);

	m_student_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_Students;
	bSizer_Students = new wxBoxSizer(wxVERTICAL);

	m_student_list = new wxListCtrl(m_student_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT | wxLC_SINGLE_SEL);
	m_student_list->SetMinSize(wxSize(150, 500));

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

	m_sl_gpa_sort = new wxMenu();
	wxMenuItem* m_sl_gpa_sortItem = new wxMenuItem(m_student_list_menu, wxID_ANY, wxT("Sort by GPA"), wxEmptyString, wxITEM_NORMAL, m_sl_gpa_sort);
	wxMenuItem* m_sl_gpa_sort_lh;
	m_sl_gpa_sort_lh = new wxMenuItem(m_sl_gpa_sort, wxID_ANY, wxString(wxT("Lowest to highest")), wxEmptyString, wxITEM_NORMAL);
	m_sl_gpa_sort->Append(m_sl_gpa_sort_lh);

	wxMenuItem* m_sl_gpa_sort_hl;
	m_sl_gpa_sort_hl = new wxMenuItem(m_sl_gpa_sort, wxID_ANY, wxString(wxT("Highest to lowest")), wxEmptyString, wxITEM_NORMAL);
	m_sl_gpa_sort->Append(m_sl_gpa_sort_hl);

	m_student_list_menu->Append(m_sl_gpa_sortItem);

	wxMenuItem* m_sl_color_code;
	m_sl_color_code = new wxMenuItem(m_student_list_menu, wxID_ANY, wxString(wxT("Color Students by Status")), wxEmptyString, wxITEM_CHECK);
	m_student_list_menu->Append(m_sl_color_code);

	m_student_list->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(MainFrame::m_student_listOnContextMenu), NULL, this);

	bSizer_Students->Add(m_student_list, 1, wxALL | wxEXPAND, 5);

	m_student_add_button = new wxButton(m_student_panel, wxID_ANY, wxT("Add Student"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer_Students->Add(m_student_add_button, 0, wxALL | wxEXPAND, 5);

	m_student_change_info_button = new wxButton(m_student_panel, wxID_ANY, wxT("Change Info"), wxDefaultPosition, wxDefaultSize, 0);
	m_student_change_info_button->Enable(false);

	bSizer_Students->Add(m_student_change_info_button, 0, wxALL | wxEXPAND, 5);

	m_enroll_button = new wxButton(m_student_panel, wxID_ANY, wxT("Enroll Student"), wxDefaultPosition, wxDefaultSize, 0);
	m_enroll_button->Enable(false);

	bSizer_Students->Add(m_enroll_button, 0, wxALL | wxEXPAND, 5);

	m_student_remove_button = new wxButton(m_student_panel, wxID_ANY, wxT("Remove Student"), wxDefaultPosition, wxDefaultSize, 0);
	m_student_remove_button->Enable(false);

	bSizer_Students->Add(m_student_remove_button, 0, wxALL | wxEXPAND, 5);


	m_student_panel->SetSizer(bSizer_Students);
	m_student_panel->Layout();
	bSizer_Students->Fit(m_student_panel);
	fgSizer1->Add(m_student_panel, 1, wxALL | wxEXPAND, 5);

	m_course_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_Courses;
	bSizer_Courses = new wxBoxSizer(wxVERTICAL);

	m_course_list = new wxListCtrl(m_course_panel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLC_REPORT | wxLC_SINGLE_SEL);
	m_course_list->SetMinSize(wxSize(150, 500));

	m_course_list_menu = new wxMenu();
	m_cl_name_sort = new wxMenu();
	wxMenuItem* m_cl_name_sortItem = new wxMenuItem(m_course_list_menu, wxID_ANY, wxT("Sort by name"), wxEmptyString, wxITEM_NORMAL, m_cl_name_sort);
	wxMenuItem* m_cl_name_sort_az;
	m_cl_name_sort_az = new wxMenuItem(m_cl_name_sort, wxID_ANY, wxString(wxT("A to Z")), wxEmptyString, wxITEM_NORMAL);
	m_cl_name_sort->Append(m_cl_name_sort_az);

	wxMenuItem* m_cl_name_sort_za;
	m_cl_name_sort_za = new wxMenuItem(m_cl_name_sort, wxID_ANY, wxString(wxT("Z to A")), wxEmptyString, wxITEM_NORMAL);
	m_cl_name_sort->Append(m_cl_name_sort_za);

	m_course_list_menu->Append(m_cl_name_sortItem);

	m_cl_unit_sort = new wxMenu();
	wxMenuItem* m_cl_unit_sortItem = new wxMenuItem(m_course_list_menu, wxID_ANY, wxT("Sort by units"), wxEmptyString, wxITEM_NORMAL, m_cl_unit_sort);
	wxMenuItem* m_cl_unit_sort_lh;
	m_cl_unit_sort_lh = new wxMenuItem(m_cl_unit_sort, wxID_ANY, wxString(wxT("Lowest to highest")), wxEmptyString, wxITEM_NORMAL);
	m_cl_unit_sort->Append(m_cl_unit_sort_lh);

	wxMenuItem* m_cl_unit_sort_hl;
	m_cl_unit_sort_hl = new wxMenuItem(m_cl_unit_sort, wxID_ANY, wxString(wxT("Highest to lowest")), wxEmptyString, wxITEM_NORMAL);
	m_cl_unit_sort->Append(m_cl_unit_sort_hl);

	m_course_list_menu->Append(m_cl_unit_sortItem);

	wxMenuItem* m_cl_errors;
	m_cl_errors = new wxMenuItem(m_course_list_menu, wxID_ANY, wxString(wxT("Check for errors")), wxEmptyString, wxITEM_NORMAL);
	m_course_list_menu->Append(m_cl_errors);

	m_course_list->Connect(wxEVT_RIGHT_DOWN, wxMouseEventHandler(MainFrame::m_course_listOnContextMenu), NULL, this);

	bSizer_Courses->Add(m_course_list, 1, wxALL | wxEXPAND, 5);

	m_course_add_button = new wxButton(m_course_panel, wxID_ANY, wxT("Add Course"), wxDefaultPosition, wxDefaultSize, 0);
	bSizer_Courses->Add(m_course_add_button, 0, wxALL | wxEXPAND, 5);

	m_course_edit_button = new wxButton(m_course_panel, wxID_ANY, wxT("Edit Course"), wxDefaultPosition, wxDefaultSize, 0);
	m_course_edit_button->Enable(false);

	bSizer_Courses->Add(m_course_edit_button, 0, wxALL | wxEXPAND, 5);

	m_course_change_name = new wxButton(m_course_panel, wxID_ANY, wxT("Change Name"), wxDefaultPosition, wxDefaultSize, 0);
	m_course_change_name->Enable(false);

	bSizer_Courses->Add(m_course_change_name, 0, wxALL | wxEXPAND, 5);

	m_course_delete_button = new wxButton(m_course_panel, wxID_ANY, wxT("Delete Course"), wxDefaultPosition, wxDefaultSize, 0);
	m_course_delete_button->Enable(false);

	bSizer_Courses->Add(m_course_delete_button, 0, wxALL | wxEXPAND, 5);


	m_course_panel->SetSizer(bSizer_Courses);
	m_course_panel->Layout();
	bSizer_Courses->Fit(m_course_panel);
	fgSizer1->Add(m_course_panel, 1, wxEXPAND | wxALL, 5);

	m_grading_panel = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL);
	wxBoxSizer* bSizer_Grading;
	bSizer_Grading = new wxBoxSizer(wxVERTICAL);

	bSizer_Grading->SetMinSize(wxSize(150, -1));
	m_course_text = new wxStaticText(m_grading_panel, wxID_ANY, wxT("Course"), wxDefaultPosition, wxDefaultSize, 0);
	m_course_text->Wrap(-1);
	bSizer_Grading->Add(m_course_text, 0, wxALL, 5);

	m_course_units_text = new wxStaticText(m_grading_panel, wxID_ANY, wxT("     Units: -"), wxDefaultPosition, wxDefaultSize, 0);
	m_course_units_text->Wrap(-1);
	bSizer_Grading->Add(m_course_units_text, 0, wxALL, 5);

	m_course_average_score_text = new wxStaticText(m_grading_panel, wxID_ANY, wxT("     Average: -%"), wxDefaultPosition, wxDefaultSize, 0);
	m_course_average_score_text->Wrap(-1);
	bSizer_Grading->Add(m_course_average_score_text, 0, wxALL, 5);

	m_student_text = new wxStaticText(m_grading_panel, wxID_ANY, wxT("Student"), wxDefaultPosition, wxDefaultSize, 0);
	m_student_text->Wrap(-1);
	bSizer_Grading->Add(m_student_text, 0, wxALL, 5);

	m_student_grade_text = new wxStaticText(m_grading_panel, wxID_ANY, wxT("     Grade: -%"), wxDefaultPosition, wxDefaultSize, 0);
	m_student_grade_text->Wrap(-1);
	bSizer_Grading->Add(m_student_grade_text, 0, wxALL, 5);

	m_student_gpa_text = new wxStaticText(m_grading_panel, wxID_ANY, wxT("     GPA: -"), wxDefaultPosition, wxDefaultSize, 0);
	m_student_gpa_text->Wrap(-1);
	bSizer_Grading->Add(m_student_gpa_text, 0, wxALL, 5);


	m_grading_panel->SetSizer(bSizer_Grading);
	m_grading_panel->Layout();
	bSizer_Grading->Fit(m_grading_panel);
	fgSizer1->Add(m_grading_panel, 1, wxALIGN_CENTER | wxALL, 5);


	this->SetSizer(fgSizer1);
	this->Layout();
	m_main_menu_bar = new wxMenuBar(0);
	m_file_menu = new wxMenu();
	wxMenuItem* m_file_open;
	m_file_open = new wxMenuItem(m_file_menu, wxID_ANY, wxString(wxT("Open...")), wxEmptyString, wxITEM_NORMAL);
	m_file_menu->Append(m_file_open);

	wxMenuItem* m_file_save;
	m_file_save = new wxMenuItem(m_file_menu, wxID_ANY, wxString(wxT("Save")), wxEmptyString, wxITEM_NORMAL);
	m_file_menu->Append(m_file_save);

	m_main_menu_bar->Append(m_file_menu, wxT("File"));

	m_filter_menu = new wxMenu();
	wxMenuItem* m_filter_everything;
	m_filter_everything = new wxMenuItem(m_filter_menu, wxID_ANY, wxString(wxT("Load everything")), wxEmptyString, wxITEM_RADIO);
	m_filter_menu->Append(m_filter_everything);

	wxMenuItem* m_filter_by_student;
	m_filter_by_student = new wxMenuItem(m_filter_menu, wxID_ANY, wxString(wxT("Load courses by student")), wxEmptyString, wxITEM_RADIO);
	m_filter_menu->Append(m_filter_by_student);

	wxMenuItem* m_filter_by_course;
	m_filter_by_course = new wxMenuItem(m_filter_menu, wxID_ANY, wxString(wxT("Load students by course")), wxEmptyString, wxITEM_RADIO);
	m_filter_menu->Append(m_filter_by_course);

	m_main_menu_bar->Append(m_filter_menu, wxT("Filters"));

	m_help_menu = new wxMenu();
	wxMenuItem* m_help_about;
	m_help_about = new wxMenuItem(m_help_menu, wxID_ANY, wxString(wxT("About")), wxEmptyString, wxITEM_NORMAL);
	m_help_menu->Append(m_help_about);

	wxMenuItem* m_help_color_code;
	m_help_color_code = new wxMenuItem(m_help_menu, wxID_ANY, wxString(wxT("Color Code")), wxEmptyString, wxITEM_NORMAL);
	m_help_menu->Append(m_help_color_code);

	m_main_menu_bar->Append(m_help_menu, wxT("Help"));

	this->SetMenuBar(m_main_menu_bar);


	this->Centre(wxBOTH);

	// Connect Events
	this->Connect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MainFrame::m_check_for_changes_before_close));
	m_student_list->Connect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(MainFrame::m_student_deselect), NULL, this);
	m_student_list->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(MainFrame::m_load_courses), NULL, this);
	this->Connect(m_sl_name_sort_az->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_name_az));
	this->Connect(m_sl_name_sort_za->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_name_za));
	this->Connect(m_sl_gpa_sort_lh->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_gpa_lowest_first));
	this->Connect(m_sl_gpa_sort_hl->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_gpa_highest_first));
	this->Connect(m_sl_color_code->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_toggle_color_code));
	m_student_add_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_add_student), NULL, this);
	m_student_change_info_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_change_student_info), NULL, this);
	m_enroll_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_enroll_student), NULL, this);
	m_student_remove_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_remove_student), NULL, this);
	m_course_list->Connect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(MainFrame::m_course_deselect), NULL, this);
	m_course_list->Connect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(MainFrame::m_load_students), NULL, this);
	this->Connect(m_cl_name_sort_az->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_name_az));
	this->Connect(m_cl_name_sort_za->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_name_za));
	this->Connect(m_cl_unit_sort_lh->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_units_lowest_first));
	this->Connect(m_cl_unit_sort_hl->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_units_highest_first));
	this->Connect(m_cl_errors->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_course_error_check));
	m_course_add_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_add_course), NULL, this);
	m_course_edit_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_edit_course), NULL, this);
	m_course_change_name->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_change_course_name), NULL, this);
	m_course_delete_button->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_delete_course), NULL, this);
	this->Connect(m_file_open->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_open_file));
	this->Connect(m_file_save->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_save_file));
	this->Connect(m_filter_everything->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_filter_change_everything));
	this->Connect(m_filter_by_student->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_filter_change_student));
	this->Connect(m_filter_by_course->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_filter_change_course));
	this->Connect(m_help_about->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_display_about));
	this->Connect(m_help_color_code->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_show_color_help));

	m_currently_selected_student = -1;
	m_currently_selected_course = -1;
	m_changes_made = false;
	m_colored_names_enabled = false;
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
}

MainFrame::~MainFrame()
{
	// Disconnect Events
	this->Disconnect(wxEVT_CLOSE_WINDOW, wxCloseEventHandler(MainFrame::m_check_for_changes_before_close));
	m_student_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(MainFrame::m_student_deselect), NULL, this);
	m_student_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(MainFrame::m_load_courses), NULL, this);
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_name_az));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_name_za));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_gpa_lowest_first));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_students_by_gpa_highest_first));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_toggle_color_code));
	m_student_add_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_add_student), NULL, this);
	m_student_change_info_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_change_student_info), NULL, this);
	m_enroll_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_enroll_student), NULL, this);
	m_student_remove_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_remove_student), NULL, this);
	m_course_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_DESELECTED, wxListEventHandler(MainFrame::m_course_deselect), NULL, this);
	m_course_list->Disconnect(wxEVT_COMMAND_LIST_ITEM_SELECTED, wxListEventHandler(MainFrame::m_load_students), NULL, this);
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_name_az));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_name_za));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_units_lowest_first));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_sort_courses_by_units_highest_first));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_course_error_check));
	m_course_add_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_add_course), NULL, this);
	m_course_edit_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_edit_course), NULL, this);
	m_course_change_name->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_change_course_name), NULL, this);
	m_course_delete_button->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(MainFrame::m_delete_course), NULL, this);
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_open_file));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_save_file));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_filter_change_everything));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_filter_change_student));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_filter_change_course));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_display_about));
	this->Disconnect(wxID_ANY, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrame::m_show_color_help));

	delete m_student_list_menu;
	delete m_course_list_menu;

	// Clear maps
	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		delete it->second;
	for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
		delete it->second;
	m_student_map.clear();
	m_course_map.clear();

}
bool MainFrame::m_student_name_exists(wxString n)
{
	if (m_student_map.count(n) > 0)
		return true;
	else
		return false;
}
bool MainFrame::m_student_id_exists(int i)
{
	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
	{
		if ((it->second)->s_get_id() == i)
			return true;
	}
	return false;
}
bool MainFrame::m_course_name_exists(wxString n)
{
	if (m_course_map.count(n) > 0)
		return true;
	else
		return false;
}
void MainFrame::m_disable_student_buttons()
{
	if (m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Disable();
	if (m_student_remove_button->IsEnabled())
		m_student_remove_button->Disable();
	if (m_enroll_button->IsEnabled())
		m_enroll_button->Disable();
}
void MainFrame::m_disable_course_buttons()
{
	if (m_course_change_name->IsEnabled())
		m_course_change_name->Disable();
	if (m_course_edit_button->IsEnabled())
		m_course_edit_button->Disable();
	if (m_course_delete_button->IsEnabled())
		m_course_delete_button->Disable();
}
void MainFrame::m_colorize_names()
{
	long index;
	double gpa;
	vector<wxString> err;

	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
	{
		if (m_filter_mode == COURSE && !(it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
			continue;
		index = m_student_list->FindItem(-1, it->first);
		gpa = (it->second)->s_calculate_gpa(err);
		if (gpa == -1)      // Students in blue have errors
			m_student_list->SetItemTextColour(index, *wxBLUE);
		else if (gpa < 2.0) // Students in red have very low GPA (below 2.0)
			m_student_list->SetItemTextColour(index, *wxRED);
		else if (gpa < 3.0) // Students in yellow have GPAs below 3.0
			m_student_list->SetItemTextColour(index, wxColour(204,204,0));
		else                // Students in green have good GPA
			m_student_list->SetItemTextColour(index, wxColour(0,150,0));
	}
}
void MainFrame::m_reset_name_colors()
{
	for (long i = 0; i < m_student_list->GetItemCount(); i++)
		m_student_list->SetItemTextColour(i, *wxBLACK);
}
void MainFrame::m_set_course_text()
{
	if (m_currently_selected_course == -1)
		return;

	map<wxString, Student*> enrolled_students;
	double average = 0.0;
	wxString text, avg_text;
	text << m_course_map[m_course_list->GetItemText(m_currently_selected_course, 0)]->c_get_units();
	m_course_units_text->SetLabel(_("     Units: ") + text);
	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
	{
		if ((it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
			enrolled_students.insert(std::pair<wxString, Student*>(it->first, it->second));
	}
	if (enrolled_students.empty())
		m_course_average_score_text->SetLabel(_("     No students in course"));
	else if (!m_course_map[m_course_list->GetItemText(m_currently_selected_course, 0)]->c_validate_weights())
		m_course_average_score_text->SetLabel(_("     Invalid portion weights"));
	else
	{
		for (map<wxString, Student*>::iterator it = enrolled_students.begin(); it != enrolled_students.end(); it++)
			average += (it->second)->s_calculate_course(m_course_list->GetItemText(m_currently_selected_course, 0));

		avg_text << (average / (double)enrolled_students.size())*100;
		m_course_average_score_text->SetLabel(_("     Average: ") + avg_text + _("%"));
	}
}
void MainFrame::m_set_student_text()
{
	if (m_currently_selected_student == -1)
		return;
	else if (m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_get_no_of_courses() == 0)
	{
		m_student_grade_text->SetLabel(_("     Grade: -%"));
		m_student_gpa_text->SetLabel(_("     GPA: No courses taken"));
		return;
	}

	double grade, points;
	wxString points_string, grade_string, string_errors;
	vector<wxString> errors;

	if (m_currently_selected_course != -1)
	{
	    if (!m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
			m_student_grade_text->SetLabel(_("     Grade: Not enrolled"));
		else
		{
			grade = m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_calculate_course(m_course_list->GetItemText(m_currently_selected_course, 0));
			if (grade < 0.0)
				m_student_grade_text->SetLabel(_("     Grade: Invalid portion weights"));
			else
			{
				grade_string << grade * 100;
				m_student_grade_text->SetLabel(_("     Grade: ") + grade_string + _("%"));
			}
		}
	}
	else
		m_student_grade_text->SetLabel(_("     Grade: -%"));

	points = m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_calculate_gpa(errors);
	if (points < 0.0)
	{
		for (vector<wxString>::iterator it = errors.begin(); it != errors.end(); it++)
			string_errors += (*it + _("\n"));
		wxMessageBox(_("Could not calculate ") + m_student_list->GetItemText(m_currently_selected_student) + _("'s GPA because the following courses have invalid portion weight totals: \n") + string_errors, _("Error"), wxICON_ERROR);
		m_student_gpa_text->SetLabel(_("     GPA: Error"));
	}
	else
	{
		points_string << points;
		m_student_gpa_text->SetLabel(_("     GPA: ") + points_string);
	}
}
void MainFrame::m_check_for_changes_before_close(wxCloseEvent& event)
{
	wxCommandEvent ev;
	int conf;
	if (m_changes_made)
	{
		conf = wxMessageBox(_("Current content has not been saved! Do you want to save before exiting?"), _("Please confirm"), wxICON_QUESTION | wxYES_NO | wxCANCEL, this);
		if (conf == wxYES)
			m_save_file(ev);
		else if (conf == wxCANCEL)
			return;
	}
	Destroy();
}
void MainFrame::m_student_deselect(wxListEvent& event)
{
	m_currently_selected_student = -1;
	m_disable_student_buttons();
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));
}
void MainFrame::m_add_student(wxCommandEvent& event)
{
	Student* s;
	AddStudentDialog dlg(this);
	wxString str;
	dlg.m_set_name_input(_(" "));
	dlg.m_set_id_input(0);

	while (dlg.ShowModal() == wxOK)
	{
		if (m_student_name_exists(dlg.m_get_name_input()))
		{
			wxMessageBox(_("There already is a student with the name ") + dlg.m_get_name_input() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
			continue;
		}
		else if (m_student_id_exists(dlg.m_get_id_input()))
		{
			str << dlg.m_get_id_input();
			wxMessageBox(_("There already is a student with the id ") + str + _("\nPlease enter a different id"), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			s = new Student(dlg.m_get_name_input(), dlg.m_get_id_input());
			m_student_map.insert(std::pair<wxString, Student*>(dlg.m_get_name_input(), s));
			m_student_list->InsertItem(0, dlg.m_get_name_input());
			s = NULL;
			m_changes_made = true;
			break;
		}
	}
}
void MainFrame::m_change_student_info(wxCommandEvent& event)
{
	Student* s = m_student_map[m_student_list->GetItemText(m_currently_selected_student)];
	wxString old_name = s->s_get_name();
	wxString str;
	AddStudentDialog dlg(this);
	dlg.m_set_name_input(s->s_get_name());
	dlg.m_set_id_input(s->s_get_id());

	while (dlg.ShowModal() == wxOK)
	{
		if (m_student_name_exists(dlg.m_get_name_input()))
		{
			wxMessageBox(_("There already is a student with the name ") + dlg.m_get_name_input() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
			continue;
		}
		else if (m_student_id_exists(dlg.m_get_id_input()))
		{
			str << dlg.m_get_id_input();
			wxMessageBox(_("There already is a student with the ID ") + str + _("\nPlease enter a different ID"), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			s->s_set_name(dlg.m_get_name_input());
			s->s_set_id(dlg.m_get_id_input());
			if (old_name != dlg.m_get_name_input())
			{
				m_student_map[dlg.m_get_name_input()] = s;
				m_student_map.erase(old_name);
				m_student_list->SetItem(m_currently_selected_student, 0, dlg.m_get_name_input());
			}
			s = NULL;
			m_changes_made = true;
			break;
		}
	}
}
void MainFrame::m_enroll_student(wxCommandEvent& event)
{
	if (!m_course_map.size())
	{
		wxMessageBox(_("There are no courses!"), _("Error"), wxICON_ERROR);
		return;
	}
	else if (m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_get_no_of_courses() == m_course_map.size())
	{
		wxMessageBox(m_student_list->GetItemText(m_currently_selected_student) + _(" is already enrolled in all avaliable courses!"), _("Error"), wxICON_ERROR);
		return;
	}
	vector<wxString> vec;

	for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
	{
		if (!m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_is_taking_course(it->first))
			vec.push_back(it->first);
	}
	EnrollDialog dlg(this);
	dlg.m_setup_avaliable_courses(vec);
	dlg.m_set_active_student(m_student_map[m_student_list->GetItemText(m_currently_selected_student)]);
	if (dlg.ShowModal() == wxOK)
	{
		m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_insert_course(dlg.m_get_selected_course(), m_course_map[dlg.m_get_selected_course()]);
		if (m_filter_mode == STUDENT)
			m_course_list->InsertItem(0, dlg.m_get_selected_course());
		m_changes_made = true;
	}
}
void MainFrame::m_remove_student(wxCommandEvent& event)
{
	wxMessageDialog conf_dlg(this, _("Removing this student will delete all their scores!\nAre you sure you want to do this?"), wxMessageBoxCaptionStr, wxYES_NO);

	if (m_currently_selected_student != -1 && conf_dlg.ShowModal() == wxID_YES)
	{
		delete m_student_map[m_student_list->GetItemText(m_currently_selected_student)];
		m_student_map.erase(m_student_list->GetItemText(m_currently_selected_student));
		m_student_list->DeleteItem(m_currently_selected_student);
		m_currently_selected_student = -1;
		if (m_filter_mode == STUDENT)
		{
			m_course_list->ClearAll();
			m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_course = -1;
			if (m_course_edit_button->IsEnabled())
				m_course_edit_button->Disable();
			if (m_course_change_name->IsEnabled())
				m_course_change_name->Disable();
			if (m_course_delete_button->IsEnabled())
				m_course_delete_button->Disable();
		}
		if (m_student_change_info_button->IsEnabled())
			m_student_change_info_button->Disable();
		if (m_student_remove_button->IsEnabled())
			m_student_remove_button->Disable();
		if (m_enroll_button->IsEnabled())
			m_enroll_button->Disable();
		m_student_grade_text->SetLabel(_("     Grade: -%"));
		m_student_gpa_text->SetLabel(_("     GPA: -"));
		m_changes_made = true;
	}
}
void MainFrame::m_course_deselect(wxListEvent& event)
{
	m_currently_selected_course = -1;
	m_disable_course_buttons();
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
}
void MainFrame::m_load_students(wxListEvent& event)
{
	m_currently_selected_course = m_course_list->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	if (m_filter_mode == COURSE)
	{
		if (m_student_change_info_button->IsEnabled())
			m_student_change_info_button->Disable();
		if (m_enroll_button->IsEnabled())
			m_enroll_button->Disable();
		if (m_student_remove_button->IsEnabled())
			m_student_remove_button->Disable();
		m_student_list->ClearAll();
		m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
		m_currently_selected_student = -1;
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		{
			if ((it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
				m_student_list->InsertItem(0, it->first);
		}			
		if (m_colored_names_enabled)
			m_colorize_names();
		m_student_grade_text->SetLabel(_("     Grade: -%"));
		m_student_gpa_text->SetLabel(_("     GPA: -"));
	}
	else
	{
		if (m_currently_selected_student != -1)
			m_set_student_text();
	}
	if (!m_course_change_name->IsEnabled())
		m_course_change_name->Enable();
	if (!m_course_delete_button->IsEnabled())
		m_course_delete_button->Enable();
	if (!m_course_edit_button->IsEnabled())
		m_course_edit_button->Enable();
	m_set_course_text();
}
void MainFrame::m_sort_courses_by_name_az(wxCommandEvent& event)
{
	// Do nothing if filtering by student and a student has not been selected
	if (m_filter_mode == STUDENT && m_currently_selected_student == -1)
		return;

	m_course_list->ClearAll();
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_course = -1;
	if (m_filter_mode == STUDENT)
	{
		// In std::maps, the string keys should already be ordered
		for (map<wxString, Course*>::reverse_iterator it = m_course_map.rbegin(); it != m_course_map.rend(); it++)
		{
			if (m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_is_taking_course(it->first))
				m_course_list->InsertItem(0, it->first);
		}
	}
	else
	{
		for (map<wxString, Course*>::reverse_iterator it = m_course_map.rbegin(); it != m_course_map.rend(); it++)
			m_course_list->InsertItem(0, it->first);
		if (m_filter_mode == COURSE)
		{
			m_student_list->ClearAll();
			m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_student = -1;
		}
	}
	m_disable_course_buttons();
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
	m_student_grade_text->SetLabel(_("     Grade: -%"));
}
void MainFrame::m_sort_courses_by_name_za(wxCommandEvent& event)
{
	// Do nothing if filtering by student and a student has not been selected
	if (m_filter_mode == STUDENT && m_currently_selected_student == -1)
		return;

	m_course_list->ClearAll();
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_course = -1;
	if (m_filter_mode == STUDENT)
	{
		// In std::maps, the string keys should already be ordered
		for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
		{
			if (m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_is_taking_course(it->first))
				m_course_list->InsertItem(0, it->first);
		}
	}
	else
	{
		for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
			m_course_list->InsertItem(0, it->first);
		if (m_filter_mode == COURSE)
		{
			m_student_list->ClearAll();
			m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_student = -1;
		}
	}
	m_disable_course_buttons();
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
	m_student_grade_text->SetLabel(_("     Grade: -%"));
}
void MainFrame::m_sort_courses_by_units_lowest_first(wxCommandEvent& event)
{
	// Do nothing if filtering by student and a student has not been selected
	if (m_filter_mode == STUDENT && m_currently_selected_student == -1)
		return;

	// std::sort does not work with std::maps, so the following needs to be done :(
	vector<Course*> c_vec_sorted;	
	if (m_filter_mode == STUDENT)
	{
		for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
		{
			if (m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_is_taking_course(it->first))
				c_vec_sorted.push_back(it->second);
		}
	}
	else
	{
		for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
			c_vec_sorted.push_back(it->second);
		if (m_filter_mode == COURSE)
		{
			m_student_list->ClearAll();
			m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_student = -1;
		}
	}

	m_course_list->ClearAll();
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_course = -1;
	std::sort(c_vec_sorted.begin(), c_vec_sorted.end(), m_unit_comparison);
	for (vector<Course*>::reverse_iterator it = c_vec_sorted.rbegin(); it != c_vec_sorted.rend(); it++)
		m_course_list->InsertItem(0, (*it)->c_get_name());
	m_disable_course_buttons();
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
	m_student_grade_text->SetLabel(_("     Grade: -%"));
}
void MainFrame::m_sort_courses_by_units_highest_first(wxCommandEvent& event)
{
	// Do nothing if filtering by student and a student has not been selected
	if (m_filter_mode == STUDENT && m_currently_selected_student == -1)
		return;

	vector<Course*> c_vec_sorted;
	if (m_filter_mode == STUDENT)
	{
		for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
		{
			if (m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_is_taking_course(it->first))
				c_vec_sorted.push_back(it->second);
		}
	}
	else
	{
		for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
			c_vec_sorted.push_back(it->second);
		if (m_filter_mode == COURSE)
		{
			m_student_list->ClearAll();
			m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_student = -1;
		}
	}

	m_course_list->ClearAll();
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_course = -1;
	std::sort(c_vec_sorted.begin(), c_vec_sorted.end(), m_unit_comparison);
	for (vector<Course*>::iterator it = c_vec_sorted.begin(); it != c_vec_sorted.end(); it++)
		m_course_list->InsertItem(0, (*it)->c_get_name());
	m_disable_course_buttons();
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
	m_student_grade_text->SetLabel(_("     Grade: -%"));
}
void MainFrame::m_course_error_check(wxCommandEvent& event)
{
	wxString string_errors;

	if (m_course_map.empty())
	{
		wxMessageBox(_("There are no courses to check!"), _("Error"), wxICON_ERROR);
		return;
	}
	for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
	{
		if (!(it->second)->c_validate_weights())
			string_errors += (it->first + _("\n"));
	}
	if (!string_errors.empty())
		wxMessageBox(_("The following courses have invalid portion weight totals: \n") + string_errors, _("Error"), wxICON_ERROR);
	else
		wxMessageBox(_("All courses are valid."));
}
void MainFrame::m_load_courses(wxListEvent& event)
{
	m_currently_selected_student = m_student_list->GetNextItem(-1, wxLIST_NEXT_ALL, wxLIST_STATE_SELECTED);
	vector<wxString> course_names;
	if (m_filter_mode == STUDENT)
	{
		if (m_course_change_name->IsEnabled())
			m_course_change_name->Disable();
		if (m_course_edit_button->IsEnabled())
			m_course_edit_button->Disable();
		if (m_course_delete_button->IsEnabled())
			m_course_delete_button->Disable();
		m_course_list->ClearAll();
		m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
		m_currently_selected_course = -1;
		m_course_units_text->SetLabel(_("     Units: -"));
		m_course_average_score_text->SetLabel(_("     Average: -%"));
		course_names = m_student_map[m_student_list->GetItemText(m_currently_selected_student)]->s_get_course_names();
		for (vector<wxString>::iterator it = course_names.begin(); it != course_names.end(); it++)
			m_course_list->InsertItem(0, *it);
	}
	else
	{
		if (m_currently_selected_course != -1)
		{
			if (!m_course_change_name->IsEnabled())
				m_course_change_name->Enable();
			if (!m_course_edit_button->IsEnabled())
				m_course_edit_button->Enable();
			if (!m_course_delete_button->IsEnabled())
				m_course_delete_button->Enable();
			m_set_course_text();
		}
	}

	if (!m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Enable();
	if (!m_enroll_button->IsEnabled())
		m_enroll_button->Enable();
	if (!m_student_remove_button->IsEnabled())
		m_student_remove_button->Enable();
	m_set_student_text();
}
void MainFrame::m_sort_students_by_name_az(wxCommandEvent& event)
{
	// Do nothing if filtering by courses and a course has not been selected
	if (m_filter_mode == COURSE && m_currently_selected_course == -1)
		return;

	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	if (m_filter_mode == COURSE)
	{
		// In std::maps, the string keys should already be ordered
		for (map<wxString, Student*>::reverse_iterator it = m_student_map.rbegin(); it != m_student_map.rend(); it++)
		{
			if ((it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
				m_student_list->InsertItem(0, it->first);
		}
	}
	else
	{
		for (map<wxString, Student*>::reverse_iterator it = m_student_map.rbegin(); it != m_student_map.rend(); it++)
			m_student_list->InsertItem(0, it->first);
		if (m_filter_mode == STUDENT)
		{
			m_course_list->ClearAll();
			m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_course = -1;
		}
	}
	if (m_colored_names_enabled)
		m_colorize_names();
	m_disable_student_buttons();
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));
}
void MainFrame::m_sort_students_by_name_za(wxCommandEvent& event)
{
	// Do nothing if filtering by courses and a course has not been selected
	if (m_filter_mode == COURSE && m_currently_selected_course == -1)
		return;

	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	if (m_filter_mode == COURSE)
	{
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		{
			if ((it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
				m_student_list->InsertItem(0, it->first);
		}
	}
	else
	{
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
			m_student_list->InsertItem(0, it->first);
		if (m_filter_mode == STUDENT)
		{
			m_course_list->ClearAll();
			m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_course = -1;
		}
	}
	if (m_colored_names_enabled)
		m_colorize_names();
	m_disable_student_buttons();
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));
}
void MainFrame::m_sort_students_by_gpa_lowest_first(wxCommandEvent& event)
{
	// Do nothing if filtering by courses and a course has not been selected
	if (m_filter_mode == COURSE && m_currently_selected_course == -1)
		return;

	// std::sort does not work with std::maps, so the following needs to be done :(
	vector<Student*> s_vec_sorted;
	vector<wxString> err;
	wxString string_errors;
	if (m_filter_mode == COURSE)
	{
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		{
			if ((it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
			{
				s_vec_sorted.push_back(it->second);
				if ((it->second)->s_calculate_gpa(err) == -1)
				{
					for (vector<wxString>::iterator it = err.begin(); it != err.end(); it++)
						string_errors += (*it + _("\n"));
					wxMessageBox(_("Could not sort students by GPA because the following courses have invalid portion weight totals: \n") + string_errors, _("Error"), wxICON_ERROR);
					return;
				}
			}
		}
	}
	else
	{
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		{
			s_vec_sorted.push_back(it->second);
			if ((it->second)->s_calculate_gpa(err) == -1)
			{
				for (vector<wxString>::iterator it = err.begin(); it != err.end(); it++)
					string_errors += (*it + _("\n"));
				wxMessageBox(_("Could not sort students by GPA because the following courses have invalid portion weight totals: \n") + string_errors, _("Error"), wxICON_ERROR);
				return;
			}
		}
		if (m_filter_mode == STUDENT)
		{
			m_course_list->ClearAll();
			m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_course = -1;
		}
	}

	std::sort(s_vec_sorted.begin(), s_vec_sorted.end(), m_gpa_comparison);
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	for (vector<Student*>::reverse_iterator it = s_vec_sorted.rbegin(); it != s_vec_sorted.rend(); it++)
		m_student_list->InsertItem(0, (*it)->s_get_name());
	if (m_colored_names_enabled)
		m_colorize_names();
	m_disable_student_buttons();
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));
}
void MainFrame::m_sort_students_by_gpa_highest_first(wxCommandEvent& event)
{
	// Do nothing if filtering by courses and a course has not been selected
	if (m_filter_mode == COURSE && m_currently_selected_course == -1)
		return;

	vector<Student*> s_vec_sorted;
	vector<wxString> err;
	wxString string_errors;
	if (m_filter_mode == COURSE)
	{
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		{
			if ((it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
			{
				s_vec_sorted.push_back(it->second);
				if ((it->second)->s_calculate_gpa(err) == -1)
				{
					for (vector<wxString>::iterator it = err.begin(); it != err.end(); it++)
						string_errors += (*it + _("\n"));
					wxMessageBox(_("Could not sort students by GPA because the following courses have invalid portion weight totals: \n") + string_errors, _("Error"), wxICON_ERROR);
					return;
				}
			}
		}
	}
	else
	{
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		{
			s_vec_sorted.push_back(it->second);
			if ((it->second)->s_calculate_gpa(err) == -1)
			{
				for (vector<wxString>::iterator it = err.begin(); it != err.end(); it++)
					string_errors += (*it + _("\n"));
				wxMessageBox(_("Could not sort students by GPA because the following courses have invalid portion weight totals: \n") + string_errors, _("Error"), wxICON_ERROR);
				return;
			}
		}
		if (m_filter_mode == STUDENT)
		{
			m_course_list->ClearAll();
			m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_course = -1;
		}
	}

	std::sort(s_vec_sorted.begin(), s_vec_sorted.end(), m_gpa_comparison);
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	for (vector<Student*>::iterator it = s_vec_sorted.begin(); it != s_vec_sorted.end(); it++)
		m_student_list->InsertItem(0, (*it)->s_get_name());
	if (m_colored_names_enabled)
		m_colorize_names();
	m_disable_student_buttons();
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));
}
void MainFrame::m_toggle_color_code(wxCommandEvent& event)
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
void MainFrame::m_open_file(wxCommandEvent& event)
{
	if (m_changes_made)
	{
		if (wxMessageBox(_("Current content has not been saved! Proceed?"), _("Please confirm"), wxICON_QUESTION | wxYES_NO, this) == wxNO)
			return;
	}

	wxFileDialog open_dialog(this, _("Open CSV file"), "", "", "CSV files (*.csv)|*.csv", wxFD_OPEN | wxFD_FILE_MUST_EXIST);
	if (open_dialog.ShowModal() == wxID_CANCEL)
		return;

	wxFileInputStream input_stream(open_dialog.GetPath());
	if (!input_stream.IsOk())
	{
		wxLogError("Cannot open file '%s'.", open_dialog.GetPath());
		return;
	}
	wxTextFile t_file(open_dialog.GetPath());
	wxString str, sub_str1, sub_str2, sub_str3, sub_str4, sub_str5;
	Course* c;
	Student* s;
	if (!t_file.Exists())
	{
		wxLogError("Cannot open file '%s'.", open_dialog.GetPath());
		return;
	}
	t_file.Open();

	// Read in courses
	str = t_file.GetFirstLine();
	while (!str.Contains(_("//")))
	{
		// Read in course name and units
		sub_str1 = str.SubString(0, str.Find(_(";")) - 1);  // Course name
		str.erase(0, str.Find(_(";")) + 1);
		sub_str2 = str.SubString(0, str.Find(_(";")) - 1);  // Units
		c = new Course(sub_str1, wxAtof(sub_str2));
		m_course_map.insert(std::pair<wxString, Course*>(sub_str1, c));
		str.erase(0, str.Find(_(";")) + 1);

		// Read in portions
		sub_str1 = str.SubString(0, str.Find(_(";")) - 1);
		while (sub_str1.Len() > 1) // Len is 1 when there are no more portions in the substring
		{
			sub_str2 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Name
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			sub_str3 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Weight
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			c->c_create_portion(sub_str2, wxAtof(sub_str3));
		}
		str.erase(0, str.Find(_(";")) + 1);

		// Read in entries
		sub_str1 = str.SubString(0, str.Find(_(";")) - 1);
		while (sub_str1.Len() > 1) // Len is 1 when there are no more entries in the substring
		{
			sub_str2 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Course Name
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			sub_str3 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Portion
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			sub_str4 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Points possible
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			c->c_insert_entry(sub_str3, sub_str2, wxAtof(sub_str4));
		}
		c = NULL;
		str = t_file.GetNextLine();
	}
	
	// Read in students
	str = t_file.GetNextLine();
	while (!t_file.Eof())
	{
		// Student name and ID
		sub_str1 = str.SubString(0, str.Find(_(";")) - 1);  // Student name
		str.erase(0, str.Find(_(";")) + 1);
		sub_str2 = str.SubString(0, str.Find(_(";")) - 1);  // ID
		s = new Student(sub_str1, wxAtoi(sub_str2));
		m_student_map.insert(std::pair<wxString, Student*>(sub_str1, s));
		str.erase(0, str.Find(_(";")) + 1);

		// Read in courses the student took
		sub_str1 = str.SubString(0, str.Find(_(";")) - 1);
		while (sub_str1.Len() > 1)
		{
			sub_str2 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Course name
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			s->s_insert_course(sub_str2, m_course_map[sub_str2]);
		}
		str.erase(0, str.Find(_(";")) + 1);

		// Read in entries
		sub_str1 = str.SubString(0, str.Find(_(";")) - 1);
		while (sub_str1.Len() > 1) // Len is 1 when there are no more entries in the substring
		{
			sub_str2 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Course name
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			sub_str3 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Entry name
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			sub_str4 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Portion
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			sub_str5 = sub_str1.SubString(0, sub_str1.Find(_(",")) - 1); // Points earned
			sub_str1.erase(0, sub_str1.Find(_(",")) + 1);
			s->s_set_points_earned(sub_str2, sub_str4, sub_str3, wxAtof(sub_str5));
		}
		s = NULL;
		str = t_file.GetNextLine();
	}

	t_file.Close();
	m_filter_mode = ALL;
	m_changes_made = false;
	
	// Load the lists in the GUI
	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		m_student_list->InsertItem(0, it->first);
	if (m_colored_names_enabled)
		m_colorize_names();
	for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
		m_course_list->InsertItem(0, it->first);

	wxMessageBox(_("Loaded successfully!"));
}
void MainFrame::m_save_file(wxCommandEvent& event)
{
	wxFileDialog save_dialog(this, _("Save CSV file"), "", "", "CSV files (*.csv)|*.csv", wxFD_SAVE | wxFD_OVERWRITE_PROMPT);

	if (save_dialog.ShowModal() == wxID_CANCEL)
		return;

	wxFileOutputStream output_stream(save_dialog.GetPath());
	if (!output_stream.IsOk())
	{
		wxLogError("Cannot save current contents in file '%s'.", save_dialog.GetPath());
		output_stream.Close();
		return;
	}
	output_stream.Close();

	wxString str;
	wxTextFile t_file(save_dialog.GetPath());
	if (!t_file.Exists())
		t_file.Create();
	else
	{
		t_file.Open();
		t_file.Clear();
	}

	// Write courses (one per line)
	for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
	{
		str = (it->second)->c_dump_data();
		t_file.AddLine(str);
		str.clear();
	}
	t_file.AddLine("//");  // This separates courses and students in the save file
	// Write students (one per line)
	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
	{
		str = (it->second)->s_dump_data();
		t_file.AddLine(str);
		str.clear();
	}

	if (!t_file.Write())
	{
		wxLogError("Cannot save current contents in file '%s'.", save_dialog.GetPath());
		t_file.Close();
		return;
	}
	t_file.Close();
	wxMessageBox(_("Saved successfully!"));
	m_changes_made = false;
}
void MainFrame::m_filter_change_everything(wxCommandEvent& event)
{
	m_filter_mode = ALL;
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	m_course_list->ClearAll();
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_course = -1;
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));

	if (m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Disable();
	if (m_course_edit_button->IsEnabled())
		m_course_edit_button->Disable();
	if (m_course_change_name->IsEnabled())
		m_course_change_name->Disable();
	if (m_course_delete_button->IsEnabled())
		m_course_delete_button->Disable();
	if (m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Disable();
	if (m_enroll_button->IsEnabled())
		m_enroll_button->Disable();
	if (m_student_remove_button->IsEnabled())
		m_student_remove_button->Disable();

	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		m_student_list->InsertItem(0, it->first);
	for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
		m_course_list->InsertItem(0, it->first);
}
void MainFrame::m_filter_change_student(wxCommandEvent& event)
{
	m_filter_mode = STUDENT;
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	m_course_list->ClearAll();
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_course = -1;
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));

	if (m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Disable();
	if (m_course_edit_button->IsEnabled())
		m_course_edit_button->Disable();
	if (m_course_change_name->IsEnabled())
		m_course_change_name->Disable();
	if (m_course_delete_button->IsEnabled())
		m_course_delete_button->Disable();
	if (m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Disable();
	if (m_enroll_button->IsEnabled())
		m_enroll_button->Disable();
	if (m_student_remove_button->IsEnabled())
		m_student_remove_button->Disable();

	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
		m_student_list->InsertItem(0, it->first);
	if (m_colored_names_enabled)
		m_colorize_names();
}
void MainFrame::m_filter_change_course(wxCommandEvent& event)
{
	m_filter_mode = COURSE;
	m_student_list->ClearAll();
	m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_student = -1;
	m_course_list->ClearAll();
	m_course_list->InsertColumn(0, _("Courses"), wxLIST_FORMAT_LEFT, 150);
	m_currently_selected_course = -1;
	m_course_units_text->SetLabel(_("     Units: -"));
	m_course_average_score_text->SetLabel(_("     Average: -%"));
	m_student_grade_text->SetLabel(_("     Grade: -%"));
	m_student_gpa_text->SetLabel(_("     GPA: -"));

	if (m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Disable();
	if (m_course_edit_button->IsEnabled())
		m_course_edit_button->Disable();
	if (m_course_change_name->IsEnabled())
		m_course_change_name->Disable();
	if (m_course_delete_button->IsEnabled())
		m_course_delete_button->Disable();
	if (m_student_change_info_button->IsEnabled())
		m_student_change_info_button->Disable();
	if (m_enroll_button->IsEnabled())
		m_enroll_button->Disable();
	if (m_student_remove_button->IsEnabled())
		m_student_remove_button->Disable();

	for (map<wxString, Course*>::iterator it = m_course_map.begin(); it != m_course_map.end(); it++)
		m_course_list->InsertItem(0, it->first);
}
void MainFrame::m_add_course(wxCommandEvent& event)
{
	Course* c;
	AddCourseDialog dlg(this);
	dlg.m_set_gp_input(3.0);

	while (dlg.ShowModal() == wxOK)
	{
		if (m_course_name_exists(dlg.m_get_name_input()))
		{
			wxMessageBox(_("There already is a course with the name ") + dlg.m_get_name_input() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			c = new Course(dlg.m_get_name_input(), dlg.m_get_gp_input());
			m_course_map.insert(std::pair<wxString, Course*>(dlg.m_get_name_input(), c));
			m_course_list->InsertItem(0, dlg.m_get_name_input());
			c = NULL;
			m_changes_made = true;
			break;
		}
	}
}
void MainFrame::m_edit_course(wxCommandEvent& event)
{
	map<wxString, Student*> enrolled_students;
	EditCourseDialog dlg(this);
	dlg.m_set_active_course(m_course_map[m_course_list->GetItemText(m_currently_selected_course)]);
	for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
	{
		if ((it->second)->s_is_taking_course(m_course_list->GetItemText(m_currently_selected_course)))
			enrolled_students.insert(std::pair<wxString, Student*>(it->first, it->second));
	}
	dlg.m_set_student_list(enrolled_students);
	dlg.ShowModal();
	m_changes_made = true;
}
void MainFrame::m_change_course_name(wxCommandEvent& event)
{
	wxTextEntryDialog text_input(this, _("Please enter new course name"));

	while (text_input.ShowModal() == wxID_OK)
	{
		if (m_course_name_exists(text_input.GetValue()))
		{
			wxMessageBox(_("There already is a course with the name ") + text_input.GetValue() + _("\nPlease enter a different name"), _("Error"), wxICON_ERROR);
			continue;
		}
		else
		{
			m_course_map[m_course_list->GetItemText(m_currently_selected_course)]->c_change_name(text_input.GetValue());
			for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
				(it->second)->s_update_course_name(m_course_list->GetItemText(m_currently_selected_course), text_input.GetValue());
			m_course_map[text_input.GetValue()] = m_course_map[m_course_list->GetItemText(m_currently_selected_course)];
			m_course_map.erase(m_course_list->GetItemText(m_currently_selected_course));
			m_course_list->SetItem(m_currently_selected_course, 0, text_input.GetValue());
			m_changes_made = true;
			break;
		}
	}
}
void MainFrame::m_delete_course(wxCommandEvent& event)
{
	wxMessageDialog conf_dlg(this, _("Removing this course will delete everything in it!\nAre you sure you want to do this?"), wxMessageBoxCaptionStr, wxYES_NO);

	if (m_currently_selected_course != -1 && conf_dlg.ShowModal() == wxID_YES)
	{
		for (map<wxString, Student*>::iterator it = m_student_map.begin(); it != m_student_map.end(); it++)
			(it->second)->s_remove_course(m_course_list->GetItemText(m_currently_selected_course));
		delete m_course_map[m_course_list->GetItemText(m_currently_selected_course)];
		m_course_map.erase(m_course_list->GetItemText(m_currently_selected_course));
		m_course_list->DeleteItem(m_currently_selected_course);
		if (m_filter_mode == COURSE)
		{
			m_student_list->ClearAll();
			m_student_list->InsertColumn(0, _("Students"), wxLIST_FORMAT_LEFT, 150);
			m_currently_selected_student = -1;
		}
		if (m_course_edit_button->IsEnabled())
			m_course_edit_button->Disable();
		if (m_course_change_name->IsEnabled())
			m_course_change_name->Disable();
		if (m_course_delete_button->IsEnabled())
			m_course_delete_button->Disable();
		m_changes_made = true;
		m_course_units_text->SetLabel(_("     Units: -"));
		m_course_average_score_text->SetLabel(_("     Average: -%"));
		m_student_grade_text->SetLabel(_("     Grade: -%"));
	}
}
void MainFrame::m_display_about(wxCommandEvent& event)
{
	wxMessageBox(_("The GUI Grader is a CSCI senior project made by James Beller at CSU Chico.\n It was made with wxWidgets 3.0.1 with the help of wxFormBuilder and Microsoft Visual Studio 2017. The program was written in C++"), _("About"));
}
void MainFrame::m_show_color_help(wxCommandEvent& event)
{
	wxMessageBox(_("Students with green names are in good shape (High grades and GPA)\nStudents with yellow names could be at risk (GPA below 3.0 and grades in the C range)\nStudents with red names are in bad shape (GPA below 2.0 and failing grades)\nStudents with blue names have errors"), _("Colors"));
}