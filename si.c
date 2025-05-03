#include<stdio.h>
void main(){
    int p ;
    float si , n , r ;
    printf(" enter the value of principal amount");
    scanf("%d",&p);
    printf(" enter the value of rate ");
    scanf("%f",&r);
    printf(" enter the value of time");
    scanf("%f",&n);
    si=p*n*r/100;
    printf(" the principal amount simple intrest is %d",si);
}