#include<stdio.h>
void main()
{
    int a[5],i,j,k,ele,b[5],c[5];
    ele=sizeof(a)/sizeof(a[0]);

    printf("enter the elements:");
    for(i=0;i<ele;i++) 
    scanf("%d",&a[i]);

    printf("the elements are:");
    for(i=0;i<ele;i++) 
    printf("%d ",a[i]);

    for(i=0,j=0,k=0;i<ele;i++)
    {
        if(a[i]%2==0)
        {
            b[j]=a[i];
            j++;
        }
        else
        {
            c[k]=a[i];
            k++;
        }
    }
    i=0;
    printf("\nthe odd elements are:");
    for(i=0;i<k;i++) 
    printf("%d ",c[i]);
    i=0;
    printf("\nthe even elements are:");
    for(i=0;i<j;i++) 
    printf("%d ",b[i]);
}
