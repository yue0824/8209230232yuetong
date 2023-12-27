#include<iostream>
using namespace std;
int main() {
    int num[10] = {};
    int unnum[10] = {0};
    cout << "ÇëÊäÈë10¸öÊı×Ö" << endl;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> num[i];
        bool isunique = 1;
        for (int j = 0; j < i; ++j)
        {
            if (num[i] == num[j])
            {
                isunique = 0;
                break;
            }  
        }
        if (isunique)
        {
            unnum[i] = num[i];
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (unnum[i] != 0)
        {
            cout << unnum[i];
      }
        
   }
    cout << endl;
   
    system("pause");
	return 0;
}