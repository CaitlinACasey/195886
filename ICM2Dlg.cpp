// ICM2Dlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "ICM2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CICM2Dlg dialog


CICM2Dlg::CICM2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CICM2Dlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CICM2Dlg)
	m_A_ICM2_EDIT = 1.5;
	m_B_ICM2_EDIT = 3.0;
	m_ILA_EDIT = 1.0;
	//}}AFX_DATA_INIT
}


void CICM2Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CICM2Dlg)
	DDX_Text(pDX, IDC_A_ICM2_EDIT, m_A_ICM2_EDIT);
	DDX_Text(pDX, IDC_B_ICM2_EDIT, m_B_ICM2_EDIT);
	DDX_Text(pDX, IDC_ILA_EDIT, m_ILA_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CICM2Dlg, CDialog)
	//{{AFX_MSG_MAP(CICM2Dlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CICM2Dlg message handlers
