//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main(){
    int b,n,a,sum=0,i=0;
    printf("Enter the number");
    scanf("%d",&n);
    a=b=n;
    while (n>0)
    {
        i++;
        n=n/10;
    }
    while (b>0)
    {
        sum=sum+pow(b%10,i);
        b=b/10;
    }
    if (a==sum)
        printf("Armstorng");
    else
        printf("Not Armstrong");
}