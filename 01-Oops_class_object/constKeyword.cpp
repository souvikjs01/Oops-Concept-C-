#include<iostream>
using namespace std;

int main() {
    // 1)
    const int x = 5;  // x is constatnt 
    // initialization can be done
    // but we can not reassign
    // x = 10;
    // cout << x << endl;


    // 2)
    // int *a = new int; 
    // *a = 2;
    // cout << *a << endl;
    // delete a;
    // int b = 9;
    // a = &b;
    // cout << *a << endl;
    // delete a;

    // const int *a = new int(4); // const data non const pointer;
    // *a = 2;
    // cout << *a << endl;
    // int b = 9;
    // a = &b;
    // cout << *a << endl;
    // delete a;

    // 3) const pointer non const data:
    // int *const a = new int(5);
    // cout << *a << endl;
    // delete a;
    // *a = 10;
    // cout << *a << endl;
    // delete a;
    // int b = 10;
    // a = &b;

    // 4) const data and const pointer:
    // const int *const a = new int(12);
    // *a = 14;
    // int b = 16;
    // a = &b;


    
    return 0;
}