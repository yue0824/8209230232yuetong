#include<iostream>
using namespace std;
bool is_prime(int num)
{
	if (num < 1)
	{
		return false;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num%i == 0)
		{
			return false;
		}
	
	}
	return true;
	
}
int main() {
	int num = 2;
	for (int j = 0; j < 200; )
	{
		is_prime(num);
		if (is_prime(num) ==true)
		{
			cout << num<<"  ";
			j++;
			if (j % 10 == 0)
			{
				cout << endl;
			}
		}
		
		
		num++;
	}
	system("pause");
	return 0;
}