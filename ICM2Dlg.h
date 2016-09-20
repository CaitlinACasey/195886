#if !defined(AFX_ICM2DLG_H__F7B05420_E961_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_ICM2DLG_H__F7B05420_E961_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ICM2Dlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CICM2Dlg dialog

class CICM2Dlg : public CDialog
{
// Construction
public:
	CICM2Dlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetAICM2() const
	{return m_A_ICM2_EDIT;}

	double GetBICM2() const
	{return m_B_ICM2_EDIT;}

	double GetILA() const
	{return m_ILA_EDIT;}

	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////



// Dialog Data
	//{{AFX_DATA(CICM2Dlg)
	enum { IDD = IDD_ICM2_DIALOG };
	double	m_A_ICM2_EDIT;
	double	m_B_ICM2_EDIT;
	double	m_ILA_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CICM2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CICM2Dlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ICM2DLG_H__F7B05420_E961_11DC_AF80_0001031E8944__INCLUDED_)
