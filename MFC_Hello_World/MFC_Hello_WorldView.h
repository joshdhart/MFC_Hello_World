
// MFC_Hello_WorldView.h : interface of the CMFC_Hello_WorldView class
//

#pragma once


class CMFC_Hello_WorldView : public CView
{
protected: // create from serialization only
	CMFC_Hello_WorldView();
	DECLARE_DYNCREATE(CMFC_Hello_WorldView)

// Attributes
public:
	CMFC_Hello_WorldDoc* GetDocument() const;

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
	virtual ~CMFC_Hello_WorldView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MFC_Hello_WorldView.cpp
inline CMFC_Hello_WorldDoc* CMFC_Hello_WorldView::GetDocument() const
   { return reinterpret_cast<CMFC_Hello_WorldDoc*>(m_pDocument); }
#endif

