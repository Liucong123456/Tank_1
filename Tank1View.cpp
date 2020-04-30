
// Tank1View.cpp: CTank1View 类的实现
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Tank1.h"
#endif

#include "Tank1Doc.h"
#include "Tank1View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTank1View

IMPLEMENT_DYNCREATE(CTank1View, CView)

BEGIN_MESSAGE_MAP(CTank1View, CView)
END_MESSAGE_MAP()

// CTank1View 构造/析构

CTank1View::CTank1View() noexcept
{
	// TODO: 在此处添加构造代码

}

CTank1View::~CTank1View()
{
}

BOOL CTank1View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CTank1View 绘图

void CTank1View::OnDraw(CDC* /*pDC*/)
{
	CTank1Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CTank1View 诊断

#ifdef _DEBUG
void CTank1View::AssertValid() const
{
	CView::AssertValid();
}

void CTank1View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTank1Doc* CTank1View::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTank1Doc)));
	return (CTank1Doc*)m_pDocument;
}
#endif //_DEBUG


// CTank1View 消息处理程序
