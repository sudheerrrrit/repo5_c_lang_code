#include<stdio.h>
void main()
{
    int i , j , n ,nst=1 , k  ;
    printf(" enter the number of rows = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=nst;j++)
        {
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
}