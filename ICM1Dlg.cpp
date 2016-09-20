// ICM1Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "ICM1Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CICM1Dlg dialog


CICM1Dlg::CICM1Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CICM1Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CICM1Dlg)
	m_A_ICM1_EDIT = 2.0;
	m_B_ICM1_EDIT = 4.0;
	m_C_ICM1_EDIT = 6.5;
	//}}AFX_DATA_INIT
}


void CICM1Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CICM1Dlg)
	DDX_Text(pDX, IDC_A_ICM1_EDIT, m_A_ICM1_EDIT);
	DDX_Text(pDX, IDC_B_ICM1_EDIT, m_B_ICM1_EDIT);
	DDX_Text(pDX, IDC_C_ICM1_EDIT, m_C_ICM1_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CICM1Dlg, CDialog)
	//{{AFX_MSG_MAP(CICM1Dlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CICM1Dlg message handlers
