/*
Program : Stack implementation using array in C.
Author : Aman Kumar
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

int top = -1;
int arr[SIZE],i;

// Pushing element into the stack.
void push(int item)
{
    if(top >= (SIZE - 1))
    {
        printf("Stack is overflow.\n");
    }
    else{
        top++;
        arr[top] = item;
        printf("Pushed %d in stack at %dth position.\n",item,top);
    }
}

//Popping element from stack.
void pop()
{
    if(top < 0)
    {
        printf("Stack is underflow. \n");
    }
    else{
        printf("Popped %d from the stack.\n",arr[top]);
        arr[top] = NULL;
        top--;
    }
}

//Peeking element of stack.
void peek()
{
    printf("Peeking top element.\n Top element is : %d\n",arr[top]);
}

// Find element in stack
void search(int item)
{
    for(i=0;i<SIZE;i++)
    {
        if(arr[i] == item)
        {
            printf("Element(%d) found at %dth position in stack.\n",item,i+1);
        }
    }
}

//Finding minimum element of stack.
void min()
{
    int x = arr[0];
    for(i=0;i<SIZE;i++)
    {
        if(x > arr[i])
            x = arr[i];
    }
    printf("Minimum element in stack is : \t%d\n",x);
}

//Finding maximum element of stack.
void max()
{
    int x = arr[0];
    for(i=0;i<SIZE;i++)
    {
        if(x < arr[i])
            x = arr[i];
    }
    printf("Maximum element in stack is : \t%d\n",x);
}

//Displaying elements of stack.
void display()
{
    int i;
    for(i=0;i<SIZE;i++)
        printf("%d\n",arr[i]);
}


//Main function as user for operations input.
int main()
{
    int ch,x;
    while (1)
    {
        printf("Please select an option: \n 1. Push \t\t\t 2. Pop \n 3. Peek \t\t\t 4. Search \n 5. Minimum \t\t\t 6. Maximum \n 7. Display \t\t\t 8. Exit\n\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("Please enter the element which you want to push into the stack: \n");
            scanf("%d",&x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            printf("Please enter the element which you want to search into the stack: \n");
            scanf("%d",&x);
            search(x);
            break;
        case 5:
            min();
            break;
        case 6:
            max();
            break;
        case 7:
            display();
            break;
        case 8:
            exit(0);
            break;
        default:
            printf("Invalid option requested.\nPlease retry.\n");
            break;
        }

    }
    return 0;
}
