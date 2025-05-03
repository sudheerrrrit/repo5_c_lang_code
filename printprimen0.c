#include<stdio.h>
void main()
{
    int c;
    printf("\n the prime no between 1 to 100 is = ");
     for(int i=2;i<=10000;i++)
    {
        c=0;
        for(int j =1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        {
            printf("%d ",i);
        }
    }
}