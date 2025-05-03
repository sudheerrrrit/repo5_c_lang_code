#include<stdio.h>
void main()
{
    int num , i ,c=0;
    printf(" enter the number = ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0&&num==i)
        {
            c++;
        }


        
    }
    if(c==1)
    printf("the number is prime ");
    else 
    printf(" the number is composite number ");
}