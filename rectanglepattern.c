#include<stdio.h>
void main()
{
    int i , j , n  ;
    printf(" enter the number of rows = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(2*i-1);j++)
        {
            printf("\t*");
        }
        printf("\n");
    }
}