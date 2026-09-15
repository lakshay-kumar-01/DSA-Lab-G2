#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    int ch = 1;
    struct node *head = NULL, *new = NULL, *temp = NULL, *p = NULL, *t = NULL;
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
    printf("Enter your choice:\n1. deletion at beginning.\n2. deletion in between.\n3. deletion at last.\n");
    scanf("%d", &choice);
    printf("Enter the data to delete: ");
    scanf("%d", &element);
    switch(choice) {
        case 1:
            p = head;
            head = head->next;
            free(p);
            break;
        case 2:
            p = head;
            t = head;
            while(p->data != element) {
                t = p;
                p = p->next;
            }
            t->next = p->next;
            free(p);
            break;
        case 3:
            p = head;
            t = head;
            while(p->next != NULL) {
                t = p;
                p = p->next;
            }
            t->next = NULL;
            free(p);
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