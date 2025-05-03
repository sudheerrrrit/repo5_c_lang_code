#include<stdio.h>
void main()
{
    int i , j , n ;
    printf(" enter the value of n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",j);
        }
        printf("\n");
    }
        for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%d",j);
        }
        printf("\n");
    }
}