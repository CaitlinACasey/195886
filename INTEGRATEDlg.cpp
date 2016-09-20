// INTEGRATEDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "INTEGRATEDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CINTEGRATEDlg dialog


CINTEGRATEDlg::CINTEGRATEDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CINTEGRATEDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CINTEGRATEDlg)
	m_DELTAT_EDIT = 0.1;
	m_NUMSTEPS_EDIT = 300;
	m_NDELAY_EDIT = 10000;
	//}}AFX_DATA_INIT
}


void CINTEGRATEDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CINTEGRATEDlg)
	DDX_Text(pDX, IDC_DELTAT_EDIT, m_DELTAT_EDIT);
	DDX_Text(pDX, IDC_NUMSTEPS_EDIT, m_NUMSTEPS_EDIT);
	DDX_Text(pDX, IDC_NDELAY_EDIT, m_NDELAY_EDIT);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CINTEGRATEDlg, CDialog)
	//{{AFX_MSG_MAP(CINTEGRATEDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CINTEGRATEDlg message handlers
