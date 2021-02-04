#include "tasks.h"

#include <stdio.h>


int main() {
    int choice;
    while (1) {
        printf("Enter task: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: first(); break;
            case 2: second(); break;
            case 3: third(); break;
            case 4: fourth(); break;
            case 5: fifth(); break;
            default: {
                printf("Exiting");
                return 0;
            }
        }
    }
}
