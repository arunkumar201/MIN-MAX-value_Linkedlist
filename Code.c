#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
 
}*head=NULL;

void createlist(int a[],int n)
{
 struct node *temp,*p,*newnode;
 p=(struct node*)malloc(sizeof(struct node));
 p->data=a[0];
 p->link=NULL;
   head=p;
   temp=p;
 for(int i=1;i<n;i++)
 {
  newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=a[i];
  newnode->link=0;
  temp->link=newnode;
  temp=newnode;
 }
}
 void display()
 {
  struct node *temp;
  temp=head;
  printf("all elements are:\n");
  while(temp!=NULL)
  {
   printf("%d-> ",temp->data);
   temp=temp->link;
  }
 }
  void main()
  {
   int a[45];
   int i,n;
   printf("enter the items to  be inserted in the list\n");
   scanf("%d",&n);
   printf("enter %d elements in the linked list\n",n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   createlist(a,n);
   display();
   max_minvalue();
  }
  max_minvalue()
   {
    int min,max;
   struct node*temp=head;
    if(head==0)
    {
     printf("]n list is Empty\n");
   }
   max=temp->data;
   min=temp->data;
   while(temp!=0)
   {
    if(max<temp->data)
    {
     max=temp->data;
    }
     if(min>temp->data)
    {
     min=temp->data;
    }
    temp=temp->link;
   }
  printf("\n maximum and minimum value in a linked list: %d %d",max,min);
   }
