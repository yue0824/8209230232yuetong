#include<iostream>
using namespace std;
void swap(double list[10])
{
	bool changed = true;
	do
	{
		double temp;
		changed = false;
		for (int j = 0; (j < j+1)&&j<10; j++)
			if (list[j] > list[j + 1])
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);

}
int main() {
	double list[10] = { 9.0,8.7,9.1,4.3,3.1,7.6,3.4,7.9,8.4,4.8 };
	swap(list);
	for (int i = 0; i < 10; i++)
	{
		cout << list[i]<<"  ";
	}
	cout << endl;
	system("pause");
	return 0;
}