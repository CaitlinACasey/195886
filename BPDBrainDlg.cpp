// BPDBrainDlg.cpp : implementation file
//

#include "stdafx.h"
#include "BPDBrain.h"
#include "BPDBrainDlg.h"

// Following added for time delay loop
#include <math.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBPDBrainDlg dialog

CBPDBrainDlg::CBPDBrainDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CBPDBrainDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CBPDBrainDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CBPDBrainDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CBPDBrainDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CBPDBrainDlg, CDialog)
	//{{AFX_MSG_MAP(CBPDBrainDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_QUIT_BUTTON, OnQuitButton)
	ON_BN_CLICKED(IDC_VMPFC_BUTTON, OnVmpfcButton)
	ON_BN_CLICKED(IDC_BA_BUTTON, OnBaButton)
	ON_BN_CLICKED(IDC_ICM1_BUTTON, OnIcm1Button)
	ON_BN_CLICKED(IDC_ICM2_BUTTON, OnIcm2Button)
	ON_BN_CLICKED(IDC_CEA_BUTTON, OnCeaButton)
	ON_BN_CLICKED(IDC_VLPAG_BUTTON, OnVlpagButton)
	ON_BN_CLICKED(IDC_DLPAG_BUTTON, OnDlpagButton)
	ON_BN_CLICKED(IDC_ERASE_BUTTON, OnEraseButton)
	ON_BN_CLICKED(IDC_INTEGRATE_BUTTON, OnIntegrateButton)
	ON_BN_CLICKED(IDC_PRINT_BUTTON, OnPrintButton)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CBPDBrainDlg message handlers

BOOL CBPDBrainDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CBPDBrainDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CBPDBrainDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CBPDBrainDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CBPDBrainDlg::OnQuitButton() 
{
	// TODO: Add your control notification handler code here

	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	OnOK();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////

	
}

void CBPDBrainDlg::OnVmpfcButton() 
{
	// TODO: Add your control notification handler code here

	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	// Display the vmPFC dialog box
	m_vmpfcdlg.DoModal();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////
	
}

void CBPDBrainDlg::OnBaButton() 
{
	// TODO: Add your control notification handler code here

	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	// Display the BA dialog box
	m_badlg.DoModal();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////
	
}

void CBPDBrainDlg::OnIcm1Button() 
{
	// TODO: Add your control notification handler code here

	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	// Display the ICM1 dialog box
	m_icm1dlg.DoModal();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////
	

	
}

void CBPDBrainDlg::OnIcm2Button() 
{
	// TODO: Add your control notification handler code here


	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	// Display the ICM2 dialog box
	m_icm2dlg.DoModal();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////
	

	
}

void CBPDBrainDlg::OnCeaButton() 
{
	// TODO: Add your control notification handler code here


	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	// Display the CeA dialog box
	m_ceadlg.DoModal();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////
	

	
}

void CBPDBrainDlg::OnVlpagButton() 
{
	// TODO: Add your control notification handler code here


	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	// Display the vlPAG dialog box
	m_vlpagdlg.DoModal();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////
	

	
}

void CBPDBrainDlg::OnDlpagButton() 
{
	// TODO: Add your control notification handler code here


	/////////////////////////
	// MY CODE STARTS HERE
	/////////////////////////

	// Display the dlPAG dialog box
	m_dlpagdlg.DoModal();

	/////////////////////////
	// MY CODE ENDS HERE
	/////////////////////////
	

	
}

void CBPDBrainDlg::OnEraseButton() 
{
	// TODO: Add your control notification handler code here


	//////////////////////////
	// MY CODE STARTS HERE
	//////////////////////////

	Invalidate();  // Force a call to the Paint function

	//////////////////////////
	// MY CODE ENDS HERE
	//////////////////////////
	
}

void CBPDBrainDlg::OnIntegrateButton() 
{
	// TODO: Add your control notification handler code here


	//////////////////////////
	// MY CODE STARTS HERE
	//////////////////////////

	// Get input from the user to specify the time step and number of
	// time steps to be used in the integration

	m_integratedlg.DoModal();

	// Note added on April 16, 2008:
	// I initially did these simulations by computing a given variable (e.g. xvmPFC)
	// and then immediately thresholding it to zero if the variable was negative.
	// Then, program execution moved to the next line and computed the next variable.
	// This is how I generated the plots for the paper.  This thresholding operation
	// insured that other activity equations were using non-negative values for the
	// activities of other nodes in the BPD network.  Said otherwise, a neuron can 
	// not fire negative action potentials.
	
	// However, this procedure posed a potential problem, because, although a neuron
	// can not fire negative action potentials, a neuron can still become hyperpolarized.
	// In a hyperpolarized state, the activity variables used in these equations become
	// negative and influences how that neuron responds to inhibitory inputs from other
	// neurons.  To alleviate any concerns about this issue, I revised the code to add
	// "internal" activity variables (e.g. xvmPFCi).  These internal activity variables
	// are used to compute the activity of a given node in the network at a given time
	// step.  After computing (or perhaps I should say, "updating") an internal activity
	// variable at a given time step, I revised the code to check for negative values.
	// If, for example, xvmPFCi were negative, I set xvmPFC = 0.0.  If xvmPFCi were 0.0
	// or greater, I set xvmPFC = xvmPFCi.  Only xvmPFC was "seen" or used by other
	// activity equations in the network.  xvmPFCi was retained and used then in the 
	// next time step to update the value of xvmPFCi.

	// After making these changes, I ran the simulations again with the same parameters
	// used for the figures in the paper.  I saw little if any difference.  xvmPFC and xBA
	// might have been very slightly different but almost unnoticeable.

	// The code appearing in this routine and the print routine include these recent
	// changes (i.e. they use "internal" activity variables).


	// Note added on 16 September 2016:
	// This module, BPDBrainDlg.cpp, contains the code used for the simulations in 
	// the paper "A neural network model of Borderline Personality Disorder" by 
	// Carl H. Berdahl published in Neural Networks 23 (2010), pp. 177-188.
	// This code is a "snapshot" of the code used for the paper.  That is, the code
	// here represents the state of the code at one point in time during the
	// research project.  The code was written so that the user could interact with the
	// neural network by changing parameters on-the-fly.  Some simulations were run
	// by changing the code, re-compiling, and re-executing.


	// Declare local variables
	double AvmPFC,  // Passive decay constants (A)
		   ABA,
		   AICM1,
		   AICM2,
		   ACeA,
		   AvlPAG,
		   AdlPAG,
		   
		   BvmPFC,  // Upper shunting limits (B)
		   BBA,
		   BICM1,
		   BICM2,
		   BCeA,
		   BvlPAG,
		   BdlPAG,
		   
		   CvmPFC,  // Lower shunting limits (C)
		   CBA,
		   CICM1,
		   CCeA,
		   CvlPAG,
		   CdlPAG,
		   
		   IvmPFC,  // Driving inputs (I)
		   IBA,
		   ILA,
		   IPAGi,

		   DeltaT,  // Delta T for time step

           xvmPFC,  // Cell activities
		   xBA,
		   xICM1,
		   xICM2,
		   xCeA,
		   xvlPAG,
		   xdlPAG,

           xvmPFCi,  // Cell activities (Internal values, i)
		   xBAi,
		   xICM1i,
		   xICM2i,
		   xCeAi,
		   xvlPAGi,
		   xdlPAGi,

		   xMin,
		   
		   xMax,

		   zovmPFC,    // Synaptic weight
		   zvmPFC,
		   
		   xsin;       // Variable added for delay loop



	int    NSteps,  // Number of integration time steps
		   Ndelay,  // Number of delay loops
		   icount,  // Iteration counter
		   idelay,  // Delay loop counter
		   irandom, // Random number
           
		   x1pos,    // Plotting coordinates
		   x1posOld,
		   x2IvmPFCpos,
		   x2IvmPFCposOld,
		   x2IBApos,
		   x2IBAposOld,
		   x2ILApos,
		   x2ILAposOld,
		   x2zvmPFCpos,
		   x2zvmPFCposOld,
		   x2xvmPFCpos,
		   x2xvmPFCposOld,
		   x2xBApos,
		   x2xBAposOld,
		   x2xICM1pos,
		   x2xICM1posOld,
	       x2xICM2pos,
		   x2xICM2posOld,
		   x2xCeApos,
		   x2xCeAposOld,
		   x2xvlPAGpos,
		   x2xvlPAGposOld,
		   x2xdlPAGpos,
		   x2xdlPAGposOld;




	// Extract network parameters from various objects


	// Extract passive decay constants (A)

	AvmPFC = m_vmpfcdlg.GetAvmPFC();
	ABA    = m_badlg.GetABA();
	AICM1  = m_icm1dlg.GetAICM1();
	AICM2  = m_icm2dlg.GetAICM2();
	ACeA   = m_ceadlg.GetACEA();
	AvlPAG = m_vlpagdlg.GetAvlPAG();
	AdlPAG = m_dlpagdlg.GetAdlPAG();


	// Extract upper shunting limits (B)

	BvmPFC = m_vmpfcdlg.GetBvmPFC();
	BBA    = m_badlg.GetBBA();
	BICM1  = m_icm1dlg.GetBICM1();
	BICM2  = m_icm2dlg.GetBICM2();
	BCeA   = m_ceadlg.GetBCEA();
	BvlPAG = m_vlpagdlg.GetBvlPAG();
	BdlPAG = m_dlpagdlg.GetBdlPAG();


	// Extract lower shunting limits (C)

	CvmPFC = m_vmpfcdlg.GetCvmPFC();
	CBA    = m_badlg.GetCBA();
	CICM1  = m_icm1dlg.GetCICM1();
	CCeA   = m_ceadlg.GetCCEA();
	CvlPAG = m_vlpagdlg.GetCvlPAG();
	CdlPAG = m_dlpagdlg.GetCdlPAG();


	// Extract driving inputs (I)

	IvmPFC = m_vmpfcdlg.GetIvmPFC();
	IBA    = m_badlg.GetIBA();
	ILA    = m_icm2dlg.GetILA();
	// Note:  IPAGi (driving input for PAG's tonic inhibitory interneurons)
	// is hardwired into the body of the program.


	// Extract initial synaptic weight for vmPFC (zovmPFC)

	zovmPFC = m_vmpfcdlg.GetZovmPFC();


	// Extract integration parameters

	DeltaT = m_integratedlg.GetDeltaT();
	NSteps = m_integratedlg.GetNSteps();
	Ndelay = m_integratedlg.GetNdelay();





	// Set up drawing context (screen output)
	CClientDC dc(this);

	// Create a new pen object
	CPen BlackPen;
	CPen RedPen;

	// Specify the pen characteristics
	BlackPen.CreatePen(PS_SOLID,
		               2,
					   RGB(0,0,0));  // Black pen

	RedPen.CreatePen(PS_SOLID,
		               2,
					   RGB(255,0,0));  // Red pen



	// Select the pen into the drawing context
	CPen* pOriginalPen;
	pOriginalPen = dc.SelectObject(&BlackPen);


	// Create a new font object
	CFont MyFont;
	MyFont.CreatePointFont(120,"Times New Roman",NULL);

	// Select the font into the drawing context
	CFont* pOriginalFont;
	pOriginalFont = dc.SelectObject(&MyFont);


	// Create a brush object
	CBrush MyBrush(RGB(0,0,0)); // Black brush

	// Select the brush into the drawing context
	CBrush* pOriginalBrush;
	pOriginalBrush = dc.SelectObject(&MyBrush);


	// Draw the IvmPFC bounding box
	dc.MoveTo(100,100);
	dc.LineTo(900,100);
	dc.LineTo(900,140);
	dc.LineTo(100,140);
	dc.LineTo(100,100);

	// Draw the label for the bounding box
	dc.TextOut(30,115,"IvmPFC");


	// Draw the IBA bounding box
	dc.MoveTo(100,156);
	dc.LineTo(900,156);
	dc.LineTo(900,196);
	dc.LineTo(100,196);
	dc.LineTo(100,156);

	// Draw the label for the bounding box
	dc.TextOut(30,171,"IBA");


	// Draw the ILA bounding box
	dc.MoveTo(100,212);
	dc.LineTo(900,212);
	dc.LineTo(900,252);
	dc.LineTo(100,252);
	dc.LineTo(100,212);

	// Draw the label for the bounding box
	dc.TextOut(30,227,"ILA");


	// Draw the zvmPFC bounding box
	dc.MoveTo(100,268);
	dc.LineTo(900,268);
	dc.LineTo(900,308);
	dc.LineTo(100,308);
	dc.LineTo(100,268);

	// Draw the label for the bounding box
	dc.TextOut(30,283,"zvmPFC");


	// Draw the xvmPFC bounding box
	dc.MoveTo(100,324);
	dc.LineTo(900,324);
	dc.LineTo(900,364);
	dc.LineTo(100,364);
	dc.LineTo(100,324);


	// Draw the label for the bounding box
	dc.TextOut(30,339,"xvmPFC");


	// Draw the xBA bounding box
	dc.MoveTo(100,380);
	dc.LineTo(900,380);
	dc.LineTo(900,420);
	dc.LineTo(100,420);
	dc.LineTo(100,380);


	// Draw the label for the bounding box
	dc.TextOut(30,395,"xBA");


	// Draw the xICM1 bounding box
	dc.MoveTo(100,436);
	dc.LineTo(900,436);
	dc.LineTo(900,476);
	dc.LineTo(100,476);
	dc.LineTo(100,436);

	// Draw the label for the bounding box
	dc.TextOut(30,451,"xICM1");


	// Draw the xICM2 bounding box
	dc.MoveTo(100,492);
	dc.LineTo(900,492);
	dc.LineTo(900,532);
	dc.LineTo(100,532);
	dc.LineTo(100,492);

	// Draw the label for the bounding box
	dc.TextOut(30,507,"xICM2");


	// Draw the xCeA bounding box
	dc.MoveTo(100,548);
	dc.LineTo(900,548);
	dc.LineTo(900,588);
	dc.LineTo(100,588);
	dc.LineTo(100,548);

	// Draw the label for the bounding box
	dc.TextOut(30,563,"xCeA");


	// Draw the xvlPAG bounding box
	dc.MoveTo(100,604);
	dc.LineTo(900,604);
	dc.LineTo(900,644);
	dc.LineTo(100,644);
	dc.LineTo(100,604);

	// Draw the label for the bounding box
	dc.TextOut(30,619,"xvlPAG");


	// Draw the xdlPAG bounding box
	dc.MoveTo(100,660);
	dc.LineTo(900,660);
	dc.LineTo(900,700);
	dc.LineTo(100,700);
	dc.LineTo(100,660);

	// Draw the label for the bounding box
	dc.TextOut(30,675,"xdlPAG");





	// Change to a red pen for drawing the activity traces
	pOriginalPen = dc.SelectObject(&RedPen);




	// Redo the integration but this time plotting the
	// results in the activity boxes.


	// Initialize inputs
	IBA = 0.0;
	ILA = 0.0;


	// Initialize cell activities to zero

    xvmPFC = 0.0;
	xBA = 0.0;
	xICM1 = 0.0;
	xICM2 = 0.0;
	xCeA = 0.0;
	xvlPAG = 0.0;
	xdlPAG =0.0;

    xvmPFCi = 0.0;
	xBAi = 0.0;
	xICM1i = 0.0;
	xICM2i = 0.0;
	xCeAi = 0.0;
	xvlPAGi = 0.0;
	xdlPAGi = 0.0;




	// Initialize synaptic weight

	zvmPFC = zovmPFC;


	// Initialize PAG tonic inhibitory interneuron's activity ("input")

	IPAGi = 0.3;


	// Initialize xMax and xMin (to be used for scaling plotting)
	xMax = 3.0;
	xMin = 0.0;



	// Set coordinates to origin for each box
	x1posOld   = 100;
	x2IvmPFCposOld = 140;
    x2IBAposOld = 196;
	x2ILAposOld = 252;
	x2zvmPFCposOld = 308;
	x2xvmPFCposOld = 364;
	x2xBAposOld = 420;
	x2xICM1posOld = 476;
	x2xICM2posOld = 532;
	x2xCeAposOld = 588;
	x2xvlPAGposOld = 644;
	x2xdlPAGposOld = 700;

		   


	for (icount=1; icount<=NSteps; icount+=1)
	{

		// The following code simply slows the iteration loop so that
		// you can see the activity traces being plotted in the plot boxes.
	for (idelay=1; idelay<=Ndelay; idelay+=1)
	{
		// Difficult-to-compute tasking
	    xsin = sin((double)idelay) * cos((double)idelay);
	    xsin = sin((double)idelay) / cos((double)idelay);


	}   // End of delay loop



		// Turn on IBA after a set number of iterations
		if (icount > 100)
		{
			IBA = 1.0;
		}

		// Note:  For the memory trace decay simulation, IBA was set
		// to 2.0.  The threshold for memory trace change was set at 1.0
		// (i.e. if xBA exceeded 1.0, then memory tracking of xvmPFC was
		// enabled.)


		// Turn on ILA after a set number of iterations
		if (icount > 200)
		{
			ILA = 1.0;
		}



		// Compute vmPFC activity (Euler integration
		// 0.5 tonic driving input simulates non-synaptically-mediated input
		xvmPFCi = xvmPFCi + (((-AvmPFC * xvmPFCi)
			                + ((BvmPFC - xvmPFCi) * ((IvmPFC * zvmPFC) + 0.50))
							- ((xvmPFCi + CvmPFC) * xBA)
						   ) * DeltaT);

        if (xvmPFCi < 0.0)
			xvmPFC = 0.0;
		else
			xvmPFC = xvmPFCi;



		// Compute BA activity
		xBAi = xBAi + (( (-ABA * xBAi)
			          +  ((BBA - xBAi) * IBA)
					  -  ((xBAi + CBA) * xvmPFC)
					 ) * DeltaT);

		if (xBAi < 0.0)
			xBA = 0.0;
		else
			xBA = xBAi;
		


		// Compute ICM1 activity
		xICM1i = xICM1i + (( (-AICM1 * xICM1i)
			              +  ((BICM1 - xICM1i) * xBA)
						  -  ((xICM1i + CICM1) * xICM2)
						 ) * DeltaT);

		if (xICM1i < 0.0)
			xICM1 = 0.0;
		else
			xICM1 = xICM1i;



		// Compute ICM2 activity
		xICM2i = xICM2i + (( (-AICM2 * xICM2i)
			              +  ((BICM2 - xICM2i) * ILA)
						 ) * DeltaT);

		if (xICM2i < 0.0)
			xICM2 = 0.0;
		else
			xICM2 = xICM2i;



		// Compute CeA activity (0.3 is a tonic inhibitory input to CeA)
		xCeAi = xCeAi + (( (-ACeA * xCeAi)
			            +  ((BCeA - xCeAi) * xBA)
						-  ((xCeAi + CCeA) * (xICM1 + 0.3))
					   ) * DeltaT);

		if (xCeAi < 0.0)
			xCeA = 0.0;
		else
			xCeA = xCeAi;



		// Compute vlPAG activity
		xvlPAGi = xvlPAGi + (( (-AvlPAG * xvlPAGi)
			                +  ((BvlPAG - xvlPAGi) * xCeA)
							-  ((xvlPAGi + CvlPAG) * (xdlPAG + IPAGi))
						   ) * DeltaT);

		if (xvlPAGi < 0.0)
			xvlPAG = 0.0;
		else
			xvlPAG = xvlPAGi;



		// Compute dlPAG activity
		xdlPAGi = xdlPAGi + (( (-AdlPAG * xdlPAGi)
			                +  ((BdlPAG - xdlPAGi) * xBA)
							-  ((xdlPAGi + CdlPAG) * (xvlPAG + IPAGi))
						   ) * DeltaT);

		if (xdlPAGi < 0.0)
			xdlPAG = 0.0;
		else
			xdlPAG = xdlPAGi;





		// Compute weight change if xBA exceeds a critical value
		if (xBA > 3.0)
		{
			zvmPFC = zvmPFC + (IvmPFC * (0.01) * (xvmPFC - zvmPFC));
		}



		// Compute new activity trace position for each box
		x1pos = 100 + (((icount*1.0)/(NSteps*1.0)) * 800);

		x2IvmPFCpos = 140 - (((IvmPFC - xMin) / (xMax - xMin)) * 40);
		x2IBApos    = 196 - (((IBA    - xMin) / (xMax - xMin)) * 40);
		x2ILApos    = 252 - (((ILA    - xMin) / (xMax - xMin)) * 40);
		x2zvmPFCpos = 308 - (((zvmPFC - xMin) / (xMax - xMin)) * 40);
		x2xvmPFCpos = 364 - (((xvmPFC - xMin) / (xMax - xMin)) * 40);
		x2xBApos     = 420 - (((xBA    - xMin) / (xMax - xMin)) * 40);
		x2xICM1pos  = 476 - (((xICM1  - xMin) / (xMax - xMin)) * 40);
		x2xICM2pos  = 532 - (((xICM2  - xMin) / (xMax - xMin)) * 40);
		x2xCeApos    = 588 - (((xCeA   - xMin) / (xMax - xMin)) * 40);
		x2xvlPAGpos = 644 - (((xvlPAG - xMin) / (xMax - xMin)) * 40);
		x2xdlPAGpos = 700 - (((xdlPAG - xMin) / (xMax - xMin)) * 40);


		// Draw activity traces
		dc.MoveTo(x1posOld, x2IvmPFCposOld);  // IvmPFC
		dc.LineTo(x1pos,    x2IvmPFCpos);

		dc.MoveTo(x1posOld, x2IBAposOld);  // IBA
		dc.LineTo(x1pos,    x2IBApos);

		dc.MoveTo(x1posOld, x2ILAposOld);  // ILA
		dc.LineTo(x1pos,    x2ILApos);

		dc.MoveTo(x1posOld, x2zvmPFCposOld);  // zvmPFC
		dc.LineTo(x1pos,    x2zvmPFCpos);

		dc.MoveTo(x1posOld, x2xvmPFCposOld);  // xvmPFC
		dc.LineTo(x1pos,    x2xvmPFCpos);

		dc.MoveTo(x1posOld, x2xBAposOld);  // xBA
		dc.LineTo(x1pos,    x2xBApos);

		dc.MoveTo(x1posOld, x2xICM1posOld);  // xICM1
		dc.LineTo(x1pos,    x2xICM1pos);

		dc.MoveTo(x1posOld, x2xICM2posOld);  // xICM2
		dc.LineTo(x1pos,    x2xICM2pos);

		dc.MoveTo(x1posOld, x2xCeAposOld);  // xCeA
		dc.LineTo(x1pos,    x2xCeApos);

		dc.MoveTo(x1posOld, x2xvlPAGposOld);  // xvlPAG
		dc.LineTo(x1pos,    x2xvlPAGpos);

		dc.MoveTo(x1posOld, x2xdlPAGposOld);  // xdlPAG
		dc.LineTo(x1pos,    x2xdlPAGpos);






		// Store away current coordinates for use in the next
		// integration cycle.

		x1posOld   = x1pos;

		x2IvmPFCposOld = x2IvmPFCpos;
		x2IBAposOld    = x2IBApos;
		x2ILAposOld    = x2ILApos;
		x2zvmPFCposOld = x2zvmPFCpos;
		x2xvmPFCposOld = x2xvmPFCpos;
		x2xBAposOld    = x2xBApos;
		x2xICM1posOld  = x2xICM1pos;
		x2xICM2posOld  = x2xICM2pos;
		x2xCeAposOld   = x2xCeApos;
		x2xvlPAGposOld = x2xvlPAGpos;
		x2xdlPAGposOld = x2xdlPAGpos;



    }  // End of for loop



	//////////////////////////
	// MY CODE ENDS HERE
	//////////////////////////


	
}

void CBPDBrainDlg::OnPrintButton() 
{
	// TODO: Add your control notification handler code here

	///////////////////////////
	// MY CODE STARTS HERE
	///////////////////////////


	// Declare local variables
	double AvmPFC,  // Passive decay constants (A)
		   ABA,
		   AICM1,
		   AICM2,
		   ACeA,
		   AvlPAG,
		   AdlPAG,
		   
		   BvmPFC,  // Upper shunting limits (B)
		   BBA,
		   BICM1,
		   BICM2,
		   BCeA,
		   BvlPAG,
		   BdlPAG,
		   
		   CvmPFC,  // Lower shunting limits (C)
		   CBA,
		   CICM1,
		   CCeA,
		   CvlPAG,
		   CdlPAG,
		   
		   IvmPFC,  // Driving inputs (I)
		   IBA,
		   ILA,
		   IPAGi,

		   DeltaT,  // Delta T for time step

           xvmPFC,  // Cell activities
		   xBA,
		   xICM1,
		   xICM2,
		   xCeA,
		   xvlPAG,
		   xdlPAG,

           xvmPFCi,  // Cell activities (Internal values, i)
		   xBAi,
		   xICM1i,
		   xICM2i,
		   xCeAi,
		   xvlPAGi,
		   xdlPAGi,

		   xMin,
		   
		   xMax,

		   zovmPFC,    // Synaptic weight
		   zvmPFC;



	int    NSteps,  // Number of integration time steps
		   icount,       // Iteration counter
           
		   x1pos,    // Plotting coordinates
		   x1posOld,
		   x2IvmPFCpos,
		   x2IvmPFCposOld,
		   x2IBApos,
		   x2IBAposOld,
		   x2ILApos,
		   x2ILAposOld,
		   x2zvmPFCpos,
		   x2zvmPFCposOld,
		   x2xvmPFCpos,
		   x2xvmPFCposOld,
		   x2xBApos,
		   x2xBAposOld,
		   x2xICM1pos,
		   x2xICM1posOld,
	       x2xICM2pos,
		   x2xICM2posOld,
		   x2xCeApos,
		   x2xCeAposOld,
		   x2xvlPAGpos,
		   x2xvlPAGposOld,
		   x2xdlPAGpos,
		   x2xdlPAGposOld,
		   yesno;




	// Extract network parameters from various objects


	// Extract passive decay constants (A)

	AvmPFC = m_vmpfcdlg.GetAvmPFC();
	ABA    = m_badlg.GetABA();
	AICM1  = m_icm1dlg.GetAICM1();
	AICM2  = m_icm2dlg.GetAICM2();
	ACeA   = m_ceadlg.GetACEA();
	AvlPAG = m_vlpagdlg.GetAvlPAG();
	AdlPAG = m_dlpagdlg.GetAdlPAG();


	// Extract upper shunting limits (B)

	BvmPFC = m_vmpfcdlg.GetBvmPFC();
	BBA    = m_badlg.GetBBA();
	BICM1  = m_icm1dlg.GetBICM1();
	BICM2  = m_icm2dlg.GetBICM2();
	BCeA   = m_ceadlg.GetBCEA();
	BvlPAG = m_vlpagdlg.GetBvlPAG();
	BdlPAG = m_dlpagdlg.GetBdlPAG();


	// Extract lower shunting limits (C)

	CvmPFC = m_vmpfcdlg.GetCvmPFC();
	CBA    = m_badlg.GetCBA();
	CICM1  = m_icm1dlg.GetCICM1();
	CCeA   = m_ceadlg.GetCCEA();
	CvlPAG = m_vlpagdlg.GetCvlPAG();
	CdlPAG = m_dlpagdlg.GetCdlPAG();


	// Extract driving inputs (I)

	IvmPFC = m_vmpfcdlg.GetIvmPFC();
	IBA    = m_badlg.GetIBA();
	ILA    = m_icm2dlg.GetILA();
	// Note:  IPAGi (driving input for PAG's tonic inhibitory interneurons)
	// is hardwired into the body of the program.


	// Extract initial synaptic weight for vmPFC (zovmPFC)

	zovmPFC = m_vmpfcdlg.GetZovmPFC();


	// Extract integration parameters

	DeltaT = m_integratedlg.GetDeltaT();
	NSteps = m_integratedlg.GetNSteps();




	// Create a CMetaFileDC device context object and call it "dc"
	CMetaFileDC dc;

	// Call the CMetaFileDC constructor for dc
    dc;

	// Call the Create member function of dc (CMetaFileDC) in order to 
	// create a file on disk called "Box.wmf".  The file Box.wmf will 
	// contain the drawing commands.
	yesno = dc.Create("Box.wmf");


	// Create black pen object
	CPen BlackPen;

	// Specify the pens' characteristics
	BlackPen.CreatePen(PS_SOLID,
		               2,
					   RGB(0,0,0));  // Black pen

	// Declare pOriginalPen as a pointer to a CPen object
	CPen* pOriginalPen;

	// Select the black pen into the drawing context
	pOriginalPen = dc.SelectObject(&BlackPen);



	// Create a new font object
	CFont MyFont;
	MyFont.CreatePointFont(120,"Times New Roman",NULL);

	// Declare pOriginalFont as a pointer to a CFont object
	CFont* pOriginalFont;

	// Select the MyFont object into the drawing context
	pOriginalFont = dc.SelectObject(&MyFont);



	// Create a brush object
	CBrush MyBrush(RGB(0,0,0)); // Black brush

	// Declare pOriginalBrush as a pointer to a CBrush object
	CBrush* pOriginalBrush;

	// Select the MyBrush object into the drawing context
	pOriginalBrush = dc.SelectObject(&MyBrush);





	// Draw the IvmPFC bounding box
	dc.MoveTo(100,100);
	dc.LineTo(900,100);
	dc.LineTo(900,140);
	dc.LineTo(100,140);
	dc.LineTo(100,100);

	// Draw the label for the bounding box
	dc.TextOut(30,115,"IvmPFC");


	// Draw the IBA bounding box
	dc.MoveTo(100,156);
	dc.LineTo(900,156);
	dc.LineTo(900,196);
	dc.LineTo(100,196);
	dc.LineTo(100,156);

	// Draw the label for the bounding box
	dc.TextOut(30,171,"IBA");


	// Draw the ILA bounding box
	dc.MoveTo(100,212);
	dc.LineTo(900,212);
	dc.LineTo(900,252);
	dc.LineTo(100,252);
	dc.LineTo(100,212);

	// Draw the label for the bounding box
	dc.TextOut(30,227,"ILA");


	// Draw the zvmPFC bounding box
	dc.MoveTo(100,268);
	dc.LineTo(900,268);
	dc.LineTo(900,308);
	dc.LineTo(100,308);
	dc.LineTo(100,268);

	// Draw the label for the bounding box
	dc.TextOut(30,283,"zvmPFC");


	// Draw the xvmPFC bounding box
	dc.MoveTo(100,324);
	dc.LineTo(900,324);
	dc.LineTo(900,364);
	dc.LineTo(100,364);
	dc.LineTo(100,324);

	// Draw the label for the bounding box
	dc.TextOut(30,339,"xvmPFC");


	// Draw the xBA bounding box
	dc.MoveTo(100,380);
	dc.LineTo(900,380);
	dc.LineTo(900,420);
	dc.LineTo(100,420);
	dc.LineTo(100,380);

	// Draw the label for the bounding box
	dc.TextOut(30,395,"xBA");


	// Draw the xICM1 bounding box
	dc.MoveTo(100,436);
	dc.LineTo(900,436);
	dc.LineTo(900,476);
	dc.LineTo(100,476);
	dc.LineTo(100,436);

	// Draw the label for the bounding box
	dc.TextOut(30,451,"xICM1");


	// Draw the xICM2 bounding box
	dc.MoveTo(100,492);
	dc.LineTo(900,492);
	dc.LineTo(900,532);
	dc.LineTo(100,532);
	dc.LineTo(100,492);

	// Draw the label for the bounding box
	dc.TextOut(30,507,"xICM2");


	// Draw the xCeA bounding box
	dc.MoveTo(100,548);
	dc.LineTo(900,548);
	dc.LineTo(900,588);
	dc.LineTo(100,588);
	dc.LineTo(100,548);

	// Draw the label for the bounding box
	dc.TextOut(30,563,"xCeA");


	// Draw the xvlPAG bounding box
	dc.MoveTo(100,604);
	dc.LineTo(900,604);
	dc.LineTo(900,644);
	dc.LineTo(100,644);
	dc.LineTo(100,604);

	// Draw the label for the bounding box
	dc.TextOut(30,619,"xvlPAG");


	// Draw the xdlPAG bounding box
	dc.MoveTo(100,660);
	dc.LineTo(900,660);
	dc.LineTo(900,700);
	dc.LineTo(100,700);
	dc.LineTo(100,660);

	// Draw the label for the bounding box
	dc.TextOut(30,675,"xdlPAG");






	// Redo the integration but this time plotting the
	// results in the activity boxes.


	// Initialize inputs
	IBA = 0.0;
	ILA = 0.0;


	// Initialize cell activities to zero

    xvmPFC = 0.0;
	xBA = 0.0;
	xICM1 = 0.0;
	xICM2 = 0.0;
	xCeA = 0.0;
	xvlPAG = 0.0;
	xdlPAG =0.0;

    xvmPFCi = 0.0;
	xBAi = 0.0;
	xICM1i = 0.0;
	xICM2i = 0.0;
	xCeAi = 0.0;
	xvlPAGi = 0.0;
	xdlPAGi = 0.0;


	// Initialize synaptic weight

	zvmPFC = zovmPFC;


	// Initialize PAG tonic inhibitory interneuron's activity ("input")

	IPAGi = 0.3;


	// Initialize xMax and xMin (to be used for scaling plotting)
	xMax = 3.0;
	xMin = 0.0;



	// Set coordinates to origin for each box
	x1posOld   = 100;
	x2IvmPFCposOld = 140;
    x2IBAposOld = 196;
	x2ILAposOld = 252;
	x2zvmPFCposOld = 308;
	x2xvmPFCposOld = 364;
	x2xBAposOld = 420;
	x2xICM1posOld = 476;
	x2xICM2posOld = 532;
	x2xCeAposOld = 588;
	x2xvlPAGposOld = 644;
	x2xdlPAGposOld = 700;

		   



	for (icount=1; icount<=NSteps; icount+=1)
	{

		// Turn on IBA after a set number of iterations
		if (icount > 100)
		{
			IBA = 1.0;
		}


		// Turn on ILA after a set number of iterations
		if (icount > 200)
		{
			ILA = 1.0;
		}


		// Compute vmPFC activity (Euler integration
		// 0.5 tonic driving input simulates non-synaptically-mediated input
		xvmPFCi = xvmPFCi + (((-AvmPFC * xvmPFCi)
			                + ((BvmPFC - xvmPFCi) * ((IvmPFC * zvmPFC) + 0.50))
							- ((xvmPFCi + CvmPFC) * xBA)
						   ) * DeltaT);

        if (xvmPFCi < 0.0)
			xvmPFC = 0.0;
		else
			xvmPFC = xvmPFCi;



		// Compute BA activity
		xBAi = xBAi + (( (-ABA * xBAi)
			          +  ((BBA - xBAi) * IBA)
					  -  ((xBAi + CBA) * xvmPFC)
					 ) * DeltaT);

		if (xBAi < 0.0)
			xBA = 0.0;
		else
			xBA = xBAi;
		


		// Compute ICM1 activity
		xICM1i = xICM1i + (( (-AICM1 * xICM1i)
			              +  ((BICM1 - xICM1i) * xBA)
						  -  ((xICM1i + CICM1) * xICM2)
						 ) * DeltaT);

		if (xICM1i < 0.0)
			xICM1 = 0.0;
		else
			xICM1 = xICM1i;



		// Compute ICM2 activity
		xICM2i = xICM2i + (( (-AICM2 * xICM2i)
			              +  ((BICM2 - xICM2i) * ILA)
						 ) * DeltaT);

		if (xICM2i < 0.0)
			xICM2 = 0.0;
		else
			xICM2 = xICM2i;



		// Compute CeA activity (0.3 is a tonic inhibitory input to CeA)
		xCeAi = xCeAi + (( (-ACeA * xCeAi)
			            +  ((BCeA - xCeAi) * xBA)
						-  ((xCeAi + CCeA) * (xICM1 + 0.3))
					   ) * DeltaT);

		if (xCeAi < 0.0)
			xCeA = 0.0;
		else
			xCeA = xCeAi;



		// Compute vlPAG activity
		xvlPAGi = xvlPAGi + (( (-AvlPAG * xvlPAGi)
			                +  ((BvlPAG - xvlPAGi) * xCeA)
							-  ((xvlPAGi + CvlPAG) * (xdlPAG + IPAGi))
						   ) * DeltaT);

		if (xvlPAGi < 0.0)
			xvlPAG = 0.0;
		else
			xvlPAG = xvlPAGi;



		// Compute dlPAG activity
		xdlPAGi = xdlPAGi + (( (-AdlPAG * xdlPAGi)
			                +  ((BdlPAG - xdlPAGi) * xBA)
							-  ((xdlPAGi + CdlPAG) * (xvlPAG + IPAGi))
						   ) * DeltaT);

		if (xdlPAGi < 0.0)
			xdlPAG = 0.0;
		else
			xdlPAG = xdlPAGi;



		// Compute weight change if xBA exceeds a critical value
		if (xBA > 3.0)
		{
			zvmPFC = zvmPFC + (IvmPFC * (0.01) * (xvmPFC - zvmPFC));
		}



		// Compute new activity trace position for each box
		x1pos = 100 + (((icount*1.0)/(NSteps*1.0)) * 800);

		x2IvmPFCpos = 140 - (((IvmPFC - xMin) / (xMax - xMin)) * 40);
		x2IBApos    = 196 - (((IBA    - xMin) / (xMax - xMin)) * 40);
		x2ILApos    = 252 - (((ILA    - xMin) / (xMax - xMin)) * 40);
		x2zvmPFCpos = 308 - (((zvmPFC - xMin) / (xMax - xMin)) * 40);
		x2xvmPFCpos = 364 - (((xvmPFC - xMin) / (xMax - xMin)) * 40);
		x2xBApos     = 420 - (((xBA    - xMin) / (xMax - xMin)) * 40);
		x2xICM1pos  = 476 - (((xICM1  - xMin) / (xMax - xMin)) * 40);
		x2xICM2pos  = 532 - (((xICM2  - xMin) / (xMax - xMin)) * 40);
		x2xCeApos    = 588 - (((xCeA   - xMin) / (xMax - xMin)) * 40);
		x2xvlPAGpos = 644 - (((xvlPAG - xMin) / (xMax - xMin)) * 40);
		x2xdlPAGpos = 700 - (((xdlPAG - xMin) / (xMax - xMin)) * 40);


		// Draw activity traces
		dc.MoveTo(x1posOld, x2IvmPFCposOld);  // IvmPFC
		dc.LineTo(x1pos,    x2IvmPFCpos);

		dc.MoveTo(x1posOld, x2IBAposOld);  // IBA
		dc.LineTo(x1pos,    x2IBApos);

		dc.MoveTo(x1posOld, x2ILAposOld);  // ILA
		dc.LineTo(x1pos,    x2ILApos);

		dc.MoveTo(x1posOld, x2zvmPFCposOld);  // zvmPFC
		dc.LineTo(x1pos,    x2zvmPFCpos);

		dc.MoveTo(x1posOld, x2xvmPFCposOld);  // xvmPFC
		dc.LineTo(x1pos,    x2xvmPFCpos);

		dc.MoveTo(x1posOld, x2xBAposOld);  // xBA
		dc.LineTo(x1pos,    x2xBApos);

		dc.MoveTo(x1posOld, x2xICM1posOld);  // xICM1
		dc.LineTo(x1pos,    x2xICM1pos);

		dc.MoveTo(x1posOld, x2xICM2posOld);  // xICM2
		dc.LineTo(x1pos,    x2xICM2pos);

		dc.MoveTo(x1posOld, x2xCeAposOld);  // xCeA
		dc.LineTo(x1pos,    x2xCeApos);

		dc.MoveTo(x1posOld, x2xvlPAGposOld);  // xvlPAG
		dc.LineTo(x1pos,    x2xvlPAGpos);

		dc.MoveTo(x1posOld, x2xdlPAGposOld);  // xdlPAG
		dc.LineTo(x1pos,    x2xdlPAGpos);






		// Store away current coordinates for use in the next
		// integration cycle.

		x1posOld   = x1pos;

		x2IvmPFCposOld = x2IvmPFCpos;
		x2IBAposOld    = x2IBApos;
		x2ILAposOld    = x2ILApos;
		x2zvmPFCposOld = x2zvmPFCpos;
		x2xvmPFCposOld = x2xvmPFCpos;
		x2xBAposOld    = x2xBApos;
		x2xICM1posOld  = x2xICM1pos;
		x2xICM2posOld  = x2xICM2pos;
		x2xCeAposOld   = x2xCeApos;
		x2xvlPAGposOld = x2xvlPAGpos;
		x2xdlPAGposOld = x2xdlPAGpos;



    }  // End of for loop



	///////////////////////////
	// MY CODE ENDS HERE
	///////////////////////////
	
}
