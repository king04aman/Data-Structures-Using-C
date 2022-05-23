Stack
===
A stack is a linear data structure that follows the principle of Last In First Out (LIFO). This means the last element inserted inside the stack is removed first.

Stack Representation
----
&emsp;&emsp;&emsp; <img src="https://www.tutorialspoint.com/data_structures_algorithms/images/stack_representation.jpg" alt="Stack Representation" width="30%"/> 
&emsp;&emsp;&emsp; <img src="https://cdn.programiz.com/sites/tutorial2program/files/stack.png" alt="Stack Representation" width="45%"/>

Basic Operations of Stack
---
There are some basic operations that allow us to perform different actions on a stack.

- Push: Add an element to the top of a stack
- Pop: Remove an element from the top of a stack
- IsEmpty: Check if the stack is empty
- IsFull: Check if the stack is full
- Peek: Get the value of the top element without removing it

Working of Stack 
---
The operations work as follows:

- A pointer called TOP is used to keep track of the top element in the stack.
- When initializing the stack, we set its value to -1 so that we can check if the stack is empty by comparing TOP == -1.
- On pushing an element, we increase the value of TOP and place the new element in the position pointed to by TOP.
- On popping an element, we return the element pointed to by TOP and reduce its value.
- Before pushing, we check if the stack is already full
- Before popping, we check if the stack is already empty

&emsp;&emsp;&emsp; <img src="https://cdn.programiz.com/sites/tutorial2program/files/stack-operations.png" alt="Working of stack" width="600"/>


Algorithm And Code Example
---
> ### peek()
Algorithm of peek() function :
#### Algorithm
```
begin procedure peek
return stack[top]
end procedure
```
Implementation of peek() function in C programming language :

#### Example
```
int peek() {
   return stack[top];
}
```
> ### isfull()
Algorithm of isfull() function :

#### Algorithm
```
begin procedure isfull

   if top equals to MAXSIZE
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
   if(top == MAXSIZE)
      return true;
   else
      return false;
}
```
> ### isempty()
Algorithm of isempty() function :
#### Algorithm
```
begin procedure isempty

   if top less than 1
      return true
   else
      return false
   endif
   
end procedure
```
Implementation of isempty() function in C programming language is slightly different. We initialize top at -1, as the index in array starts from 0. So we check if the top is below zero or -1 to determine if the stack is empty. Here's the code :

#### Example
```
bool isempty() {
   if(top == -1)
      return true;
   else
      return false;
}
```

> ### push()
The process of putting a new data element onto stack is known as a Push Operation. Push operation involves a series of steps :
- Step 1 − Checks if the stack is full.
- Step 2 − If the stack is full, produces an error and exit.
- Step 3 − If the stack is not full, increments top to point next empty space.
- Step 4 − Adds data element to the stack location, where top is pointing.
- Step 5 − Returns success.

#### Algorithm
A simple algorithm for Push operation can be derived as follows :
```
begin procedure push: stack, data

   if stack is full
      return null
   endif
   
   top ← top + 1
   stack[top] ← data

end procedure
```
Implementation of this algorithm in C :
#### Example
```
void push(int data) {
   if(!isFull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}
```
> ###pop()
A Pop operation may involve the following steps −
- Step 1 − Checks if the stack is empty.
- Step 2 − If the stack is empty, produces an error and exit.
- Step 3 − If the stack is not empty, accesses the data element at which top is pointing.
- Step 4 − Decreases the value of top by 1.
- Step 5 − Returns success.

A simple algorithm for Pop operation can be derived as follows :
#### Algoritm
```
begin procedure pop: stack

   if stack is empty
      return null
   endif
   
   data ← stack[top]
   top ← top - 1
   return data

end procedure
```
Implementation of this algorithm in C :

#### Example
```
int pop(int data) {

   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}
```
---
For a complete stack program in C programming language, please check the above code files.



