//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
//Solution 

#include <stdio.h>
int main(){
    float c=0,f=0;
    printf("Enter the temperature in Celcius");
    scanf("%f",&c);
    f=(c*9.0/5.0)+32;
    printf("The temperature in farenheit is :%f",f);
    return 0;
}