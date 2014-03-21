
// MarioMapEditorView.h : interface of the CMarioMapEditorView class
//

#pragma once


class CMarioMapEditorView : public CView
{
protected: // create from serialization only
	CMarioMapEditorView();
	DECLARE_DYNCREATE(CMarioMapEditorView)

// Attributes
public:
	CMarioMapEditorDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CMarioMapEditorView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MarioMapEditorView.cpp
inline CMarioMapEditorDoc* CMarioMapEditorView::GetDocument() const
   { return reinterpret_cast<CMarioMapEditorDoc*>(m_pDocument); }
#endif

