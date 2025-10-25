#include <iostream>

int main() {
    using namespace std;
    string input;

    int *p1 = NULL;
    int *p2 = NULL;
    int *p3 = NULL;

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

    cout << p1 << endl;
    cout << *p1 << endl;
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << p3 << endl;
    cout << *p3 << endl;

    delete p1;
    delete p2;
    delete p3;

    return 0;
}