
// CTabControlDlg.h: Headerdatei
//

#pragma once
#include "afxcmn.h"
#include "Tab1.h"


// CCTabControlDlg-Dialogfeld
class CCTabControlDlg : public CDialogEx
{
// Konstruktion
public:
	CCTabControlDlg(CWnd* pParent = NULL);	// Standardkonstruktor

// Dialogfelddaten
	enum { IDD = IDD_CTABCONTROL_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	CTabCtrl m_tabcontrol1;

	CTab1 m_tab1;
};
