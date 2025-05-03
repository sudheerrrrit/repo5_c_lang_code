#include<stdio.h>
#include<math.h>
void main(){
    int num , n;
    printf(" enter the number 2=  ");
    scanf(" %d",&num);
    if(num==2)
    {
        printf("%d\n",num);
        for(n=0 ;n<10 ;n++)
        {
        printf("%d\n",num=num+pow(2,n));
        }
    }
}