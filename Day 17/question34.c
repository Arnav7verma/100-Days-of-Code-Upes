//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include <stdio.h>
int main(){
    int n,a=2,b=0;
    printf("Enter the number");
    scanf("%d",&n);
    while (a!=n)
    {
        if (n%a==0)
        {
            b=1;
            break;
        }
        else
            a++;
    }
    if (b==0)
    {
        printf("Prime");
    }
    else
        printf("Not Prime");
}