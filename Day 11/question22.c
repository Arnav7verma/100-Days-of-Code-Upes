//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main(){
    float cp,sp,p,l;
    printf("Please enter the cost price");
    scanf("%d",&cp);
    printf("Plese enter the selling price");
    scanf("%d",&sp);
    if (sp>cp){
        p=sp-cp;
        printf("Profit percentage==%.2f",(p/cp)*100.00);
    }
    else if (sp<cp)
    {
        l=cp-sp;
        printf("Loss percentage==%f",(l/cp)*100.00);
    }
    else
    {
        printf("No profit or loss made");
    }
    
    
    return 0;
}