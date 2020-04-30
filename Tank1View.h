
// Tank1View.h: CTank1View 类的接口
//

#pragma once


class CTank1View : public CView
{
protected: // 仅从序列化创建
	CTank1View() noexcept;
	DECLARE_DYNCREATE(CTank1View)

// 特性
public:
	CTank1Doc* GetDocument() const;

// 操作
public:

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 实现
public:
	virtual ~CTank1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Tank1View.cpp 中的调试版本
inline CTank1Doc* CTank1View::GetDocument() const
   { return reinterpret_cast<CTank1Doc*>(m_pDocument); }
#endif

