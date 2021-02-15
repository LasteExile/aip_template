#include <iostream>

#include "tasks.h"


using namespace std;


int main() {
    int choice;
    while (1) {
        cout << "Enter task: ";
        cin >> choice;
        switch (choice) {
            case 1: first(); break;
            case 2: second(); break;
            case 3: third(); break;
            case 4: fourth(); break;
            case 5: fifth(); break;
            default: {
                cout << "Exiting\n";
                return 0;
            }
        }
    }
}
