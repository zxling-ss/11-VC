
// using LibDllView.cpp : CusingLibDllView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "using LibDll.h"
#endif

#include "using LibDllDoc.h"
#include "using LibDllView.h"
#include "w32.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CusingLibDllView

IMPLEMENT_DYNCREATE(CusingLibDllView, CView)

BEGIN_MESSAGE_MAP(CusingLibDllView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CusingLibDllView ����/����

CusingLibDllView::CusingLibDllView()
{
	// TODO: �ڴ˴���ӹ������

}

CusingLibDllView::~CusingLibDllView()
{
}

BOOL CusingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CusingLibDllView ����

void CusingLibDllView::OnDraw(CDC* pDC)
{
	CusingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
	//CString s;
	
	//s = CString(Format(factorial(5)));
	//��һ��
	//s.Format(_T("%d"), pchar(5));
	//s = pchar(5);
	//pDC->TextOutW(200, 150, s);
	CString s1;

	//s = CString(Format(factorial(5)));
	//�ڶ���
	s1.Format(_T("%f"), nchar(30.0));
	//FAC fac = FAC();
	//s1.Format(_T("%f"), fac.GetA());
	//s = pchar(5);
	pDC->TextOutW(200, 150, s1);
}


// CusingLibDllView ��ӡ

BOOL CusingLibDllView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CusingLibDllView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CusingLibDllView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CusingLibDllView ���

#ifdef _DEBUG
void CusingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CusingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingLibDllDoc* CusingLibDllView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingLibDllDoc)));
	return (CusingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusingLibDllView ��Ϣ�������
