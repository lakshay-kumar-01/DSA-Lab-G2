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
    printf("Enter your choice:\n1. insertion at beginning.\n2. insertion in between.\n3. insertion at last.\n");
    scanf("%d", &choice);
    if (choice >= 1 && choice <= 3) {
        new = (struct node*) malloc(sizeof(struct node));
        printf("Enter the data to insert: ");
        scanf("%d", &new->data);
    }
    switch (choice) {
        case 1:
            if (head == NULL) {
                head = new;
                head->next = head;
            }
            else {
                p = head;
                while(p->next != head) {
                    p = p->next;
                }
                p->next = new;
                new->next = head;
                head = new;
            }
            break;
        case 2:
            if(head==NULL) {
                head=new;
                head->next=head;
            }
            else {
                p=head;
                printf("Enter element aftwr which you have to insert: ");
                scanf("%d",&element);
                while(p->data!=element) {
                    p=p->next;
                }
                new->next=p->next;
                p->next=new;
            }
            break;
        case 3:
            if (head == NULL) {
                head = new;
                head->next = head;
            }
            else {
                p = head;
                while(p->next != head) {
                    p = p->next;
                }
                p->next = new;
                new->next = head;
            }
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
