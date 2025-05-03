#include<stdio.h>
#include<math.h>
void main(){
float angle , s ,c ,t ;
printf(" enter the angle ");
scanf("%f",&angle);
angle=angle*3.14/180;/*CONVERT ANGLE IN RADION */
s = sin(angle);
c = cos(angle);
t = tan(angle);
printf(" sin=%f\n cos=%f\n tan=%f",s,c, t);
}