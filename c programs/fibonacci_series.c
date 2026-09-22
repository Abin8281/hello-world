#include<stdio.h>
void main()
{
    int n1=0,n2=1,n3,nu;
    printf("enter the number of fibonacci needed:");
    scanf("%d",&nu);
    printf("%d %d ",n1,n2);
    for(int i =0;i<nu-2;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
    }
    printf("\n");
}