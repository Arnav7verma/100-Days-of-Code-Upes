//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

/*
Sample Test Cases:
Input 1:
7
Output 1:
7 is odd

Input 2:
12
Output 2:
12 is even

*/
//Solution-
#include <stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if (a%2==0)
        printf("%d is Even",a);
    else
        printf("%d is Odd",a);
}