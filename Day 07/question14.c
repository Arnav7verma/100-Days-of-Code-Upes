// Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
//Soltuion----
#include <stdio.h>
#include <ctype.h>
int main(){
    char a,b;
    printf("Please enter a character:");
    scanf("%c",&a);
    b=tolower(a);
    if (b == 'a'||b == 'e'||b == 'i'||b == 'o'||b =='u')
        printf("%c is vowel",a);
    else
        printf("%c is constant",a);
    return 0;
}