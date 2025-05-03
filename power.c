#include<stdio.h>
void main()
{
    int base , exp , result=1 , i;
    printf(" enter the base and exponent");
    scanf("%d%d",&base,&exp);
    for(i=1;i<=exp;i++)
    {
        result=result*base;

    }
    printf("%d^%d = %d",base,exp,result);

}