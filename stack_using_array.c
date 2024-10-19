#include <stdio.h>
#include <stdlib.h>

int top = -1, a[' '],s;

void push()
{
    int x;
    if (top == s- 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("\nEnter the element to add in the stack: ");
        scanf("%d", &x);
        top = top + 1;
        a[top] = x;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nempty stack!!!!!");
    }
    else
    {
        printf("\nPopped element: %d", a[top]);
        top = top - 1;
    }
}
void show()
{
    if (top == -1)
    {
        printf("\nempty stack!!!!");
    }
    else
    {
        printf("\nElements present in the stack: \n");
        for (int i = top; i >= 0; --i)
        {
            printf("%d\n", a[i]);
        }
    }
}
int main()
{
    int choice=0;
    printf("enter the size of array: ");
    scanf("%d",&s);
    while (choice<=4)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
    return 0;
}