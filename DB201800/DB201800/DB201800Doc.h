
// DB201800Doc.h : CDB201800Doc ��Ľӿ�
//


#pragma once
#include "DB201800Set.h"


class CDB201800Doc : public CDocument
{
protected: // �������л�����
	CDB201800Doc();
	DECLARE_DYNCREATE(CDB201800Doc)

// ����
public:
	CDB201800Set m_DB201800Set;

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~CDB201800Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
