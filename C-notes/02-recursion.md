# Recursion

## 1 - Definition
I have illustrate the detailed definition of recursion in my another repo. This file is mainly focus on recursion in practical way in C.

## 2 - Indirect Recursion
A recursive function may be define indirectly - it calls another function which calls it
```C
int fnA(){
    ...
    fnB();
    ...
}
int fnB(){
    ...
    fnA();
    ...
}
```

## 3 - Defining Recursive Function in C - Factorial
```C
int calculateFactorial(int i){
    if (i==0){
        return 1;
    }else{
        return i*calculateFactorial(i-1);
    }
}
```

## 4 - Defining Recursive Function in C - Fibonacci
```C
int calculateFibonacci(int i){
    if (i==0){
        return 0;
    }else if (i==1){
        return 1;
    }else{
        return calculateFibonacci(i-1) + calculateFibonacci(i-2);
    }
}
```

## 5 - Recursion or Iteration
Depending on the situation!
