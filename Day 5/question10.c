//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
//Solution
#include <stdio.h>
int main(){
    int sec,hr,min,t;
    printf("Enter the time in seconds:");
    scanf("%d",&t);
    sec=t%60;
    min=t/60;
    hr=min/60;
    min=hr%60;
    printf("Hours:%d",hr);
    printf("\nmins:%d",min);
    printf("\nsec:%d",sec);
}