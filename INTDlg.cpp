// INTDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "INTDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CINTDlg dialog


CINTDlg::CINTDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CINTDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CINTDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CINTDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CINTDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CINTDlg, CDialog)
	//{{AFX_MSG_MAP(CINTDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CINTDlg message handlers
