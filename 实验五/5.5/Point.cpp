#include<iostream>
#include"Point.h"
using namespace std;
void Point::setPoint(int i,int j)
{
	x = 60 + i;
	y = 80 + j;
}
void Point::display()
{
	cout << "Point(" << x << "," << y << ")" << endl;

}