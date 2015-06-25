
// MFC_Hello_WorldView.cpp : implementation of the CMFC_Hello_WorldView class
//

#include "stdafx.h"
#include <string>
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "MFC_Hello_World.h"
#endif

#include "MFC_Hello_WorldDoc.h"
#include "MFC_Hello_WorldView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFC_Hello_WorldView

IMPLEMENT_DYNCREATE(CMFC_Hello_WorldView, CView)

BEGIN_MESSAGE_MAP(CMFC_Hello_WorldView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CMFC_Hello_WorldView construction/destruction

CMFC_Hello_WorldView::CMFC_Hello_WorldView()
{
	// TODO: add construction code here

}

CMFC_Hello_WorldView::~CMFC_Hello_WorldView()
{
}

BOOL CMFC_Hello_WorldView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CMFC_Hello_WorldView drawing

void CMFC_Hello_WorldView::OnDraw(CDC* pDC)
{
	CMFC_Hello_WorldDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	CRect rect;
	GetClientRect(&rect);
	// Length and string to draw are hard coded for simplicity of 
	// example.
	pDC->DrawTextW(_T("Hello World!"), 12, &rect, 1);
}


// CMFC_Hello_WorldView printing

BOOL CMFC_Hello_WorldView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMFC_Hello_WorldView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMFC_Hello_WorldView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CMFC_Hello_WorldView diagnostics

#ifdef _DEBUG
void CMFC_Hello_WorldView::AssertValid() const
{
	CView::AssertValid();
}

void CMFC_Hello_WorldView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMFC_Hello_WorldDoc* CMFC_Hello_WorldView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMFC_Hello_WorldDoc)));
	return (CMFC_Hello_WorldDoc*)m_pDocument;
}
#endif //_DEBUG


// CMFC_Hello_WorldView message handlers
