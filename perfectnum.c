#include<stdio.h>
void main()
{
    int i , j  , sum; 
    printf("\n the perfect number between 1 to 500 is ");
    for(i=1;i<=500;i++)
    {
        sum=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            sum=sum+j;
            
        }
        

    }
    if(sum==i)
    printf("%d",i);
}