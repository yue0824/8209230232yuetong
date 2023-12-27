#include <iostream>
#include <cstring>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int convert(char ch) {
	switch (ch) {
	case 'A':
		return 10;
	case 'B':
		return 11;
	case 'C':
		return 12;
	case 'D':
		return 13;
	case 'E':
		return 14;
	case 'F':
		return 15;
	default:
		break;
	}
}
int parseHex(const char* const hexString) {
	int len = strlen(hexString), num = 0, bit = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (hexString[i] >= 65 && hexString[i] <= 70) {
			num = num + convert(hexString[i]) * pow(16, bit);
		}
		else {
			num = num + (hexString[i] - '0') * pow(16, bit);
		}
		bit++;
	}
	return num;
}
int main(int argc, char** argv) {
	char str[999];
	cin >> str;
	int num = parseHex(str);
	cout << num << endl;
	return 0;
}
