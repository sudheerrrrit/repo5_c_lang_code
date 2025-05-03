#include<stdio.h>
void main()
{
    int base , exp , result=1 , i=1;
    printf(" enter the value of base and exponent");
    scanf("%d%d",&base,&exp);
    while(i<=exp)
    {
        result=result*base;
        i++;
    }
    printf(" %d^%d=%d",base,exp,result);
}