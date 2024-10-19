#include<stdio.h>
#include<stdlib.h>
struct node {
    int info;
    struct node* next;
};
struct node *start=NULL;
struct node *temp ;

void push()
{
    int data;
   struct node *new=(struct node*)malloc(sizeof( struct node));
   printf("enter data to push:");
   scanf("%d",&data);
   new->info=data;
   new->next=start;
   start=new;
}
void pop()
{
    if(start==NULL)
    {
        printf("underflow!");
    }
    else{
   struct node *new=(struct node*)malloc(sizeof( struct node));
   printf("popped element is: %d",start->info);
   temp=start;
   start=start->next;
   temp->next=NULL;
}
}
void display()
{
    temp=start;
    if(temp==NULL)
    {
        printf("empty stack");
    }
    else{
        while(temp!=NULL)
        {
            printf("%d \n",temp->info);
            temp=temp->next;
        }
    }
}
int main()
{
    int choice=0;
    while(choice<=4)
    {
        printf("press 1 for stack push: \n press 2 for pop: \n press 3 for display: \n press 4 for exit: \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
            break;
            case 2: pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("enter valid choice");
        }
    }
    return 0;
}