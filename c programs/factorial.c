//factorial of a number
#include<stdio.h>
void main()
{
    int num,fact=1;
    printf("enter the number:");
    scanf("%d",&num);
for (int i=1;i<=num;i++)
{
    fact = fact*i;
}
printf("factorial of %d is:%d\n",num,fact);
}