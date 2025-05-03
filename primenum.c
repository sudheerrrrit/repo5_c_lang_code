#include<stdio.h>
void main()
{
    int num , i;
    printf(" the prime number betwwen 1 to 300 is ");
    for(num=1;num<=300;num++)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            break;
        }
        if(i==num)
        printf(" %d\t",num);
        
    }
}