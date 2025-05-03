#include<stdio.h>
void main(){
    int m1 , m2 , m3 ,m4 , m5 ;
    float per ;
    printf(" enter the marks");
    scanf(" %d\n%d\n%d\n%d\%d",&m1,&m2,&m3,&m4,&m5);
    per = ( m1+m2+m3+m4+m5)*0.2;
    printf(" the percentage is %f",per);
}