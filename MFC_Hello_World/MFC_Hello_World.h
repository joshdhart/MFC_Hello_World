
// MFC_Hello_World.h : main header file for the MFC_Hello_World application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMFC_Hello_WorldApp:
// See MFC_Hello_World.cpp for the implementation of this class
//

class CMFC_Hello_WorldApp : public CWinAppEx
{
public:
	CMFC_Hello_WorldApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMFC_Hello_WorldApp theApp;
