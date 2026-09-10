#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *head=NULL,*newnode,*temp;
int main() {
    int ch=1;
    while(ch!=0) {
        newnode=(struct node*) malloc(sizeof(struct node));
        printf("Enter the element: ");
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
    int element,flag=0;
    printf("Enter the element to search: ");
    scanf("%d",&element);
    struct node *p;
    p=head;
    while(p!=NULL) {
        if(p->data==element) {
            printf("Element found.");
            flag=1;
        }
        p=p->next;
    }
    if(flag==0) {
        printf("Element not found.");
    }
}