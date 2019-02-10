// Tab1.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "CTabControl.h"
#include "Tab1.h"
#include "afxdialogex.h"


// CTab1-Dialogfeld

IMPLEMENT_DYNAMIC(CTab1, CDialogEx)

CTab1::CTab1(CWnd* pParent /*=NULL*/)
	: CDialogEx(CTab1::IDD, pParent)
{

}

CTab1::~CTab1()
{
}

void CTab1::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CTab1, CDialogEx)
END_MESSAGE_MAP()


// CTab1-Meldungshandler
