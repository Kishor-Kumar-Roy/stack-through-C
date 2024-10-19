#include<stdio.h>
#include<stdlib.h>
int tos=-1,s[' '],size;
void push()
{
    int item;
    if(tos==size-1)
    {
        printf("overflow!\n ");
    }
    else {
        printf("enter item to push:");
        scanf("%d",&item);
        tos++;
        s[tos]=item;

    }
}
void pop()
{
    if(tos==-1)
    {
        printf("underflow! \n");
    
    }
    else {
        printf("\n popped element: %d \n",s[tos]);
        tos--;
    }

}
void display()
{
    
    if(tos==-1)
    {
        printf("stack is empty \n");
    }
    else {
        printf("element present in the stack is: \n");
       for(int i=tos;i>=0;i--)
       {
        printf("%d \n",s[i]);
       }
    }
}
int main()
{
     int choice=0;
     printf("enter size of stack: ");
     scanf("%d",&size);
     while(choice<=4)
     {
        printf("press 1 for  data pushing in stack : \n press 2 for data popping : \n press 3 for display: \n press 4 for exit: \n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;
            case 2:pop();
            break;
            case 3: display();
            break;
            case 4: exit(0);
            default: printf("enter valid choice!");
        }
     }
    return 0;
}