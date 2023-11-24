#include <stdio.h>
#define n 50

int a[n], f = -1, r = -1;

void insert() {
    if (r == n - 1) {
        printf("Queue overflow\n");
    } else {
        if (f == -1) {
            f = r = 0;
        } else {
            r++;
        }
        printf("Enter the element to be inserted: ");
        scanf("%d", &a[r]);
    }
}

void del() {
    if (f == -1) {
        printf("Queue underflow\n");
    } else {
        printf("%d is deleted\n", a[f]);
        if (f == r) {
            r = f = -1;
        } else {
            f++;
        }
    }
}

void display() {
    if (f == -1) {
        printf("Queue is empty\n");
    } else {
        for (int i = f; i <= r; i++) {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch;
    do {
        printf("\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                insert();
                break;
            case 2:
                del();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice!!!\n");
        }
    } while (ch != 4);

    return 0;
}


