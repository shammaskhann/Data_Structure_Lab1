
#include <iostream>
using namespace std;
int arr[10] = { 25,13,45,67,34,11,23,17,20,0};
void Insertion(int position, int value) {
    position = position - 1;
    for (int i = 8; i >= position; i--) {
        arr[i + 1] = arr[i];
    }
    arr[position] = value;
}
void Deletation(int position) {
    position = position - 1;
    for (int i = position; i < 10; i++) {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    //before insertion
        cout << "Before insertion" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //insertion
    Insertion(3, 50);
    //after insertion
    cout << "After insertion" << endl;
 
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    Deletation(5);
    cout << "After Deletation" << endl;
    for (int i = 0; i < 9; i++) {
        cout << arr[i] << " ";
    }
}
