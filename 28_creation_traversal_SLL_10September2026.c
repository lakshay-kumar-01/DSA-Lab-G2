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
    printf("Linked list: ");
    p = head;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    return 0;
}