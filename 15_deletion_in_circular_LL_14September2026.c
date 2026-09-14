#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    int ch = 1;
    struct node *head = NULL, *new = NULL, *temp = NULL, *p = NULL,*t=NULL;
    while(ch == 1) {
        new = (struct node*) malloc(sizeof(struct node));
        printf("Enter the data part: ");
        scanf("%d", &new->data);
        if(head == NULL) {
            head = new;
            temp = new;
            temp->next = head;
        }
        else {
            temp->next = new;
            temp = temp->next;
            temp->next = head;
        }
        printf("Enter your choice as 0 or 1: ");
        scanf("%d", &ch);
    }
    int choice, element;
    printf("Enter your choice:\n1. deletion at beginning.\n2. deletion in between.\n3. deletion at last.\n");
    scanf("%d", &choice);
        printf("Enter the data to delete: ");
        scanf("%d",&element);
    switch (choice) {
        case 1:
            p = head;
            t=head;
            while(p->next != head) {
                p = p->next;
            }
            p->next = t->next;
            head=t->next;
            free(t);
            break;
        case 2:
            p=head;
            t=head;
            while(p->data!=element) {
                t=p;
                p=p->next;
            }
            t->next=p->next;
            free(p);
            break;
        case 3:
            t=head;
            p=head;
            while(p->next!=head) {
                t=p;
                p=p->next;
            }
            t->next=head;
            free(p);
            break;
    }
    p=head;
    while(p->next!=head) {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("%d",p->data);
    return 0;
}
