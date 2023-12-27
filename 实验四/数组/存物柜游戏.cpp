#include<iostream>
using namespace std;
bool box[100];
int main() {
	for (int i = 1; i <= 100; i++)//100个学生循环
	{
		for (int j = i-1; j < 100;j+=i )//100个箱子循环
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
	//第i个学生改变箱子的序号为i-1然后一直加i的循环
	system("pause");
	return 0;
}