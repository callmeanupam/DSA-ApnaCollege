#include<iostream>
using namespace std;

int main(){
   
    int size = 5;
    int marks[size];
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