/*
Program : Queue implementation using arrays
Author: Aman Kumar
*/

#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

// Global variable
int front=-1, rear=-1,i, queue[SIZE];

//Get top/front element from the queue.
void peek()
{
    printf("Peek element is : %d\n",queue[front]);
}

//Inserting element into the queue.
void enqueue(int item)
{
    if(rear >= SIZE - 1)
        printf("Queue is overflowing. \n");
    else
    {
        if(front==-1)
            front = 0;
        rear++;
        queue[rear] = item;
        printf("Success !! Inserted element (%d) into the queue.\n",item);
    }
}

//Removing element from queue.
void dequeue()
{
    if(front<= -1)
        printf("Queue is underflowing.\n");
    else
    {
        printf("Dequeue element(%d) from queue.\n",queue[front]);
        front++;
        if(front>rear)
            front = rear = -1;
    }
}

//Finding minimum element from queue.
void min()
{
    int m = queue[front];
    for(i=front;i<=rear;i++)
    {
        if(m > queue[i])
            m = queue[i];
    }
    printf("Minimum element in queue is : \t %d\n",m);
}

//Finding maximum element from the queue.
void max()
{
    int m = queue[front];
    for(i=front;i<=rear;i++)
    {
        if(m < queue[i])
            m = queue[i];
    }
    printf("Maximum element in queue is : \t %d\n",m);
}

//Searching element in queue.
void search(int item)
{
    int flag =0;
    for(i=front;i<=rear;i++)
    {
        if(item == queue[i])
            break;
    }
    (flag==1)?printf("Element(%d) found at %dth position.\n",item,i):printf("Can't find element(%d) in queue.\n");
}

//Displaying all elements in queue.
void display()
{
    for(i=front;i<=rear;i++)
        printf("%d\n",queue[i]);
}

//main function
int main()
{
    int ch,x;
    while(1)
    {
        printf("Please select an option: \n 1. Enqueue \t\t\t 2. Dequeue\n 3. Peek\t\t\t 4. Search\n 5. Minimum\t\t\t 6. Maximum\n 7. Display\t\t\t 8. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            printf("Enter the element which you want to add:\n");
            scanf("%d",&x);
            enqueue(x);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            printf("Enter element which you want to search: \n");
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
            printf("Invalid input. \n");
            break;
        }
    }

    return 0;
}
