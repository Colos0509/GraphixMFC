#pragma once

class CMFC1stLessonView : public CView
{

public:

	CMFC1stLessonDoc* GetDocument() const;
	virtual void OnDraw(CDC* pDC); 
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);

	virtual ~CMFC1stLessonView();

#ifdef _DEBUG

	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;

#endif

protected: 

	CMFC1stLessonView() noexcept;
	DECLARE_DYNCREATE(CMFC1stLessonView)

	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFC1stLessonView.cpp
inline CMFC1stLessonDoc* CMFC1stLessonView::GetDocument() const
   { return reinterpret_cast<CMFC1stLessonDoc*>(m_pDocument); }
#endif