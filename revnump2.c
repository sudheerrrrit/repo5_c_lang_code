#include<stdio.h>
void main()
{
    int num , rem ,revnum=0 ,orig_num;
    printf(" enter a number");
    scanf(" %d",&num);
    orig_num=num;
    for( ;num!=0; )
    {
    rem=num%10;
    revnum=revnum*10+rem;
    num=num/10;
    }
    printf(" the revers of %d is %d\n",orig_num,revnum);
    if (orig_num==revnum)
    printf(" the number is pollidron");
    else
    printf(" number is not pollidron");
}