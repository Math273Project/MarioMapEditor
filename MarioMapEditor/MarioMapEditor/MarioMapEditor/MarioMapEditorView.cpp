
// MarioMapEditorView.cpp : implementation of the CMarioMapEditorView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MarioMapEditor.h"
#endif

#include "MarioMapEditorDoc.h"
#include "MarioMapEditorView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMarioMapEditorView

IMPLEMENT_DYNCREATE(CMarioMapEditorView, CView)

BEGIN_MESSAGE_MAP(CMarioMapEditorView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMarioMapEditorView construction/destruction

CMarioMapEditorView::CMarioMapEditorView()
{
	// TODO: add construction code here

}

CMarioMapEditorView::~CMarioMapEditorView()
{
}

BOOL CMarioMapEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMarioMapEditorView drawing

void CMarioMapEditorView::OnDraw(CDC* /*pDC*/)
{
	CMarioMapEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CMarioMapEditorView printing

BOOL CMarioMapEditorView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMarioMapEditorView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMarioMapEditorView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMarioMapEditorView diagnostics

#ifdef _DEBUG
void CMarioMapEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CMarioMapEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMarioMapEditorDoc* CMarioMapEditorView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMarioMapEditorDoc)));
	return (CMarioMapEditorDoc*)m_pDocument;
}
#endif //_DEBUG


// CMarioMapEditorView message handlers
