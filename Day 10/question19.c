//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter the lenght of 1st side");
    scanf("%d",&a);
    printf("Enter the lenght of 2nd side");
    scanf("%d",&b);
    printf("Enter the lenght of 3rd side");
    scanf("%d",&c);
    if ((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b))
        printf("Isosceles");
    else if (a==b && b==c)
    {
        printf("Equilateral");
    }
    else
        printf("Scalene");
    return 0;
}