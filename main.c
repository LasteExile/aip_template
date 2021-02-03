#include "tasks.h"

#include <stdio.h>


int main() {
    int choice;
    while (1) {
        printf("Enter task: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: first();
            case 2: second();
            case 3: third();
            case 4: fourth();
            case 5: fifth();
            default: {
                printf("Exiting");
                return 0;
            }
        }
    }
}
