//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

//Solution---------------------

#include <stdio.h>
int sum(int a,int b){
    return a+b;
}
int diff(int a,int b){
    return a-b;
}
int product(int a,int b){
    return a*b;
}
int quotient(int a,int b){
    if (b==0)
        printf("Division by Zero is not allowed\n");
    else
        return a/b;
}
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("\nEnter the second number:");
    scanf("%d",&b);
    printf("\nSum:%d\n",sum(a,b));
    printf("Diff:%d\n",diff(a,b));
    printf("Product:%d\n",product(a,b));
    printf("Quotient:%d\n",quotient(a,b));
    return 0;
}