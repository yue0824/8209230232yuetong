#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:
	int hour;
	int minute;
	int sec;
public:              // 数据成员为私用的，但是定义数据的成员函数为公有的
	void m_hour() {
		int m_hour;
		cout << "please cin hour" << endl;
		cin >> m_hour;
		hour = m_hour;
		
		}
	void m_minute() {
		int m_minute;
		cout << "please cin minute" << endl;
		cin >> m_minute;
		minute = m_minute;
		
	}
	void m_sec() {
		int m_sec;
		cout << "please cin sec" << endl;
		cin >> m_sec;
		sec = m_sec;
		
	}
	void sum() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time tl;           //定义t1为Time类对象
	tl.m_hour();
	tl.m_minute();
	tl.m_sec();
	tl.sum();
    return 0;
}
