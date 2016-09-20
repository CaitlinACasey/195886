#if !defined(AFX_INTEGRATEDLG_H__FFB68900_E9D9_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_INTEGRATEDLG_H__FFB68900_E9D9_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// INTEGRATEDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CINTEGRATEDlg dialog

class CINTEGRATEDlg : public CDialog
{
// Construction
public:
	CINTEGRATEDlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetDeltaT() const
	{return m_DELTAT_EDIT;}

	int GetNSteps() const
	{return m_NUMSTEPS_EDIT;}

	int GetNdelay() const
	{return m_NDELAY_EDIT;}

	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////



// Dialog Data
	//{{AFX_DATA(CINTEGRATEDlg)
	enum { IDD = IDD_INTEGRATE_DIALOG };
	double	m_DELTAT_EDIT;
	int		m_NUMSTEPS_EDIT;
	int		m_NDELAY_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CINTEGRATEDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CINTEGRATEDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INTEGRATEDLG_H__FFB68900_E9D9_11DC_AF80_0001031E8944__INCLUDED_)
