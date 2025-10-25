#include <iostream>

int main() {
    using namespace std;
    string input;

    int *p1 = nullptr;
    int *p2 = nullptr;
    int *p3 = nullptr;

    //Try to get inputs until valid input is given
    while (true) {
        try {
            cout << "Input integer #1: " << endl;
            p1 = new int;
            cin >> input;
            *p1 = stoi(input);
            break;
        }
        catch (...) {
            cout << "Invalid input." << endl;
        }
    }
    while (true) {
        try {
            cout << "Input integer #2: " << endl;
            p2 = new int;
            cin >> input;
            *p2 = stoi(input);
            break;
        }
        catch (...) {
            cout << "Invalid input." << endl;
        }
    }
    while (true) {
        try {
            cout << "Input integer #3: " << endl;
            p3 = new int;
            cin >> input;
            *p3 = stoi(input);
            break;
        }
        catch (...) {
            cout << "Invalid input." << endl;
        }
    }

    //Output pointers and integers
    cout << p1 << endl;
    cout << *p1 << endl;
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << p3 << endl;
    cout << *p3 << endl;

    //Delete pointers
    delete p1;
    delete p2;
    delete p3;

    return 0;
}