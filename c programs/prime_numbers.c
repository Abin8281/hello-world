// to find prime number
//A prime number is a whole number greater than 1 that has only two factors: 1 and itself.
#include <stdio.h>

int main()
{
   int num,i;
   printf("enter the number:");
   scanf("%d",&num);
   for(i=2;i<num;i++)
   {
       if(num%i==0)
       break;
   }
if(i == num)
printf("%d is prime number\n",num);
else
printf("%d is not prime\n",num);
    return 0;
}
