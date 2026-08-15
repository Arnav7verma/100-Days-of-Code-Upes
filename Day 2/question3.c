//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

//Solution ----------------

#include <stdio.h>
int main(){
    int l,b,peri;
    printf("Enter the length of the rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);
    printf("Area:%d\n",(l*b));
    printf("Perimeter:%d\n",2 * (l + b));
    return 0;
}