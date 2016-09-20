// vmPFCDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "vmPFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CvmPFCDlg dialog


CvmPFCDlg::CvmPFCDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CvmPFCDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CvmPFCDlg)
	m_B_VMPFC_EDIT = 3.0;
	m_C_VMPFC_EDIT = 0.5;
	m_I_VMPFC_EDIT = 0.5;
	m_A_VMPFC_EDIT = 0.7;
	m_Zo_VMPFC_EDIT = 1.0;
	//}}AFX_DATA_INIT
}


void CvmPFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CvmPFCDlg)
	DDX_Text(pDX, IDC_B_VMPFC_EDIT, m_B_VMPFC_EDIT);
	DDX_Text(pDX, IDC_C_VMPFC_EDIT, m_C_VMPFC_EDIT);
	DDX_Text(pDX, IDC_I_VMPFC_EDIT, m_I_VMPFC_EDIT);
	DDX_Text(pDX, IDC_A_VMPFC_EDIT, m_A_VMPFC_EDIT);
	DDX_Text(pDX, IDC_Z_VMPFC_O_EDIT, m_Zo_VMPFC_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CvmPFCDlg, CDialog)
	//{{AFX_MSG_MAP(CvmPFCDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CvmPFCDlg message handlers
