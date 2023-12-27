#include<iostream>
using namespace std;
int swap(int num[],int size)
{
	int temp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (num[i]<num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
		
	}
	return 0;
}
int main() {
	int size;
	
	cout << "enter the size and num[size]:" << endl;
	cin >> size;
	int* num = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}
	swap(num,size);
	for (int j = 0; j < size; j++)
	{
		cout << *(num+j) << endl;
	}
	delete[]num;
	system("pause");
	return 0;
}