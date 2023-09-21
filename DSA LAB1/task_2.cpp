/*
#include<iostream>
using namespace std;
string arr[9] = { "Sara","Hamza","Musa","Haris","Amna","Marium","Saad","Sameer", "Talha " };
void insertStudent(int position, string name) {
    position = position - 1;
    for (int i = 0; i < 9; i++) {
        if (i == position) {
            arr[i] = name;
        }
    }
}
//delete student and traverse the array
void deleteStudent(int position) {
    position = position - 1;
    for (int i = position; i < 9; i++) {
        arr[i] = arr[i + 1];
    }
}
void displayArray() {
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void main() {
    int position;
    string name;
    cout << "Array before Insertion & Delete"<<endl;
    displayArray();
    cout << "Enter the position where you want to insert the student: ";
    cin >> position;
    cout << "Enter the name of student: ";
    cin >> name;
    insertStudent(position, name);
    cout << "After Insertion" << endl;
    displayArray();
    cout << "Enter the position where you want to delete the student: ";
    cin >> position;
    deleteStudent(position);
    displayArray();
}

*/