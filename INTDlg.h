#if !defined(AFX_INTDLG_H__93EB28C3_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_INTDLG_H__93EB28C3_E9CA_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// INTDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CINTDlg dialog

class CINTDlg : public CDialog
{
// Construction
public:
	CINTDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CINTDlg)
	enum { IDD = IDD_INTEGRATE_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CINTDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CINTDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INTDLG_H__93EB28C3_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
