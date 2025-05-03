#include<stdio.h>
void main()
{
    int i , j , n ;
    printf("\n how many lines = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(i=0;i<n;i++)
        {

            for(j=0;j<=i;j++)
            {
                printf("*\t");
            }
            printf("\n");
        }
        for(j=1;j<(n-i);j++)
        {
            printf("*\t");

        }
        printf("\n");
    }
}