// figure.h

#include <iostream>
#include <iomanip>

/**
 * @author:     Minerva
 * @date:       2015. 05. 15
 * @brief:      get triangle's area using array
 * @modified:   none
 * @abstarct:   none
 * @difficulty: low
 */

class Point
{
public: 

	/* FUNCTION PROTOTYPE*/
	void SetX(double X1); 
	void SetY(double Y1); 
	double GetX() const;  
	double GetY() const;  
	void ShowInfo();      

private:       
	double x;  
	double y;   
};


class Triangle
{
public:
	Triangle::Triangle(double x0, double y0, double x1, double y1, double x2, double x3);
	void ShowInfo(int j);
	void GetArea();
	void Management();

private:
	/* Triangle class has Point class's object p[i] as data members */
	// define object with array
	Point p[3];
};