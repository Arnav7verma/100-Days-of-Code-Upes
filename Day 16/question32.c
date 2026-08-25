//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include <stdio.h>
int main(){
    int a,b=0,c;
    printf("Enter the number");
    scanf("%d",&a);
    c=a;
    while (a>0)
    {
        b=b+(a%10);
        b=b*10;
        a=a/10;
    }
    b=b/10;
    printf("%d",b);
    if (b==c)
    {
        printf("\nPalindrome");
    }
    else
        printf("\nNot palindrome");
    return 0;
    
}