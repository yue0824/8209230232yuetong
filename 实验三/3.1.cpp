#include<iostream>
using namespace std;
int findmax(int i, int j)
{
	if (j == 0)
	{
		return i;
	}
	else {
		return findmax(j, i % j);
	}

}
int findlcm(int i, int j)
{
	int max = findmax(i, j);
	return (i * j) / max;
}
int main() {
	int a, b;
	cout << "��������Ȼ��a=" << endl;
	cin >> a;
	cout << "��������Ȼ��b=" << endl;
	cin >> b;
	int max = findmax(a, b);
	int lcm = findlcm(a, b);
	cout << "���������Լ��Ϊ��" << max << endl;
	cout << "��������С������Ϊ��" << lcm << endl;
	system("pause");
	return 0;
}