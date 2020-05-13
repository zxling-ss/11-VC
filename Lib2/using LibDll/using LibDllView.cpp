
// using LibDllView.cpp : CusingLibDllView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CusingLibDllView 构造/析构

CusingLibDllView::CusingLibDllView()
{
	// TODO: 在此处添加构造代码

}

CusingLibDllView::~CusingLibDllView()
{
}

BOOL CusingLibDllView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CusingLibDllView 绘制

void CusingLibDllView::OnDraw(CDC* pDC)
{
	CusingLibDllDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
	//CString s;
	
	//s = CString(Format(factorial(5)));
	//第一题
	//s.Format(_T("%d"), pchar(5));
	//s = pchar(5);
	//pDC->TextOutW(200, 150, s);
	CString s1;

	//s = CString(Format(factorial(5)));
	//第二题
	s1.Format(_T("%f"), nchar(30.0));
	//FAC fac = FAC();
	//s1.Format(_T("%f"), fac.GetA());
	//s = pchar(5);
	pDC->TextOutW(200, 150, s1);
}


// CusingLibDllView 打印

BOOL CusingLibDllView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CusingLibDllView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CusingLibDllView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CusingLibDllView 诊断

#ifdef _DEBUG
void CusingLibDllView::AssertValid() const
{
	CView::AssertValid();
}

void CusingLibDllView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CusingLibDllDoc* CusingLibDllView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CusingLibDllDoc)));
	return (CusingLibDllDoc*)m_pDocument;
}
#endif //_DEBUG


// CusingLibDllView 消息处理程序
