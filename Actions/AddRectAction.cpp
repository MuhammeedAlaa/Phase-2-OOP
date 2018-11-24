#include "AddRectAction.h"
#include "..\Figures\CRectangle.h"

#include "..\ApplicationManager.h"

#include "..\GUI\input.h"
#include "..\GUI\Output.h"

AddRectAction::AddRectAction(ApplicationManager * pApp):Action(pApp)
{}

void AddRectAction::ReadActionParameters() 
{	
	//Get a Pointer to the Input / Output Interfaces
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Rectangle: Click at first corner");
	
	//Read 1st corner and store in point P1
	pIn->GetPointClicked(P1.x, P1.y);

	pOut->PrintMessage("New Rectangle: Click at second corner");

	//Read 2nd corner and store in point P2
	pIn->GetPointClicked(P2.x, P2.y);

	RectGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	RectGfxInfo.DrawClr = pOut->getCrntDrawColor();
	RectGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}

//Execute the action
void AddRectAction::Execute() 
{
	//This action needs to read some parameters first
	ReadActionParameters();
	
	//Create a rectangle with the parameters read from the user
	CRectangle *R=new CRectangle(P1, P2, RectGfxInfo);

	//Add the rectangle to the list of figures
	pManager->AddFigure(R);
}
AddLineAction::AddLineAction(ApplicationManager * pApp):Action(pApp)
{}

void AddLineAction::ReadActionParameters() 
{	
	//Get a Pointer to the Input / Output Interfaces
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New line: Click at start");
	
	//Read start and store in point P1
	pIn->GetPointClicked(P1.x, P1.y);

	pOut->PrintMessage("New line: Click at end");

	//Read end and store in point P2
	pIn->GetPointClicked(P2.x, P2.y);

	RectGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	RectGfxInfo.DrawClr = pOut->getCrntDrawColor();
	RectGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}

//Execute the action
void AddLineAction::Execute() 
{
	//This action needs to read some parameters first
	ReadActionParameters();
	
	//Create a line with the parameters read from the user
	CLine *L=new CLine(P1, P2, RectGfxInfo);

	//Add the line to the list of figures
	pManager->AddFigure(L);
}
AddTriangleAction::AddTriangleAction(ApplicationManager * pApp):Action(pApp)
{}

void AddTriangleAction::ReadActionParameters() 
{	
	//Get a Pointer to the Input / Output Interfaces
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New triangle: Click at first vertix");
	
	//Read 1st vertix and store in point P1
	pIn->GetPointClicked(P1.x, P1.y);

	pOut->PrintMessage("New triangle: Click at second vertix");

	//Read 2nd vertix and store in point P2
	pIn->GetPointClicked(P2.x, P2.y);

	pOut->PrintMessage("New triangle: Click at third vertix");

	//Read 3rd vertix and store in point P3
	pIn->GetPointClicked(P3.x, P3.y);

	


	RectGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	RectGfxInfo.DrawClr = pOut->getCrntDrawColor();
	RectGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}

//Execute the action
void AddTriangleAction::Execute() 
{
	//This action needs to read some parameters first
	ReadActionParameters();
	
	//Create a triangle with the parameters read from the user
	CTriangle *T=new CTriangle(P1, P2, P3, RectGfxInfo);

	//Add the triangle to the list of figures
	pManager->AddFigure(T);
}
AddRhombusAction::AddRhombusAction(ApplicationManager * pApp):Action(pApp)
{}
void AddRhombusAction::ReadActionParameters() 
{	
	//Get a Pointer to the Input / Output Interfaces
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Rhombus: Click at center");
	
	//Read center and store in point P1
	pIn->GetPointClicked(P1.x, P1.y);


	RectGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	RectGfxInfo.DrawClr = pOut->getCrntDrawColor();
	RectGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}

//Execute the action
void AddRhombusAction::Execute() 
{
	//This action needs to read some parameters first
	ReadActionParameters();
	
	//Create a Rhombus with the parameters read from the user
	CRhombus *R=new CRhombus(P1, RectGfxInfo);

	//Add the Rhombus to the list of figures
	pManager->AddFigure(R);
}
AddElipseAction::AddElipseAction(ApplicationManager * pApp):Action(pApp)
{}
void AddElipseAction::ReadActionParameters() 
{	
	//Get a Pointer to the Input / Output Interfaces
	Output* pOut = pManager->GetOutput();
	Input* pIn = pManager->GetInput();

	pOut->PrintMessage("New Elipse: Click at the focuse");
	
	//Read focuse and store in point P1
	pIn->GetPointClicked(P1.x, P1.y);
	


	RectGfxInfo.isFilled = false;	//default is not filled
	//get drawing, filling colors and pen width from the interface
	RectGfxInfo.DrawClr = pOut->getCrntDrawColor();
	RectGfxInfo.FillClr = pOut->getCrntFillColor();

	pOut->ClearStatusBar();

}

//Execute the action
void AddElipseAction::Execute() 
{
	//This action needs to read some parameters first
	ReadActionParameters();
	
	//Create a elipse with the parameters read from the user
	CElipse *E=new CElipse(P1, RectGfxInfo);

	//Add the triangle to the list of figures
	pManager->AddFigure(E);
}