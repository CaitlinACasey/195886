// BPDBrainDlg.h : header file
//


//////////////////////////////
// MY CODE STARTS HERE
//////////////////////////////

#include "vmPFCDlg.h"
#include "BADlg.h"
#include "ICM1Dlg.h"
#include "ICM2Dlg.h"
#include "CEADlg.h"
#include "VLPAGDlg.h"
#include "DLPAGDlg.h"
#include "INTEGRATEDlg.h"

//////////////////////////////
// MY CODE ENDS HERE
//////////////////////////////


#if !defined(AFX_BPDBRAINDLG_H__8D425386_E63D_11DC_AF80_0001031E8944__INCLUDED_)
#define AFX_BPDBRAINDLG_H__8D425386_E63D_11DC_AF80_0001031E8944__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CBPDBrainDlg dialog

class CBPDBrainDlg : public CDialog
{
// Construction
public:
	CBPDBrainDlg(CWnd* pParent = NULL);	// standard constructor


	/////////////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////////////

	// INSTANTIATE PARAMETER WINDOW OBJECTS

	CvmPFCDlg m_vmpfcdlg;
	CBADlg m_badlg;
	CICM1Dlg m_icm1dlg;
	CICM2Dlg m_icm2dlg;
	CCEADlg m_ceadlg;
	CVLPAGDlg m_vlpagdlg;
	CDLPAGDlg m_dlpagdlg;
	CINTEGRATEDlg m_integratedlg;

	/////////////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////////////


// Dialog Data
	//{{AFX_DATA(CBPDBrainDlg)
	enum { IDD = IDD_BPDBRAIN_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBPDBrainDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CBPDBrainDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnQuitButton();
	afx_msg void OnVmpfcButton();
	afx_msg void OnBaButton();
	afx_msg void OnIcm1Button();
	afx_msg void OnIcm2Button();
	afx_msg void OnCeaButton();
	afx_msg void OnVlpagButton();
	afx_msg void OnDlpagButton();
	afx_msg void OnEraseButton();
	afx_msg void OnIntegrateButton();
	afx_msg void OnPrintButton();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BPDBRAINDLG_H__8D425386_E63D_11DC_AF80_0001031E8944__INCLUDED_)
