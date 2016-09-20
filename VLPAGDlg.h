#if !defined(AFX_VLPAGDLG_H__93EB28C1_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_VLPAGDLG_H__93EB28C1_E9CA_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// VLPAGDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CVLPAGDlg dialog

class CVLPAGDlg : public CDialog
{
// Construction
public:
	CVLPAGDlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetAvlPAG() const
	{return m_A_VLPAG_EDIT;}

	double GetBvlPAG() const
	{return m_B_VLPAG_EDIT;}

	double GetCvlPAG() const
	{return m_C_VLPAG_EDIT;}

	double GetIPAGi() const
	{return m_IPAGI_EDIT;}

	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////



// Dialog Data
	//{{AFX_DATA(CVLPAGDlg)
	enum { IDD = IDD_VLPAG_DIALOG };
	double	m_A_VLPAG_EDIT;
	double	m_B_VLPAG_EDIT;
	double	m_C_VLPAG_EDIT;
	double	m_IPAGI_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVLPAGDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CVLPAGDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VLPAGDLG_H__93EB28C1_E9CA_11DC_AF80_0001031E8944__INCLUDED_)
