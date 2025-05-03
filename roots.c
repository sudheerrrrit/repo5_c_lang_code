#include<stdio.h>
#include<math.h>
void main (){
    float a , b , c ,d , r1 , r2 ;
    d = pow(b,2)-4*a*c;
    printf(" enter the value of a , b , c ");
    scanf(" %f%f%f",&a,&b,&c);
    if ( a == 0 && b == 0)
    printf(" no solution");
    if ( a == 0 && b != 0)
    {
    printf( " the root is %f",-c/b);
    }
    else
    {
        if( d == 0)
        {
            printf( " the roots are %f and %f ",-b/a,-b/a);
        }
        else 
        {
            r1=( -b+sqrt(d))/2*a;
            r2=( -b-sqrt(d))/2*a;
            printf( " the roots are %f and %f",r1, r2);
        }
    

    }

    
}