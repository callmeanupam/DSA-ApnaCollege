#include<iostream>
using namespace std;

int main(){
    // int marks[5] = {40,45,35,62,64};
    int size = 5;
    int marks[size];
    // double price[] = {45.6, 56.3, 65.2}; // 3
    // marks[0] = 101;
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << marks[4] << endl;
    // cout << marks[5] << endl;

    // Loops : 0 to size-1
    // calculate size of array: 
    // cout << sizeof(marks) / sizeof(int) << endl;

    // input of the elements in the array

    cout << "enter the values: ";
    for(int i = 0; i < size; i++) { 
        cin >> marks[i];
    }

    cout << "values are: " << endl;
    for (int i = 0; i < size; i++) {
        cout << marks[i] << endl;
    }

    return 0;
}