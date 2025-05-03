#include<stdio.h>
void main()
{
    int i , j , n , k , ml ;
    printf(" \n enter the no. of row = ");
    scanf("%d",&n);
    ml= n/2+1;
    for(i=1;i<=n;i++)
    {
        if(i<=ml)
        {
            for(j=1;j<=i;j++)
            {
                printf("*");
            }
        }
        else{
            for(k=1;k<=(n+1-i);k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}