#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[])
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for (int i = 0; i <= len2 - len1; i++)
	{
		int j = 0;
		for ( j = 0; j < len1; j++)
		{
			if (s1[j] != s2[i + j])
			{
				break;
			}
		}
		if (j == len1)
		{
			return i;
		}
		else {
			return -1;
		}
	}
}
int main() {
    char s1[10];
    char s2[10];
	cout << "enter the first string:" << endl;
	cin.getline(s1, 10);
	cout << "enter the secong string:" << endl;
	cin.getline(s2, 10);
	int c=indexOf(s1, s2);
	if (c != -1)
	{
		cout << "indexOf is " << c << endl;
	}
	else
	{
		cout <<endl;
	}
	system("pause");
	return 0;
}