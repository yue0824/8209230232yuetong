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
	cout << "请输入自然数a=" << endl;
	cin >> a;
	cout << "请输入自然数b=" << endl;
	cin >> b;
	int max = findmax(a, b);
	int lcm = findlcm(a, b);
	cout << "两数的最大公约数为：" << max << endl;
	cout << "两数的最小公倍数为：" << lcm << endl;
	system("pause");
	return 0;
}