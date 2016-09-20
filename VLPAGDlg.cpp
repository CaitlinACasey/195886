// VLPAGDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "VLPAGDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CVLPAGDlg dialog


CVLPAGDlg::CVLPAGDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CVLPAGDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CVLPAGDlg)
	m_A_VLPAG_EDIT = 2.0;
	m_B_VLPAG_EDIT = 5.0;
	m_C_VLPAG_EDIT = 2.7;
	m_IPAGI_EDIT = 0.6;
	//}}AFX_DATA_INIT
}


void CVLPAGDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CVLPAGDlg)
	DDX_Text(pDX, IDC_A_VLPAG_EDIT, m_A_VLPAG_EDIT);
	DDX_Text(pDX, IDC_B_VLPAG_EDIT, m_B_VLPAG_EDIT);
	DDX_Text(pDX, IDC_C_VLPAG_EDIT, m_C_VLPAG_EDIT);
	DDX_Text(pDX, IDC_IPAGI_EDIT, m_IPAGI_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CVLPAGDlg, CDialog)
	//{{AFX_MSG_MAP(CVLPAGDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CVLPAGDlg message handlers
