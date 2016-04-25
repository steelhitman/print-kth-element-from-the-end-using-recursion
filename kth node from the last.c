#include<stdio.h>
#include<malloc.h>
typedef struct nodetype
{
    int data;
    struct nodetype *next;
}node;
node *head=NULL;
int i=0;
void create()
{
    node *temp=head;
    node *temp1=(node*)malloc(sizeof(node));
    int info;
    printf("enter data:");
    scanf("%d",&info);
    temp1->data=info;
    if(head==NULL)
    {
        head=temp1;
        head->next=NULL;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=temp1;
        temp=temp->next;
        temp->next=NULL;
    }
}
void kth(node *head,int k)
{
    if(head!=NULL)
    {
        kth(head->next,k);
        i=i+1;
        if(i==k)
        {
            printf("%d",head->data);
        }
    }
}
void main()
{
    int j=0,num,b;
    printf("Enter no. of elements:");
    scanf("%d",&num);
    for(j=1;j<=num;j++)
    {
        create();
    }
    printf("Enter k:");
    scanf("%d",&b);
    kth(head,b);
}
