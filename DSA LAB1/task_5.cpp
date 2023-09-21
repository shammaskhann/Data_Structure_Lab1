/*
#include <iostream>
using namespace std;
int birth_year[20];
int youngest_student() {
    int youngest = birth_year[0];
    for (int i = 0; i < 20; i++) {
        if (birth_year[i] < youngest) {
            youngest = birth_year[i];
        }
    }
    return youngest;
}
int number_of_20_years_old() {
    int count = 0;
    for (int i = 0; i < 20; i++) {
        if (birth_year[i] == 2003) {
            count++;
        }
    }
    return count;
}
void main() {
    for (int i = 0; i < 20; i++) {
        cout << "Enter the birth year of student " << i + 1 << ": ";
        cin >> birth_year[i];
    }
    cout << "The position of the youngest student is: " << youngest_student() << endl;
    cout << "The number of students who are 20 years old is: " << number_of_20_years_old() << endl;
}
*/