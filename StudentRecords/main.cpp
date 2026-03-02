#include <iostream>
#include <fstream>
extern "C" {
    #include "student_functions.h"
}

using namespace std;

int main() {

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student students[n];

    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << endl;
        cout << "Roll: ";
        cin >> students[i].roll;

        cout << "Name: ";
        cin >> students[i].name;

        cout << "Enter marks for 5 subjects:\n";
        for(int j = 0; j < MAX_SUBJECTS; j++) {
            cin >> students[i].marks[j];
        }

        calculateAverage(&students[i]);
    }

    ofstream file("records.txt");

    for(int i = 0; i < n; i++) {
        file << students[i].roll << " "
             << students[i].name << " "
             << students[i].average << endl;
    }

    file.close();

    cout << "\nRecords saved to file successfully.\n";

    return 0;
}