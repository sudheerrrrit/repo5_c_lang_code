#include<stdio.h>
#define hellow 10
void main()
{
    #ifdef hellow 
    #undef hellow 
    #else 
    #define hellow 200 
    #endif 
    printf("%d", hellow );
}