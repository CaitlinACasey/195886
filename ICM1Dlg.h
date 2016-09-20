#if !defined(AFX_ICM1DLG_H__474A3B00_E943_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_ICM1DLG_H__474A3B00_E943_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ICM1Dlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CICM1Dlg dialog

class CICM1Dlg : public CDialog
{
// Construction
public:
	CICM1Dlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetAICM1() const
	{return m_A_ICM1_EDIT;}

	double GetBICM1() const
	{return m_B_ICM1_EDIT;}

	double GetCICM1() const
	{return m_C_ICM1_EDIT;}

	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////



// Dialog Data
	//{{AFX_DATA(CICM1Dlg)
	enum { IDD = IDD_ICM1_DIALOG };
	double	m_A_ICM1_EDIT;
	double	m_B_ICM1_EDIT;
	double	m_C_ICM1_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CICM1Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CICM1Dlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ICM1DLG_H__474A3B00_E943_11DC_AF80_0001031E8944__INCLUDED_)
