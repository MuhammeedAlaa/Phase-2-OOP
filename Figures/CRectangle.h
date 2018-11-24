#ifndef CRECT_H
#define CRECT_H

#include "CFigure.h"

class CRectangle : public CFigure
{
private:
	Point Corner1;	
	Point Corner2;
public:
	CRectangle(Point , Point, GfxInfo FigureGfxInfo );
	virtual void Draw(Output* pOut) const;
};
class CLine : public CFigure
{
private:
	Point start;	
	Point end;
public:
	CLine(Point , Point, GfxInfo FigureGfxInfo );
	virtual void Draw(Output* pOut) const;
};
class CTriangle:public CFigure
{
private:
	Point vertix1;	
	Point vertix2;
	Point vertix3;
public:
	CTriangle(Point , Point, Point, GfxInfo FigureGfxInfo );
	virtual void Draw(Output* pOut) const;
};
class CElipse:public CFigure
{
private:
	Point focus;
public:
	CElipse(Point ,GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
};
class CRhombus :public CFigure
{
private:
	Point center;
public:
	CRhombus(Point ,GfxInfo FigureGfxInfo);
	virtual void Draw(Output* pOut) const;
};
#endif