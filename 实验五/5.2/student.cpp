#include<iostream>
#include"student.h"
using namespace std;
void Student::set_value() {
	cout << "please cin your num: " << endl;
	cin >> num;
	cout << "please cin your name" << endl;
	cin >> name;
	cout << "please cin your sex:" << endl;
	cin >> sex;
}
void Student::display()//�ڴ��ļ��н��к����Ķ��� 
{
	cout << "num:  " << num << endl;
	cout << "name: " << name << endl;
	cout << "sex: " << sex << endl;
}