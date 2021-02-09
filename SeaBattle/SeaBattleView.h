
// SeaBattleView.h : interface of the CSeaBattleView class
//

#pragma once


class CSeaBattleView : public CView
{
protected: // create from serialization only
	CSeaBattleView() noexcept;
	DECLARE_DYNCREATE(CSeaBattleView)

// Attributes
public:
	CSeaBattleDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CSeaBattleView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SeaBattleView.cpp
inline CSeaBattleDoc* CSeaBattleView::GetDocument() const
   { return reinterpret_cast<CSeaBattleDoc*>(m_pDocument); }
#endif

