
// DB201800.h : DB201800 Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CDB201800App:
// �йش����ʵ�֣������ DB201800.cpp
//

class CDB201800App : public CWinAppEx
{
public:
	CDB201800App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDB201800App theApp;
