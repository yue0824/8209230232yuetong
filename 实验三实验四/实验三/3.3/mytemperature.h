#include<iostream>
using namespace std;
double cel;
double fah;
double celsius_to_fah(double cel)
{
	cout << "ÇëÊäÈëÉãÊÏÎÂ¶È" << endl;
	cin >> cel;
	fah =( 9 * cel / 5 )+ 32;
	cout << "Celsius    Fahrenheit" << endl;
	cout << cel << "    " << fah << endl;
	return fah;
}
double fahrenheit_to_cels(double fah)
{
	cout << "ÇëÊäÈë»ªÊÏÎÂ¶È" << endl;
	cin >> fah;
	cel = 5 * (fah - 32) / 9;
	cout << "Fahrenheit    Celsius" << endl;
	cout << fah << "    " << cel << endl;
	return cel;
}
