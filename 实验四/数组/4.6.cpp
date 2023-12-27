#include <iostream>
#include <string>
using namespace std;

void count(const char s[], int counts[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        char c = tolower(s[i]);
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }
}

int main() {
    const int SIZE = 26;
    int counts[SIZE] = { 0 };

    cout << "Enter a string: ";
    string input;
    getline(cin, input);

    count(input.c_str(), counts);

    cout << "Letter counts:" << endl;
    for (int i = 0; i < SIZE; i++) {
        if (counts[i] > 0) {
            char letter = i + 'a';
            cout << letter << ": " << counts[i] << endl;
        }
    }

    return 0;
}