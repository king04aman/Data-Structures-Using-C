Queue
====
A queue can be defined as an ordered list which enables insert operations to be performed at one end called REAR and delete operations to be performed at another end called FRONT. Queue is referred to be as First In First Out list. 
For example, people waiting in line for a rail ticket form a queue.

&emsp;&emsp;&emsp; ![Queue Example](https://www.tutorialspoint.com/data_structures_algorithms/images/queue_example.jpg "Queue Example")
> A real-world example of queue can be a single-lane one-way road, where the vehicle enters first, exits first. More real-world examples can be seen as queues at the ticket windows and bus-stops.

Queue Representation
---

&emsp;&emsp;&emsp;  ![Queue Representation](https://static.javatpoint.com/ds/images/queue.png "Queue")

Applications Of Queue
---
There are various applications of queues few of them are discussed below.
- Queues are widely used as waiting lists for a single shared resource like printer, disk, CPU.
- Queues are used in asynchronous transfer of data (where data is not being transferred at the same rate between two processes) for eg. pipes, file IO, sockets.
- Queues are used as buffers in most of the applications like MP3 media player, CD player, etc.
- Queue are used to maintain the play list in media players in order to add and remove the songs from the play-list.
- Queues are used in operating systems for handling interrupts.

Basic Operations Of Queue
---
A queue is an object (an abstract data structure - ADT) that allows the following operations:
- Enqueue: Add an element to the end of the queue
- Dequeue: Remove an element from the front of the queue
- IsEmpty: Check if the queue is empty
- IsFull: Check if the queue is full
- Peek: Get the value of the front of the queue without removing it

Algorithm and Code
---
> ### peek()
This function helps to see the data at the front of the queue. The algorithm of peek() function is :

#### Algorithm
```
begin procedure peek
return queue[front]
end procedure
```

Implementation of peek() function in C programming language :

#### Example
```
int peek() {
   return queue[front];
}
```

> ### isfull()

Algorithm of isfull() function :
#### Algorithm
```
begin procedure isfull

   if rear equals to MAXSIZE
      return true
   else
      return false
   endif
   
end procedure
```
Implementation of isfull() function in C programming language :
#### Example
```
bool isfull() {
   if(rear == MAXSIZE - 1)
      return true;
   else
      return false;
}
```

> ### isempty()
If the value of front is less than MIN or 0, it tells that the queue is not yet initialized, hence empty.
Algorithm of isempty() function :

#### Algorithm
```
begin procedure isempty

   if front is less than MIN  OR front is greater than rear
      return true
   else
      return false
   endif
   
end procedure
```

Implementation of isempty() function in C programming language :

#### Example
```
bool isempty() {
   if(front < 0 || front > rear) 
      return true;
   else
      return false;
}
```
> ### enqueue()
The following steps should be taken to enqueue (insert) data into a queue :
- Step 1 − Check if the queue is full.
- Step 2 − If the queue is full, produce overflow error and exit.
- Step 3 − If the queue is not full, increment rear pointer to point the next empty space.
- Step 4 − Add data element to the queue location, where the rear is pointing.
- Step 5 − return success.

Algorithm of enqueue() function :

#### Algorithm
```
procedure enqueue(data)      
   
   if queue is full
      return overflow
   endif
   
   rear ← rear + 1
   queue[rear] ← data
   return true
   
end procedure
```

Implementation of enqueue() function in C programming language :

#### Example
```
int enqueue(int data)      
   if(isfull())
      return 0;
   
   rear = rear + 1;
   queue[rear] = data;
   
   return 1;
end procedure
```

> ### dequeue()
The following steps are taken to perform dequeue operation :
- Step 1 − Check if the queue is empty.
- Step 2 − If the queue is empty, produce underflow error and exit.
- Step 3 − If the queue is not empty, access the data where front is pointing.
- Step 4 − Increment front pointer to point to the next available data element.
- Step 5 − Return success.

Algorithm of dequeue() function :
#### Algorithm 
```
procedure dequeue
   
   if queue is empty
      return underflow
   end if

   data = queue[front]
   front ← front + 1
   return true

end procedure
```
Implementation of dequeue() in C programming language :
#### Example
```
int dequeue() {
   if(isempty())
      return 0;

   int data = queue[front];
   front = front + 1;

   return data;
}
``` 
---
For a complete Queue program in C programming language. Please check out above code files.
