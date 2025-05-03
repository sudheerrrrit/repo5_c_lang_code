#include<stdio.h>
void main()
{
    int base , exp , result=1 , i=1;
    printf(" enter the value of base and exponent");
    scanf("%d%d",&base,&exp);
    do
    {
        result=result*base;
        i++;
    } while (i<=exp);
    

    printf(" %d^%d=%d",base,exp,result);
}
