#include <stdio.h>
#define n 5

int a[n],top= -1;

void push() {
    if (top == n - 1) {
        printf("stack overflow\n");
    } else {
        top++;
        printf("Enter the element to be inserted: ");
        scanf("%d", &a[top]);
    }
}

void pop() {
    if (top == -1) {
        printf("stack underflow\n");
    } else {
        printf("%d is deleted\n", a[top]);
        top--;
    }
}

void display() {
    if (top == -1) {
        printf("stack is empty\n");
    } else {
        for (int i = top; i >= 0; i--) {
            printf(" %d", a[i]);
        }
        printf("\n");
    }
}

int main() {
    int ch;
    do {
        printf("\n1. push\n2.pop\n3. Display\n4. Exit\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
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


