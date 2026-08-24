//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>
int main(){
    long a,s=0;
    printf("Enter the number");
    scanf("%ld",&a);
    while (a>0)
    {
        s=s+a%10;
        s=s*10;
        a=a/10;
    }
    s=s/10;
    printf("%ld",s);
    
}