#ifndef ADD_RECT_ACTION_H
#define ADD_RECT_ACTION_H

#include "Action.h"

//Add Rectangle Action class
class AddRectAction: public Action
{
private:
	Point P1, P2; //Rectangle Corners
	GfxInfo RectGfxInfo;
public:
	AddRectAction(ApplicationManager *pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();
	
	//Add rectangle to the ApplicationManager
	virtual void Execute() ;
	
};
class AddLineAction:public Action
{
private:
	Point P1, P2; //Rectangle Corners
	GfxInfo RectGfxInfo;
public:
	AddLineAction(ApplicationManager *pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();
	
	//Add rectangle to the ApplicationManager
	virtual void Execute() ;
			
};
class AddTriangleAction:public Action
{
private:
	Point P1, P2,P3; //triangle vertices
	GfxInfo RectGfxInfo;
public:
	public:
	AddTriangleAction(ApplicationManager *pApp);

	//Reads triangle parameters
	virtual void ReadActionParameters();
	
	//Add triangle to the ApplicationManager
	virtual void Execute() ;
	
};
class AddRhombusAction:public Action
{
private:
	Point P1; // Rhombus center
	GfxInfo RectGfxInfo;
public:
	public:
	AddRhombusAction(ApplicationManager* pApp);

	//Reads rectangle parameters
	virtual void ReadActionParameters();
	
	//Add rectangle to the ApplicationManager
	virtual void Execute() ;
	
};
class AddElipseAction:public Action
{
private:
	Point P1; //one of the Elipse's focuses
	GfxInfo RectGfxInfo;
public:
	public:
	AddElipseAction(ApplicationManager *pApp);

	//Reads Elipse parameters
	virtual void ReadActionParameters();
	
	//Add Elipse to the ApplicationManager
	virtual void Execute() ;
	
};
#endif