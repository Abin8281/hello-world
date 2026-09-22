#include<stdio.h>
void main()
{
    int num,n,i,m,j;
    printf("enter the number:");
    scanf("%d",&num);
    printf("before swap \n");
    for(i=0;i<(sizeof(int)*8);i++)
    printf("%d",num>>i&1);
    printf("\n");

    for(i=0,j=(sizeof(int)*8)-1;i<(sizeof(int)*8)/2;i++,j--)
    {
        if(i<j){
        n=num&(1<<i);
        m=num&(1<<j);
        }
        if(m!=n)
        {
            num = num^1<<i;
            num = num^1<<j;
        }
    }
        printf("after swap \n");
    for(i=0;i<(sizeof(int)*8);i++)  //printing in big endian
    printf("%d",num>>i&1);
}