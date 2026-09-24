#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *new, *top = NULL, *t;
void pop()
{
    if (top == NULL)
        printf("Stack Underflow");
    else
    {
        t = top;
        top = top->next;
        free(t);
        t = NULL;
    }
}
void push(int x)
{
    new = (struct node *)malloc(sizeof(struct node));
    new->data = x;
    new->next = top;
    top = new;
}
void main()
{
    int choice, data, ch = 1;
    while (ch != 0)
    {
        printf("Enter:\n2. For push.\n3. For pop.\n");
        scanf("%d", &choice);
        if (choice == 2)
        {
            printf("Enter the data to insert: ");
            scanf("%d", &data);
            push(data);
        }
        else if (choice == 3)
            pop();
        else
            printf("Invalid choice");
        printf("Enter:\n0. To exit.\n1. To continue.\n");
        scanf("%d", &ch);
    }
    printf("The elements in the stack are: ");
    struct node *p;
    p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}