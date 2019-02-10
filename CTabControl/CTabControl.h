
// CTabControl.h: Hauptheaderdatei für die PROJECT_NAME-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error "'stdafx.h' vor dieser Datei für PCH einschließen"
#endif

#include "resource.h"		// Hauptsymbole


// CCTabControlApp:
// Siehe CTabControl.cpp für die Implementierung dieser Klasse
//

class CCTabControlApp : public CWinApp
{
public:
	CCTabControlApp();

// Überschreibungen
public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CCTabControlApp theApp;