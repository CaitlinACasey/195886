#if !defined(AFX_DLPAGDLG_H__93EB28C2_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_DLPAGDLG_H__93EB28C2_E9CA_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DLPAGDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDLPAGDlg dialog

class CDLPAGDlg : public CDialog
{
// Construction
public:
	CDLPAGDlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetAdlPAG() const
	{return m_A_DLPAG_EDIT;}

	double GetBdlPAG() const
	{return m_B_DLPAG_EDIT;}

	double GetCdlPAG() const
	{return m_C_DLPAG_EDIT;}

	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////



// Dialog Data
	//{{AFX_DATA(CDLPAGDlg)
	enum { IDD = IDD_DLPAG_DIALOG };
	double	m_A_DLPAG_EDIT;
	double	m_B_DLPAG_EDIT;
	double	m_C_DLPAG_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDLPAGDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDLPAGDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLPAGDLG_H__93EB28C2_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
