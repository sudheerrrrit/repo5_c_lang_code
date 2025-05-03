#include<stdio.h>
void main()
{
    int i , j , n ;
    printf("\n enter the range of table : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("\t%d",i*j);
        }
        printf("\n");
    }

}