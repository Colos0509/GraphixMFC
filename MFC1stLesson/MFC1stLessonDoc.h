#pragma once

class CMFC1stLessonDoc : public CDocument
{
protected: 

	CMFC1stLessonDoc() noexcept;
	DECLARE_DYNCREATE(CMFC1stLessonDoc)

public:

	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

#ifdef SHARED_HANDLERS

	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);

#endif 

	virtual ~CMFC1stLessonDoc();

#ifdef _DEBUG

	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;

#endif

protected:

	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
