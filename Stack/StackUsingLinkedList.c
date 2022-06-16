/*
Program : Stack implementation using Linked List in C.
Author : Aman Kumar
*/

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*top = NULL ,*newn, *x;

void push();
void pop();
void peek();
void search();
void min();
void max();
void display();

int main()
{
    int ch,x;
    while(1)
    {
        printf("Please select an option: \n 1. Push \t\t\t 2. Pop \n 3. Peek \t\t\t 4. Search \n 5. Minimum \t\t\t 6. Maximum \n 7. Display \t\t\t 8. Exit\n\n");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            search();
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
            printf("Invalid Input \n");
            break;
        }
    }
    return 0;
}

void push()
{
    newn = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element : \n");
    scanf("%d",&newn->data);

    if(top==NULL)
        newn -> next = NULL;
    else
        newn -> next = top;
    top = newn;
    printf("Element(%d) pushed in stack successful\n",newn->data);
}

void pop()
{
    x = top;
    if(top==NULL)
        printf("Stack is Underflow. \n");
    else
        top = x -> next;
}

void peek()
{
    x = top;
    printf("Top element is : \t %d \n",top -> data);
}

void search()
{
    int n,k=0;
    x = top;
    printf("Enter the element which you want to search: \n");
    scanf("%d",&n);
    while(x != NULL)
    {
        if(x->data==n)
            k=1;
        x = x -> next;
    }
    (k==1)?printf("Element(%d) found in stack\n",n):printf("Element(%d) is not in stack\n",n);
}

void min()
{
    x = top;
    int temp;
    int k = x -> data;
    while(x !=NULL)
    {
        if(x->data < k)
        {
            temp = x->data;
            x->data = k;
            k = temp;
        }
        x = x -> next;
    }
    printf("Minimum element in stack is : %d\n",k);
}

void max()
{
    x = top;
    int temp;
    int k = x -> data;
    while(x !=NULL)
    {
        if(x->data > k)
        {
            temp = x->data;
            x->data = k;
            k = temp;
        }
        x = x -> next;
    }
    printf("Maximum element in stack is: %d\n",k);
}

void display()
{
    x = top;
    printf("Printing elements of stack: \n");
    while(x != NULL)
    {
        printf("%d\n",x->data);
        x = x -> next;
    }
}

