// my_dlg_app.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CmydlgappApp:
// See my_dlg_app.cpp for the implementation of this class
//

class CmydlgappApp : public CWinApp
{
public:
	CmydlgappApp();
	void start_lum_sdk();
	void disable_lum_sdk();
	void enable_lum_sdk();

// Overrides
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CmydlgappApp theApp;
