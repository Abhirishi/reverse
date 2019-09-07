#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
   int data;
   struct node* next;

};
void print(struct node *head)
{

struct node *ptr=head;
while(ptr)
{
    printf("%d  ",ptr->data);
    ptr=ptr->next;

}
printf("\n");
}
struct node *rev(struct node *head)
{
   struct node *pre,*ptr=head,*post=head;
   while(ptr)
   {
       post=post->next;
       if(ptr==head)
       ptr->next=NULL;
       else
        ptr->next=pre;
       pre=ptr;
       ptr=post;
   }
   return pre;

}

int main()
{
    struct node *head,*ptr1,*ptr2;
    int n=9,d;
    printf("enter element");

    head=(struct node*)malloc(sizeof(struct node*));
    scanf("%d",&d);
      head->data=d;
          ptr1=head;
    while(n--)


    {
        printf("enter element");+
       scanf("%d",&d);
        ptr2=(struct node*)malloc(sizeof(struct node*));
       ptr1->next=ptr2;
       ptr2->next=NULL;
       ptr2->data=d;
       ptr1=ptr2;
    }
    print(head);
    head=rev(head);
    printf("reverse list is");
    print(head);
}
