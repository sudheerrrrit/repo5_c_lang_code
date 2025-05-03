#include<stdio.h>
//#include<conio.h>
void main()
{
    int i , j , n ;
    printf("\n enter the no. of lines = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}