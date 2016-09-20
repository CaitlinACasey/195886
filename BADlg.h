#if !defined(AFX_BADLG_H__98023AE0_E90A_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_BADLG_H__98023AE0_E90A_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// BADlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CBADlg dialog

class CBADlg : public CDialog
{
// Construction
public:
	CBADlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetABA() const
	{return m_A_BA_EDIT;}

	double GetBBA() const
	{return m_B_BA_EDIT;}

	double GetCBA() const
	{return m_C_BA_EDIT;}

	double GetIBA() const
	{return m_I_BA_EDIT;}
 
	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////


// Dialog Data
	//{{AFX_DATA(CBADlg)
	enum { IDD = IDD_BA_DIALOG };
	double	m_A_BA_EDIT;
	double	m_B_BA_EDIT;
	double	m_C_BA_EDIT;
	double	m_I_BA_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBADlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CBADlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BADLG_H__98023AE0_E90A_11DC_AF80_0001031E8944__INCLUDED_)
