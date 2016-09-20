// CEADlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "CEADlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CCEADlg dialog


CCEADlg::CCEADlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCEADlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCEADlg)
	m_A_CEA_EDIT = 4.0;
	m_B_CEA_EDIT = 8.0;
	m_C_CEA_EDIT = 7.0;
	//}}AFX_DATA_INIT
}


void CCEADlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCEADlg)
	DDX_Text(pDX, IDC_A_CEA_EDIT, m_A_CEA_EDIT);
	DDX_Text(pDX, IDC_B_CEA_EDIT, m_B_CEA_EDIT);
	DDX_Text(pDX, IDC_C_CEA_EDIT, m_C_CEA_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CCEADlg, CDialog)
	//{{AFX_MSG_MAP(CCEADlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCEADlg message handlers
