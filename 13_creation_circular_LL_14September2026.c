#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main() {
    int ch=1;
    struct node *head=NULL,*new,*temp;
    while(ch==1) {
        new=(struct node*) malloc(sizeof(struct node));
        printf("Enter the data part: ");
        scanf("%d",&new->data);
        if(head==NULL) {
            head=new;
            temp=new;
            temp->next=head;
        }
        else {
            temp->next=new;
            temp=temp->next;
            temp->next=head;
        }
        printf("Enter your choice as 0 or 1: ");
        scanf("%d",&ch);
    }
    struct node *p;
    p=head;
    while(p->next!=head) {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("%d",p->data);
    return 0;
}
