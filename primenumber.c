#include<stdio.h>
void main()
{
    int num  , c=0 ;
    printf(" \n enter the number = ");
    scanf("%d",&num);
    for(int i = 1;i<=num;i++)
    {
        if(num%i==0)
        {
            c++;
        }

    }
    if(c==2)
    {
        printf(" \n the number is prime ");
    }
    else{
        printf(" \n the number is not prime ");
    }
}