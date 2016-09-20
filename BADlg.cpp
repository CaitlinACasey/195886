// BADlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "BADlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CBADlg dialog


CBADlg::CBADlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBADlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBADlg)
	m_A_BA_EDIT = 0.2;
	m_B_BA_EDIT = 3.0;
	m_C_BA_EDIT = 1.2;
	m_I_BA_EDIT = 0.0;
	//}}AFX_DATA_INIT
}


void CBADlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBADlg)
	DDX_Text(pDX, IDC_A_BA_EDIT, m_A_BA_EDIT);
	DDX_Text(pDX, IDC_B_BA_EDIT, m_B_BA_EDIT);
	DDX_Text(pDX, IDC_C_BA_EDIT, m_C_BA_EDIT);
	DDX_Text(pDX, IDC_I_BA_EDIT, m_I_BA_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CBADlg, CDialog)
	//{{AFX_MSG_MAP(CBADlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBADlg message handlers
