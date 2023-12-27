#include<iostream>
#include"long square column.h"
using namespace std;
void Cuboid::volume()
{
	cout << "please cin length:" << endl;
	cin >> length;
	cout << "please cin width:" << endl;
	cin >> width;
	cout << "please cin height:" << endl;
	cin >> height;
	double V;
	V = length * width * height;
	cout << "the volume is:" << V << endl;
}
int main() {
	Cuboid cub1, cub2, cub3;
	cub1.volume();
	cub2.volume();
	cub3.volume();
	return 0;
}