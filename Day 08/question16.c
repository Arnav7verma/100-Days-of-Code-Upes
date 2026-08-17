//Q16: Write a program to input three numbers and find the largest among them using if–else.

/*
Sample Test Cases:
Input 1:
3 7 5
Output 1:
Largest is 7

Input 2:
-1 -5 0
Output 2:
Largest is 0

*/
//Solution---
#include <stdio.h>
int main(){
    int a,b,c,d=0;
    printf("Enter the 1st number");
    scanf("%d",&a);
    printf("Enter the 2nd number");
    scanf("%d",&b);
    printf("Enter the 3rd number");
    scanf("%d",&c);
    if ((a>b) && (a>c))
        printf("%d is largerst",a);
    else if ((b>a) && (b>c))
        printf("%d is largerst",b);
    else
        printf("%d is largest",c);
    return 0;
}