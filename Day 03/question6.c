//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/
//Solution-------------------
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of variable a");
    scanf("%d",&a);
    printf("Enter the value of variable b");
    scanf("%d",&b);
    printf("Before swap:\n");
    printf("a:%d",a);
    printf("b:%d",b);
    c=b;
    b=a;
    a=c;
    printf("\nAfter swap:\n");
    printf("a:%d",a);
    printf("b:%d",b);
    return 0;
}   
