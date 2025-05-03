#include<stdio.h>
void main()
{
    int num , rem ,revnum=0 ,orig_num;
    printf(" enter a number");
    scanf(" %d",&num);
    orig_num=num;
    while(num!=0)
    {
        rem=num%10;
        revnum=revnum*10+rem;
    
        num=num/10;

    }
    printf(" the revers of %d is %d",orig_num,revnum);
}