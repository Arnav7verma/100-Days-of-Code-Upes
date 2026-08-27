//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of 1st number");
    scanf("%d",&a);
    printf("Enter the value of 2nd number");
    scanf("%d",&b);
    while (b!=0)
    {
        c=b;
        b=a%b;
        a=c;
    }
    printf("%d",a);
}