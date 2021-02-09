
// SeaBattleView.cpp : implementation of the CSeaBattleView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "SeaBattle.h"
#endif

#include "SeaBattleDoc.h"
#include "SeaBattleView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSeaBattleView

IMPLEMENT_DYNCREATE(CSeaBattleView, CView)

BEGIN_MESSAGE_MAP(CSeaBattleView, CView)
END_MESSAGE_MAP()

// CSeaBattleView construction/destruction

CSeaBattleView::CSeaBattleView() noexcept
{
	// TODO: add construction code here

}

CSeaBattleView::~CSeaBattleView()
{
}

BOOL CSeaBattleView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CSeaBattleView drawing

void CSeaBattleView::OnDraw(CDC* /*pDC*/)
{
	CSeaBattleDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CSeaBattleView diagnostics

#ifdef _DEBUG
void CSeaBattleView::AssertValid() const
{
	CView::AssertValid();
}

void CSeaBattleView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSeaBattleDoc* CSeaBattleView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSeaBattleDoc)));
	return (CSeaBattleDoc*)m_pDocument;
}
#endif //_DEBUG


// CSeaBattleView message handlers
