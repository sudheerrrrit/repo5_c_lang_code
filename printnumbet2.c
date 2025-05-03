//progrm to count even and odd between two number
#include<stdio.h>
void main(){
    int m , n ;
    printf(" enter the value of m and n");
    scanf("%d%d",&m,&n);
    if(m%2==0)
    {
        for(m ;m<=n;m=m+2)
        {
            printf("%d\n",m);
        }
    }
    else
    {
        for(m;m<=n;m=m+2)
        {
            printf("%d\n",m);
        }
    }
}