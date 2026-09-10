#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
int main() {
    struct node *head=NULL, *newnode, *temp;
    int ch=1;
    while(ch!=0) {
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("Element the element: ");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL) {
            head=newnode;
            temp=newnode;
        }
        else {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter your choice 1 if youu want to continue else 0: ");
        scanf("%d",&ch);
    }
    struct node *p,*c,*n;
    p=NULL;
    c=head;
    n=NULL;
    while(c!=NULL) {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;
    printf("Reversed List: ");
    temp=head;
    while(temp!=NULL) {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}