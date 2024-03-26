#include<stdio.h>
int main(){
    int a = 25;
    int b = 98;
    int *ptr = &a;
    printf("a: %d\n", ptr);
    int ptrr = &b;
    printf("b: %d\n", ptrr);
}