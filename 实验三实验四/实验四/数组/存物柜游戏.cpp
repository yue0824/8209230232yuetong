#include<iostream>
using namespace std;
bool box[100];
int main() {
	for (int i = 1; i <= 100; i++)//100��ѧ��ѭ��
	{
		for (int j = i-1; j < 100;j+=i )//100������ѭ��
		{
			box[j] = !box[j];
		}
	}
	for (int i = 0; i <100; i++)
	{
		if (box[i] == true)
		{
			cout <<i+1<<" ";
		}
	}
	cout << endl;
	//��i��ѧ���ı����ӵ����Ϊi-1Ȼ��һֱ��i��ѭ��
	system("pause");
	return 0;
}