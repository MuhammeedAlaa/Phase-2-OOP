#include "CRectangle.h"

CRectangle::CRectangle(Point P1, Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	Corner1 = P1;
	Corner2 = P2;
}









void CRectangle::Draw(Output* pOut) const
{
	//Call Output::DrawRect to draw a rectangle on the screen	
	pOut->DrawRect(Corner1, Corner2, FigGfxInfo, Selected);
}
CTriangle::CTriangle(Point P1, Point P2, Point P3, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	vertix1 = P1;
	vertix2 = P2;
	vertix3 = P3;
	
}
	

void CTriangle::Draw(Output* pOut) const
{
	//Call Output::DrawTRI to draw a triangle on the screen	
	pOut->DrawTri(vertix1, vertix2, vertix3, FigGfxInfo, Selected);
}
CLine::CLine(Point P1, Point P2, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	start = P1;
	end = P2;
}
	

void CLine::Draw(Output* pOut) const
{
	//Call Output::Drawline to draw a line on the screen	
	pOut->DrawLine(start, end, FigGfxInfo, Selected);
}
CElipse::CElipse(Point P1, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	focus = P1;
	
}
	

void CElipse::Draw(Output* pOut) const
{
	//Call Output::Drawelipse to draw a line on the screen	
	pOut->DrawElipse(focus, FigGfxInfo, Selected);
}
CRhombus::CRhombus(Point P1, GfxInfo FigureGfxInfo):CFigure(FigureGfxInfo)
{
	center = P1;
	
}
	

void CRhombus::Draw(Output* pOut) const
{
	//Call Output::DrawRhombus to draw a line on the screen	
	pOut->DrawRhombus(center, FigGfxInfo, Selected);
}