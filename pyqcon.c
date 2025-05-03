#include<stdio.h>
void main()
{
    int h ,  t ;
    float c;// h= hardness , c= carbon , t = tensile 
    printf(" \n enter the hardness = ");
    scanf(" %d",&h);
    printf(" \n enter the carbon content = ");
    scanf("%d",&c);
    printf(" \n enter the tensile = ");
    scanf("%d",&t);
    if(h>50&&c<0.7&&t<5600)
    {
        printf(" \n grade is 10");
    }
    else if (h>50&&c<0.7)
    {
        printf("\n grade is 9");
    }
    else if(c<0.7&&t<5600)
    {
        printf(" \n grade is 8");
    }
    else if (h>50&&t<5600)
    {
        printf(" \n grade is 7");
    }
    else if (h>50 ||c<0.7 ||t<5600)
    {
        printf(" \n grade is 6");
    }
    else
    {
        printf(" \n grade is 5");
    }

}