/*
#include <iostream>
using namespace std;
int marks[10] = {};
int average = 0;
int highest = 0;
int lowest = 0;
int aboveAverage = 0;
void inputMarks() {
    for (int i = 0; i < 10; i++) {
        cout << "Enter marks for student " << i + 1 << ": ";
        cin >> marks[i];
    }
}
void findAverage() {
    for (int i = 0; i < 10; i++) {
        average += marks[i];
    }
    average /= 10;
}
void findHighest() {
    for (int i = 0; i < 10; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
    }
}
void findLowest() {
    lowest = marks[0];
    for (int i = 0; i < 10; i++) {
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
}
void findAboveAverage() {
    for (int i = 0; i < 10; i++) {
        if (marks[i] > average) {
            aboveAverage++;
        }
    }
}
void printResults() {
    cout << "Average: " << average << endl;
    cout << "Highest: " << highest << endl;
    cout << "Lowest: " << lowest << endl;
    cout << "Above Average: " << aboveAverage << endl;
}
void main() {
    inputMarks();
    findAverage();
    findHighest();
    findLowest();
    findAboveAverage();
    printResults();
}*/
