#include<stdio.h>
void main()
{
    int i , j , n ;
    printf(" enter the value of lines = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("\t%c",j+96);
        }
        printf("\n");
    }
}