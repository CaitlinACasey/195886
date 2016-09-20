#if !defined(AFX_VMPFCDLG_H__358E76C0_E857_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_VMPFCDLG_H__358E76C0_E857_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// vmPFCDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CvmPFCDlg dialog

class CvmPFCDlg : public CDialog
{
// Construction
public:
	CvmPFCDlg(CWnd* pParent = NULL);   // standard constructor


	///////////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////////

	// The following functions simply return the values of different parameters

	double GetAvmPFC() const
	{return m_A_VMPFC_EDIT;}

	double GetBvmPFC() const
	{return m_B_VMPFC_EDIT;}

	double GetCvmPFC() const
	{return m_C_VMPFC_EDIT;}

	double GetIvmPFC() const
	{return m_I_VMPFC_EDIT;}

	double GetZovmPFC() const
	{return m_Zo_VMPFC_EDIT;}


	///////////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////////



// Dialog Data
	//{{AFX_DATA(CvmPFCDlg)
	enum { IDD = IDD_VMPFC_DIALOG };
	double	m_B_VMPFC_EDIT;
	double	m_C_VMPFC_EDIT;
	double	m_I_VMPFC_EDIT;
	double	m_A_VMPFC_EDIT;
	double	m_Zo_VMPFC_EDIT;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CvmPFCDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CvmPFCDlg)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VMPFCDLG_H__358E76C0_E857_11DC_AF80_0001031E8944__INCLUDED_)
