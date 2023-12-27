#include <iostream>
using namespace std;

class Student {
public:
    int id;
    int score;
};

int max(Student* students, int size) {
    int maxScore = students[0].score;
    int maxIndex = 0;

    for (int i = 1; i < size; i++) {
        if (students[i].score > maxScore) {
            maxScore = students[i].score;
            maxIndex = i;
        }
    }

    return students[maxIndex].id;
}

int main() {
    Student students[5];

    
    for (int i = 0; i < 5; i++) {
        cout << "Enter student " << i + 1 << " id: ";
        cin >> students[i].id;
        cout << "Enter student " << i + 1 << " score: ";
        cin >> students[i].score;
    }

  
    int maxId = max(students, 5);
    cout << "Student with the highest score has id: " << maxId << endl;

    return 0;
}