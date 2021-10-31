#pragma once

class CMainFrame : public CFrameWnd
{

protected:
	CMainFrame() noexcept;
	DECLARE_DYNCREATE(CMainFrame)

public:

	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual ~CMainFrame();

#ifdef _DEBUG

	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;

#endif

protected:

	CToolBar          m_wndToolBar;
	CStatusBar        m_wndStatusBar;

	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	DECLARE_MESSAGE_MAP()
};