
// MarioMapEditor.h : main header file for the MarioMapEditor application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CMarioMapEditorApp:
// See MarioMapEditor.cpp for the implementation of this class
//

class CMarioMapEditorApp : public CWinApp
{
public:
	CMarioMapEditorApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CMarioMapEditorApp theApp;
