#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0;
	int j = 0;
	int m = 0;
	while (i < size1 && j < size2) {
		if (list1[i] < list2[j])
		{
			list3[m] = list1[i];
			i++;
		}
		else {
			list3[m] = list2[j];
			j++;
		}
		m++;

	}
	while (i < size1) {
		list3[m] = list1[i];
		i++;
		m++;
	}
	while (j < size2) {
		list3[m] = list2[j];
		j++;
		m++;
	}
}
int main() {
	int size1 = 0;
	int size2 = 0;
	cout << "enter list1:";
	cin >> size1;
	int* list1 = new int[size1];
	for (int i = 0; i < size1; i++)
	{
		
		cin >> list1[i];
	}
	cout << "enter list2:";
	cin >> size2;
	int* list2 = new int[size2];
	for (int j= 0; j < size2; j++)
	{

		cin >> list2[j];
	}
	int* list3 = new int[size1 + size2];
	merge(list1,size1,list2,size2,list3);
	cout << "the merged list is ";
	for (int m = 0; m < size1 + size2; m++)
	{
		cout << list3[m] << "  ";
	}
	cout << endl;
	delete[]list1;
	delete[]list2;
	delete[]list3;
	system("pause");
	return 0;
}