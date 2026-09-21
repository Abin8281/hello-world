#include<stdio.h>
void main()
{
    int num,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        sum = sum+i;
    }
    if(num == sum)
    printf("%d is perfect number\n",num);
}