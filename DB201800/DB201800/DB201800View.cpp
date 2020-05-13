
// DB201800View.cpp : CDB201800View ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "DB201800.h"
#endif

#include "DB201800Set.h"
#include "DB201800Doc.h"
#include "DB201800View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDB201800View

IMPLEMENT_DYNCREATE(CDB201800View, CRecordView)

BEGIN_MESSAGE_MAP(CDB201800View, CRecordView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CRecordView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CRecordView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CDB201800View ����/����

CDB201800View::CDB201800View()
	: CRecordView(IDD_DB201800_FORM)
	, ID(0)
	, name(_T(""))
	, number(_T(""))
	, age(_T(""))
	, phoneNum(_T(""))
{
	m_pSet = NULL;
	// TODO: �ڴ˴���ӹ������

}

CDB201800View::~CDB201800View()
{
}

void CDB201800View::DoDataExchange(CDataExchange* pDX)
{
	CRecordView::DoDataExchange(pDX);
	// �����ڴ˴����� DDX_Field* �����Խ��ؼ������ӡ������ݿ��ֶΣ�����
	// DDX_FieldText(pDX, IDC_MYEDITBOX, m_pSet->m_szColumn1, m_pSet);
	// DDX_FieldCheck(pDX, IDC_MYCHECKBOX, m_pSet->m_bColumn2, m_pSet);
	// �й���ϸ��Ϣ������� MSDN �� ODBC ʾ��
	DDX_Text(pDX, IDC_EDIT1, m_pSet->m_ID);
	DDX_Text(pDX, IDC_EDIT2, m_pSet->m_1);
	DDX_Text(pDX, IDC_EDIT3, m_pSet->m_2);
	DDX_Text(pDX, IDC_EDIT4, m_pSet->m_3);
	DDX_Text(pDX, IDC_EDIT5, m_pSet->m_4);
}

BOOL CDB201800View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CRecordView::PreCreateWindow(cs);
}

void CDB201800View::OnInitialUpdate()
{
	m_pSet = &GetDocument()->m_DB201800Set;
	CRecordView::OnInitialUpdate();

}


// CDB201800View ��ӡ

BOOL CDB201800View::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CDB201800View::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CDB201800View::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CDB201800View ���

#ifdef _DEBUG
void CDB201800View::AssertValid() const
{
	CRecordView::AssertValid();
}

void CDB201800View::Dump(CDumpContext& dc) const
{
	CRecordView::Dump(dc);
}

CDB201800Doc* CDB201800View::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDB201800Doc)));
	return (CDB201800Doc*)m_pDocument;
}
#endif //_DEBUG


// CDB201800View ���ݿ�֧��
CRecordset* CDB201800View::OnGetRecordset()
{
	return m_pSet;
}



// CDB201800View ��Ϣ�������
