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
    struct node *p;
    p=head;
    int count=0;
    while(p!=NULL) {
        count=count+1;
        p=p->next;
    }
    printf("Total no. of node %d",count);
}