#include<stdio.h>
void main()
{
    int i , j , n , a[20] , temp ;
    printf("\n how many numbers you entered : ");
    scanf("%d",&n);
    printf("\n enter the number : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("\n after the sorting the elements are in asending order are = ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}