#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    int ch = 1;
    struct node *head = NULL, *new = NULL, *temp = NULL, *p = NULL;
    while(ch == 1) {
        new = (struct node*) malloc(sizeof(struct node));
        printf("Enter the data part: ");
        scanf("%d", &new->data);
        new->next = NULL;
        if(head == NULL) {
            head = new;
            temp = new;
        }
        else {
            temp->next = new;
            temp = temp->next;
        }
        printf("Enter your choice as 0 or 1: ");
        scanf("%d", &ch);
    }
    int choice, element;
    printf("Enter your choice:\n1. insertion at beginning.\n2. insertion in between.\n3. insertion at last.\n");
    scanf("%d", &choice);
    if(choice >= 1 && choice <= 3) {
        new = (struct node*) malloc(sizeof(struct node));
        printf("Enter the data to insert: ");
        scanf("%d", &new->data);
        new->next = NULL;
    }
    switch(choice) {
        case 1:
            new->next = head;
            head = new;
            break;
        case 2:
            p = head;
            printf("Enter element after which you have to insert: ");
            scanf("%d", &element);
            while(p->data != element) {
                p = p->next;
            }
            new->next = p->next;
            p->next = new;
            break;
        case 3:
            p = head;
            while(p->next != NULL) {
                p = p->next;
            }
            p->next = new;
            break;
    }
    printf("Linked list: ");
    p = head;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}