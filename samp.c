#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node* top = NULL;
    
    int choice, value;
    do {
        printf("Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
                newNode->data = value;
                newNode->next = top;
                top = newNode;
                printf("Input pushed onto the stack.\n");
                break;
            case 2:
                if (top == NULL) {
                    printf("Stack is empty\n");
                } else {
                    struct Node* temp = top;
                    top = top->next;
                    printf("%d popped from the stack.\n", temp->data);
                    free(temp);
                }
                break;
            case 3:
                
                printf("Stack elements: ");
                struct Node* ptr = top;
                while (ptr != NULL) {
                    printf("%d ", ptr->data);
                    ptr = ptr->next;
                }
                printf("\n");
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}

