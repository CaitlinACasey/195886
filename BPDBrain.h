// BPDBrain.h : main header file for the BPDBRAIN application
//

#if !defined(AFX_BPDBRAIN_H__8D425384_E63D_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_BPDBRAIN_H__8D425384_E63D_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CBPDBrainApp:
// See BPDBrain.cpp for the implementation of this class
//

class CBPDBrainApp : public CWinApp
{
public:
	CBPDBrainApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBPDBrainApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CBPDBrainApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BPDBRAIN_H__8D425384_E63D_11DC_AF80_0001031E8944__INCLUDED_)
