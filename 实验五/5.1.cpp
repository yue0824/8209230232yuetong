#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:
	int hour;
	int minute;
	int sec;
public:              // ���ݳ�ԱΪ˽�õģ����Ƕ������ݵĳ�Ա����Ϊ���е�
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
	Time tl;           //����t1ΪTime�����
	tl.m_hour();
	tl.m_minute();
	tl.m_sec();
	tl.sum();
    return 0;
}
