
// DB201800View.h : CDB201800View ��Ľӿ�
//

#pragma once

class CDB201800Set;

class CDB201800View : public CRecordView
{
protected: // �������л�����
	CDB201800View();
	DECLARE_DYNCREATE(CDB201800View)

public:
#ifdef AFX_DESIGN_TIME
	enum{ IDD = IDD_DB201800_FORM };
#endif
	CDB201800Set* m_pSet;

// ����
public:
	CDB201800Doc* GetDocument() const;

// ����
public:

// ��д
public:
	virtual CRecordset* OnGetRecordset();
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CDB201800View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:
	long ID;
	CString name;
	CString number;
	CString age;
	CString phoneNum;
};

#ifndef _DEBUG  // DB201800View.cpp �еĵ��԰汾
inline CDB201800Doc* CDB201800View::GetDocument() const
   { return reinterpret_cast<CDB201800Doc*>(m_pDocument); }
#endif

