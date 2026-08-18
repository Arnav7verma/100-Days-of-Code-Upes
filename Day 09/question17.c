//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    double d,root1,root2;
    printf("Enter the coefficient of x²");
    scanf("%d",&a);
    printf("Enter the coefficient of x");
    scanf("%d",&b);
    printf("Enter the constant");
    scanf("%d",&c);
    d=(b*b)-4*a*c;
    if (d>0){
        root1=(-b+sqrt(d))/(2.0*a);
        root2=(-b-sqrt(d))/(2.0*a);
        printf("Roots are real and different: %0.f , %0.f",root1,root2);
    }
    else if (d==0)
    {
        root1=(-b)/(2.0*c);
        printf("Roots are real and same: %0.f",root1);
    }
    else
        printf("Roots are complex");
    
    return 0;
}