; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CINTEGRATEDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "BPDBrain.h"

ClassCount=11
Class1=CBPDBrainApp
Class2=CBPDBrainDlg
Class3=CAboutDlg

ResourceCount=11
Resource1=IDD_ICM2_DIALOG
Resource2=IDR_MAINFRAME
Resource3=IDD_CEA_DIALOG
Class4=CvmPFCDlg
Resource4=IDD_ABOUTBOX
Class5=CBADlg
Resource5=IDD_BPDBRAIN_DIALOG
Class6=CICM1Dlg
Resource6=IDD_VLPAG_DIALOG
Class7=CICM2Dlg
Resource7=IDD_BA_DIALOG
Class8=CCEADlg
Resource8=IDD_ICM1_DIALOG
Class9=CVLPAGDlg
Resource9=IDD_VMPFC_DIALOG
Class10=CDLPAGDlg
Resource10=IDD_DLPAG_DIALOG
Class11=CINTEGRATEDlg
Resource11=IDD_INTEGRATE_DIALOG

[CLS:CBPDBrainApp]
Type=0
HeaderFile=BPDBrain.h
ImplementationFile=BPDBrain.cpp
Filter=N

[CLS:CBPDBrainDlg]
Type=0
HeaderFile=BPDBrainDlg.h
ImplementationFile=BPDBrainDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=IDC_PRINT_BUTTON

[CLS:CAboutDlg]
Type=0
HeaderFile=BPDBrainDlg.h
ImplementationFile=BPDBrainDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_BPDBRAIN_DIALOG]
Type=1
Class=CBPDBrainDlg
ControlCount=11
Control1=IDC_VMPFC_BUTTON,button,1342242816
Control2=IDC_BA_BUTTON,button,1342242816
Control3=IDC_ICM1_BUTTON,button,1342242816
Control4=IDC_ICM2_BUTTON,button,1342242816
Control5=IDC_CEA_BUTTON,button,1342242816
Control6=IDC_VLPAG_BUTTON,button,1342242816
Control7=IDC_DLPAG_BUTTON,button,1342242816
Control8=IDC_INTEGRATE_BUTTON,button,1342242816
Control9=IDC_ERASE_BUTTON,button,1342242816
Control10=IDC_QUIT_BUTTON,button,1342242816
Control11=IDC_PRINT_BUTTON,button,1342242816

[DLG:IDD_VMPFC_DIALOG]
Type=1
Class=CvmPFCDlg
ControlCount=12
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_STATIC,static,1342308352
Control8=IDC_A_VMPFC_EDIT,edit,1350631552
Control9=IDC_B_VMPFC_EDIT,edit,1350631552
Control10=IDC_C_VMPFC_EDIT,edit,1350631552
Control11=IDC_I_VMPFC_EDIT,edit,1350631552
Control12=IDC_Z_VMPFC_O_EDIT,edit,1350631552

[CLS:CvmPFCDlg]
Type=0
HeaderFile=vmPFCDlg.h
ImplementationFile=vmPFCDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CvmPFCDlg

[DLG:IDD_BA_DIALOG]
Type=1
Class=CBADlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_A_BA_EDIT,edit,1350631552
Control8=IDC_B_BA_EDIT,edit,1350631552
Control9=IDC_C_BA_EDIT,edit,1350631552
Control10=IDC_I_BA_EDIT,edit,1350631552

[CLS:CBADlg]
Type=0
HeaderFile=BADlg.h
ImplementationFile=BADlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_ICM1_DIALOG]
Type=1
Class=CICM1Dlg
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_A_ICM1_EDIT,edit,1350631552
Control7=IDC_B_ICM1_EDIT,edit,1350631552
Control8=IDC_C_ICM1_EDIT,edit,1350631552

[CLS:CICM1Dlg]
Type=0
HeaderFile=ICM1Dlg.h
ImplementationFile=ICM1Dlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CICM1Dlg

[DLG:IDD_ICM2_DIALOG]
Type=1
Class=CICM2Dlg
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_A_ICM2_EDIT,edit,1350631552
Control7=IDC_B_ICM2_EDIT,edit,1350631552
Control8=IDC_ILA_EDIT,edit,1350631552

[CLS:CICM2Dlg]
Type=0
HeaderFile=ICM2Dlg.h
ImplementationFile=ICM2Dlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CICM2Dlg

[DLG:IDD_CEA_DIALOG]
Type=1
Class=CCEADlg
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_A_CEA_EDIT,edit,1350631552
Control7=IDC_B_CEA_EDIT,edit,1350631552
Control8=IDC_C_CEA_EDIT,edit,1350631552

[CLS:CCEADlg]
Type=0
HeaderFile=CEADlg.h
ImplementationFile=CEADlg.cpp
BaseClass=CDialog
Filter=D
LastObject=CCEADlg
VirtualFilter=dWC

[DLG:IDD_VLPAG_DIALOG]
Type=1
Class=CVLPAGDlg
ControlCount=10
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_STATIC,static,1342308352
Control7=IDC_A_VLPAG_EDIT,edit,1350631552
Control8=IDC_B_VLPAG_EDIT,edit,1350631552
Control9=IDC_C_VLPAG_EDIT,edit,1350631552
Control10=IDC_IPAGI_EDIT,edit,1350631552

[CLS:CVLPAGDlg]
Type=0
HeaderFile=VLPAGDlg.h
ImplementationFile=VLPAGDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC

[DLG:IDD_DLPAG_DIALOG]
Type=1
Class=CDLPAGDlg
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_STATIC,static,1342308352
Control6=IDC_A_DLPAG_EDIT,edit,1350631552
Control7=IDC_B_DLPAG_EDIT,edit,1350631552
Control8=IDC_C_DLPAG_EDIT,edit,1350631552

[CLS:CDLPAGDlg]
Type=0
HeaderFile=DLPAGDlg.h
ImplementationFile=DLPAGDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CDLPAGDlg

[DLG:IDD_INTEGRATE_DIALOG]
Type=1
Class=CINTEGRATEDlg
ControlCount=8
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_STATIC,static,1342308352
Control5=IDC_DELTAT_EDIT,edit,1350631552
Control6=IDC_NUMSTEPS_EDIT,edit,1350631552
Control7=IDC_STATIC,static,1342308352
Control8=IDC_NDELAY_EDIT,edit,1350631552

[CLS:CINTEGRATEDlg]
Type=0
HeaderFile=INTEGRATEDlg.h
ImplementationFile=INTEGRATEDlg.cpp
BaseClass=CDialog
Filter=D
VirtualFilter=dWC
LastObject=CINTEGRATEDlg

