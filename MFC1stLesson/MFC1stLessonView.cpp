#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFC1stLesson.h"
#endif

#include "MFC1stLessonDoc.h"
#include "MFC1stLessonView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

IMPLEMENT_DYNCREATE(CMFC1stLessonView, CView)

BEGIN_MESSAGE_MAP(CMFC1stLessonView, CView)

	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)

END_MESSAGE_MAP()

CMFC1stLessonView::CMFC1stLessonView() noexcept
{
}

CMFC1stLessonView::~CMFC1stLessonView()
{
}

BOOL CMFC1stLessonView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

void CMFC1stLessonView::OnDraw(CDC* /*pDC*/)
{
	CMFC1stLessonDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
}

BOOL CMFC1stLessonView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFC1stLessonView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFC1stLessonView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

#ifdef _DEBUG
void CMFC1stLessonView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC1stLessonView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC1stLessonDoc* CMFC1stLessonView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC1stLessonDoc)));
	return (CMFC1stLessonDoc*)m_pDocument;
}
#endif 