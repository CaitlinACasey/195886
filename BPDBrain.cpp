// BPDBrain.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "BPDBrainDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBPDBrainApp

BEGIN_MESSAGE_MAP(CBPDBrainApp, CWinApp)
	//{{AFX_MSG_MAP(CBPDBrainApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBPDBrainApp construction

CBPDBrainApp::CBPDBrainApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CBPDBrainApp object

CBPDBrainApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CBPDBrainApp initialization

BOOL CBPDBrainApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	//  of your final executable, you should remove from the following
	//  the specific initialization routines you do not need.


	////////////////////////
	// MY CODE STARTS HERE
	////////////////////////

	SetDialogBkColor(RGB(200,200,200),RGB(0,0,0));  // Set dialog colors
	// The first RGB triplet defines the window's background color.
	// The second RGB triplet defines the color of text.
	// The RGB function takes a triplet of integers and converts that
	// into a COLORREF data type, a 32-bit data type that specifies color.

	////////////////////////
	// MY CODE ENDS HERE
	////////////////////////


#ifdef _AFXDLL
	Enable3dControls();			// Call this when using MFC in a shared DLL
#else
	Enable3dControlsStatic();	// Call this when linking to MFC statically
#endif

	CBPDBrainDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
