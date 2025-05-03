#include<stdio.h>
void main()
{
    int i , j , n ;
    char t;
    printf("\n enter the number of lines = ");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
         t = 'A';
        for(j=1;j<=i;j++)
        {
            printf("%c\t",t);
            t++;
        }
        printf("\n");
    }
}