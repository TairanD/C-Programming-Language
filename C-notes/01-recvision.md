# Table of Content
1. Types
2. Arrays
3. Statements
4. Defining Functions

## 1 - Types
### 1.1 - Integer Types
To represent an integer value in our program, we can use one of the integer types
- E.g. Values like 1, 2, 3, 4,...

int type is the most common-used type for integer, but there are other types such as char, short, long, & long long. The only difference between these types is their size.

### 1.2 - Real Types
Real numbers in programming are called **floating point numbers**, there are a number of types we can use to represent these. Most of time we will use the double type, but there are other types called float & long double. Again, the only difference between them is their size.

## 2 - Arrays
### 2.1 - Array Example
Array is a container of multiple values identified by index.

- All of the data in an array must be the same type.
- Arrays cannot be increased or decreased in size.

An array is declared by adding square brackets and an integer value after the name: `int number[10]`; elements in the array will be accessed using their index: `int a = numbers[0] * 2`; Elements can also be changed using their index: `numbers[4] = 22`.

### 2.2 - Array Initialization
When we are first declaring an array, we can set all of the values:`int numbers[] = {1,2,3,4,5}`. If we do not include a number for the size of the array, it will be automatically matched to the number of values.

### 2.3 - There is no String in C
The C programming language does not have a dedicated type for representing text. We can create a 'string' using array containing char: `char name[10] = 'TairanDing';`. char represents a one byte character stored as an integer
### 2.4 - Comparison to Java
In java, we create an array: `int[] arr = {1, 2, 3, 4, 5};`

## 3 - Statements
### 3.1 - Variable Declaration & Assignment
- Create a new variable to remember a value: `type name = value;`
### 3.2 - Conditional Statements - if, elif, & else
```C
if (condition){
    statements;
}else if(other condition){
    other statements;
}else{
    other statements;
}
```
### 3.3 - Loop Statements

#### 3.3.1 - while
```C
int i = 0;
while (int < 5){
    printf("Hello\n");
    i = i + 1;
}
```

#### 3.3.2 - for
```C
for (int i = 0; i<5; i++){
    printf("Hello\n");
}
```

### 3.4 - Other Statements
- Include a library to use its functions: `#include <studio.h>`
- Defining a constant in our code: `#define SIZE 100`
- Increment operator: i++;

## 4 Defining functions
The return type, the name, the parameters, the code. Just like java.