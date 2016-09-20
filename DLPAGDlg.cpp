// DLPAGDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "DLPAGDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDLPAGDlg dialog


CDLPAGDlg::CDLPAGDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CDLPAGDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDLPAGDlg)
	m_A_DLPAG_EDIT = 1.8;
	m_B_DLPAG_EDIT = 5.0;
	m_C_DLPAG_EDIT = 4.0;
	//}}AFX_DATA_INIT
}


void CDLPAGDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDLPAGDlg)
	DDX_Text(pDX, IDC_A_DLPAG_EDIT, m_A_DLPAG_EDIT);
	DDX_Text(pDX, IDC_B_DLPAG_EDIT, m_B_DLPAG_EDIT);
	DDX_Text(pDX, IDC_C_DLPAG_EDIT, m_C_DLPAG_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDLPAGDlg, CDialog)
	//{{AFX_MSG_MAP(CDLPAGDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDLPAGDlg message handlers
