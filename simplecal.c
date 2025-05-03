#include<stdio.h>
void main(){
    int num1 , num2 , i ,sum;
    printf(" enter the value of num1 and num2");
    scanf("%d%d",&num1,&num2);
    printf(" enter your choice of opration\n");
    printf("\n1.addition\n 2.substraction\n3.multiplication\n4.division\n");
    scanf("%d",&i);
    switch(i)
    {
        case 1:

     printf(" the addition of %d and %d is %d", num1,num2,sum=num1+num2);
        break;
        case 2: printf(" the subtracion of %d and %d and %d",num1,num2,num1-num2);
        break;
        case 3: printf(" the multiplication of %d and %d is %d",num1,num2,num1*num2);
        break;
        case 4: printf(" the division of %d and %d is %d",num1, num2,num1/num2);
        break;
        default:
        printf(" wrong input enter by user");
    }

}