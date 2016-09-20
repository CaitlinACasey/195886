#if !defined(AFX_CEADLG_H__93EB28C0_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_CEADLG_H__93EB28C0_E9CA_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// CEADlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCEADlg dialog

class CCEADlg : public CDialog
{
// Construction
public:
	CCEADlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetACEA() const
	{return m_A_CEA_EDIT;}

	double GetBCEA() const
	{return m_B_CEA_EDIT;}

	double GetCCEA() const
	{return m_C_CEA_EDIT;}

	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////



// Dialog Data
	//{{AFX_DATA(CCEADlg)
	enum { IDD = IDD_CEA_DIALOG };
	double	m_A_CEA_EDIT;
	double	m_B_CEA_EDIT;
	double	m_C_CEA_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCEADlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CCEADlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CEADLG_H__93EB28C0_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
