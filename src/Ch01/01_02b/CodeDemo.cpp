// Complete Guide to C++ Programming Foundations
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>

using namespace std;

int main() {
    char name[20];
    cout << "What is your name? ";
    cin >> name;
    cout << "Hello, " << name << endl << flush;
    return 0;
}
