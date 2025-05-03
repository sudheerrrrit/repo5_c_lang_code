#include<stdio.h>
void main()
{
    int i , j , k ,n , ml ;
    printf(" \n enter the number of lines = ");
    scanf("%d",&n);
    ml = n/2 +1;
    for(i=1;i<=n;i++)
    {
        if(i<=ml)
        {
            for(k=1;k<i;k++)
            {
                printf(" ");
            }
            for(j=1;j<=(ml+1-i);j++)
            {
                printf("*");
            }
        }
        else
        {
            for(k=1;k<=(n-i);k++)
            {
                printf(" ");
            }
            for(j=1;j<=(i+1-ml);j++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}