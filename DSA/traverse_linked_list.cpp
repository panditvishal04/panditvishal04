#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"\nelement:"<<ptr->data;
        ptr=ptr->next;
    }
}
int main()
{
    struct node* head;
    struct node* second;
    struct node* third;
    struct node* fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth =(struct node*)malloc(sizeof(struct node));
     //link first and second node
     head->data=7;
     head->next=second;
     //link second and third node
     second->data=8;
     second->next=third;
     //link third and fourth node
     third->data=9;
     third->next=fourth;
     //terminate the list at the third node
     fourth->data=10;
     fourth->next=NULL;
     linkedlisttraversal(head);
return 0;
}