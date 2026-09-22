//to check palindrome in numbers
#include<stdio.h>
void main()
{
    int num,num2,sum=0;
    printf("enter the number:");
    scanf("%d",&num);
    num2=num;
    while(num)
    {
        sum = (sum*10) +(num%10);
        num=num/10;
    }
    if (num2==sum)
    printf("%d is palindrome\n",num2);
}