// my_dlg_app.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "my_dlg_app.h"
#include "my_dlg_appDlg.h"
#include "lum_sdk.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CmydlgappApp

BEGIN_MESSAGE_MAP(CmydlgappApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CmydlgappApp construction

CmydlgappApp::CmydlgappApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
    lum_sdk_set_tos_link("http://example.com/legal/sla");
    lum_sdk_set_logo_link("https://1001freedownloads.s3.amazonaws.com/vector/thumb/76922/sailor_penguin.png");
    lum_sdk_set_bg_color("#ffffffff");
    lum_sdk_set_btn_color("#ff323232");
    lum_sdk_set_txt_color("#ff000000");
    lum_sdk_set_dlg_size(500);
    lum_sdk_set_peer_txt(PEER_TXT_FREE);
    lum_sdk_set_not_peer_txt(NOT_PEER_TXT_PREMIUM);
    lum_sdk_set_app_name("MyApp");
}

void CmydlgappApp::start_lum_sdk()
{
    lum_sdk_init("win_myapp.example.com");
}

void CmydlgappApp::disable_lum_sdk()
{
    lum_sdk_clear_choice();
}

void CmydlgappApp::enable_lum_sdk()
{
    if (lum_sdk_get_choice() != LUM_SDK_CHOICE_NONE)
	return;
    start_lum_sdk();
}

// The one and only CmydlgappApp object

CmydlgappApp theApp;

int CmydlgappApp::ExitInstance()
{
    lum_sdk_uninit();
    return CWinApp::ExitInstance();
}

// CmydlgappApp initialization

BOOL CmydlgappApp::InitInstance()
{
	start_lum_sdk();
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	CmydlgappDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with OK
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: Place code here to handle when the dialog is
		//  dismissed with Cancel
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
