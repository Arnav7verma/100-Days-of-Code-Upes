//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
//Solution------
#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the value of variable a");
    scanf("%d",&a);
    printf("Enter the value of variable b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap:\n");
    printf("a:%d",a);
    printf("b:%d",b);
    return 0;
}
