#include <stdio.h>
#include <stdlib.h>
// Creating a node
struct node
{
int value;
struct node *next;
};
void main()
{
// Initialize nodes
struct node *head;
struct node *first = NULL;
// Allocate memory
first = malloc(sizeof(struct node));
// Assign value values
first->value = 10;
// Connect nodes
first->next = NULL;
head = first;
// printing node-value
printf("%d \t%d ", first->value, first->next);
}
