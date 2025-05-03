#include<stdio.h>
void main()
{
    int i , k , j , n  ;
    printf("\n how many lines = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(k=0;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}