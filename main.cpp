/**
* @file Student.cpp
* @author James Beller
*
* @section DESCRIPTION
*
* Main source file that launches the application
*/

#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

#include "Student.h"
#include "MainFrame.h"

class Gui_Grader : public wxApp
{
public:
	virtual bool OnInit();
};

wxIMPLEMENT_APP(Gui_Grader);

bool Gui_Grader::OnInit()
{
	MainFrame *frame = new MainFrame(NULL);
	frame->Show(true);
	return true;
}
