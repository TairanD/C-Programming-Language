# Pointer (Important!)

## 1 - Memory

### 1.1 - Memory Components
Memory - used to store programs when they are executing and store their data.

When your computer run multiple programs at the same time, all of them need to access to the memory (this process is controlled by the operating system). 

The memory assigned to C is divided into three parts:
1. Static Memory
2. Heap Memory
3. Stack Memory

### 1.2 - Static Memory
Definiton: the memory that does not change in size.

When the computing firstly executes a program, it will create the necessay memory, being kept until the program is finished. Static memory contains:
1. The instructions of the program.
2. The global variables that we have defined.

### 1.3 - Heap Memory
Compared to static memory, heap memory is for dynamically allocated sections of memory. Unlike static memory created automatically for us, to get memory from the heap, the programmer must request it from the operating system. Also, we're responsible to release it back to the operating system because if we do not do that, more and more used memory will slow down our computer or maybe even creash it. This is the famous **memory leak**.

### 1.4 - Dynamic Memory Allocation
Definition: the process of getting memory from the heap is known as dynamic memory allocation. 

This process gives us a pointer to allow us to access the memory. 

### 1.5 - Stack Memory
We usually just call stack memory as **stack**. The stack is where local variables and parameters are remembered (and don't forget global variables are remembered in static memory). The stack is made up of different parts that are allocated and released automatically for us when our program is running. These parts are called **stack frames**.

### 1.6 - Stack Frames
Whenever a funciton is called, a stack frame is created to hold any local variables and parameters. When the function is finished, this stack frame is removed from the stack, and we cannot access any variable contained in it.

## 2 - The Stack (not the same to stack memory)

### 2.1 - What is Stack?
Stack is a type of data structure working on the principle of last in first out (LIFO), which means we can **only** access the element on the top.
### 2.2 - The Stack in Memory
The stack in memory works on the same principle of LIFO: when a function is called, a new frame (holding all of the function's variables and parameters) is created and placed on the top of the stack holding. We have no longer have access to local variables of any other functions.

### 2.3 - Benefits of Using a Stack
- It frees programmers from caring about allocating memory or freeing it when we finished.
- As this is the only frame that can be accessed while the function is executing, variables in different functions with cannot be confused.

## 3 - Representing Memory
Every variables we create is stored somewhere in memory. Knowing if it is static, heap or stack tells us our responsibilities, but all of these parts are just stored in the main memory of the computer, which is like a really big array.

### 3.1 - Memory Cells
The memory of our computer is made up of many memory cells. Each memory cell can typically store 8 bits of data (some values require multiple cells). Each cell has an address we can use to access it (just like the index in an array).

### 3.2 - Address, Variable Name, & Value
- Each memory cell stores 8 bits of data (value).
- Each memory cell has an unique address to access to it. 
- By declaring a name for a variable, we can use the name to refer to memory address.
- Therefore, programmers can use variable names to conduct operations to the data inside memory units by referring to their addresses.

### 3.3 - Referencing & Dereferencing
- Referencing: `&` can be used to find the address of a variable.
- Dereferencing: `*` can be used to find the value of an address.

For example, for the imaginary computer below: 
- the value of `&a` is 1.
- the value of `*x` is 2.
<div align="center">
<img src="img/imaginary-comp.png" width = "600">
</div>


### 3.4 - Pointers
From the above example, variable `a` remembers a memory address, so it can be called a **pointer** or pointer varible.

# Question
1 - In both java and c, variables directly remember the value of primitive type data. And they also both remember the memory address of reference type data like array. 

The difference between java and c lies in that in java, functions are pass by reference, whereas c functions are pass by value, although we can declare a pointer variable as the parameter to let them pass by value.

2 - So every variable storing reference types data can be called a pointer in c right? Because they remember addresses instead of values.