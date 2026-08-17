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
#include <ctype.h>
int main(){
    char ch;
    printf("Enter a character");
    scanf("%c",&ch);
    if (isupper(ch))
        printf("uppercase");
    else if (islower(ch))
        printf("lower");
    else if (isdigit(ch))
        printf("digit");
    else
        printf("Special char");
    return 0;   
}