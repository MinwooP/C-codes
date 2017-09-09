//figure.cpp

#include "figure.h"
using namespace std;


// @method_name: SetX
// @method_abstract: setting the variable x with parameter X1
// @parameter: double X1
// @return: void
void Point::SetX(double X1)
	{
		x = X1;          
	}


// @method_name: SetY
// @method_abstract: setting the variable y with parameter Y1
// @parameter: double Y1
// @return: void
void Point::SetY(double Y1) 
	{
		y = Y1;          
	}


// @method_name: GetX
// @method_abstract: return variable x  
// @parameter: none
// @return: double
double Point::GetX() const  
	{
		return x;  
	}


// @method_name: GetY
// @method_abstract: return variable y  
// @parameter: none
// @return: double
double Point::GetY() const
	{
		return y; 
	}


// @method_name: ShowInfo
// @method_abstract: print the variable x and y in [ , ]
// @parameter: none
// @return: void
void Point::ShowInfo() 
	{
		cout << "[" << x << ", " << y << "] "; 
	}


// @method_name: Triangle
// @method_abstract: constuctor of Triangle class
// @parameter: double x0, double y0, double x1, double y1, double x2, double y2
// @return: none
Triangle::Triangle(double x0, double y0, double x1, double y1, double x2, double y2)
{
	p[0].SetX(x0);    
	p[0].SetY(y0);    
	p[1].SetX(x1);    
	p[1].SetY(y1);
	p[2].SetX(x2);
	p[2].SetY(y2);
};


// @method_name: ShowInfo
// @method_abstract: show the state of object p[i]'s x, y 
// @parameter: int j
// @return: void
void Triangle::ShowInfo(int j)
{
	p[j].ShowInfo();
}


// @method_name: GetArea
// @method_abstract: print the area of triangle
// @parameter: none
// @return: void
void Triangle::GetArea()
{
	cout << "\nTriangle Area is: "
		<< (p[1].GetX() - p[0].GetX())*(p[2].GetY() - p[1].GetY()) * 1 / 2
		<< endl;
}


// @method_name: Management
// @method_abstract: manage the whole cycle
// @parameter: none
// @return: void
void Triangle::Management()
{
	cout << "Triangle have ";
	for (int k = 0; k < 3; k++)
		ShowInfo(k);
	GetArea();
}