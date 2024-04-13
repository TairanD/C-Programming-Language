#include<stdio.h>

struct myObject
{
    
    int caonima;
    int value;
};


int main(){
    int a = 25;
    int b = 98;
    int *ptr = &a;
    printf("a: %d\n", ptr);
    int *ptrr = &b;
    printf("b: %d\n", ptrr);

    int arry[10] = {12, 20, 2};

    printf("arry: %d\n", *arry);





    struct myObject obj;
    obj.value = 10;
    obj.caonima = 20;

    printf("obj: %d\n", obj);
}