
// SeaBattle.h : main header file for the SeaBattle application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CSeaBattleApp:
// See SeaBattle.cpp for the implementation of this class
//

class CSeaBattleApp : public CWinApp
{
public:
	CSeaBattleApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSeaBattleApp theApp;
