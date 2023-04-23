#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;

};
void linkedlisttraverse(struct node *ptr)
{
    while(ptr!=NULL){
    printf("%d",ptr->data);
    ptr=ptr->next;
    }

}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    head->data=99;
    head->next=second;
    second->data=22;
    second->next=third;
    third->data=0;
    third->next=fourth;
    fourth->next=NULL;
    printf("%d ", second);
    linkedlisttraverse(head);

    return 0;
    

}