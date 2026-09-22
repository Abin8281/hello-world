//print prime from araay elements
#include<stdio.h>
void main()
{
    int a[5],i,j,ele;
    ele=sizeof(a)/sizeof(a[0]);

    printf("enter the elements:");
    for(i=0;i<ele;i++) 
    scanf("%d",&a[i]);

    printf("the elements are:");
    for(i=0;i<ele;i++) 
    printf("%d ",a[i]);

    for(i=0;i<ele;i++)
    {
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j == 0)
            break;
        }
        if(a[i] == j)
        printf("\n%d is prime number",a[i]);
    }
}