#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    float a , b , c ;
    float m1 , m2 , m3 ,d;
    printf(" \n enter the value of a , b and c ");
    scanf(" %f%f%f",&a,&b,&c);
    d= b*b-4*a*c;
    if(d>0)
    {
        printf("\n two real roots are exist \n");
        m1=(-b+sqrt(d))/(2*a);
        m2=(-b-sqrt(d))/(2*a);
        printf("\n the roots are m1 = %f  m2 = %f ",m1,m2);
    }
    else if (d==0)
    {
        printf("\n only one roots is exist \n");
        m3 = -b/(2*a);
        printf(" the root is m3 = %f",m3);

    }
    else
    {
        printf(" the roots are imaginary ");
    }


}
