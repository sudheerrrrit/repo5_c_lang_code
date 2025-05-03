#include<stdio.h>
void main()
{
    int i , j , n  ;
    printf("\n enter the number of lines = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    
        for(j=1;j<=i;j++)
        {
            printf("%d",i);
        }
    
        printf("\n");
    }
}
