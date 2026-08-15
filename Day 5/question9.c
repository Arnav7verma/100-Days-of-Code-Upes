//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
//Solution-------
#include <stdio.h>
#include <math.h>
int main(){
    float p,r,t,sim,comp,a,n=1;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time period:");
    scanf("%f",&t);
    sim=(p*r*t)/100;
    printf("The simple interest is:%f",sim);
    a=p*(pow(1+r/(100*n),n*t));
    comp=a-p;
    printf("\nThe compound interest is:%f",comp);
    return 0;
}