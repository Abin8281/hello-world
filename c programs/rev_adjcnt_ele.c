#include<stdio.h>
void main()
{
    int a[5],ele,temp=0;
    ele= sizeof(a)/sizeof(a[0]);
        printf("enter the elements");
    for(int i =0;i<ele;i++)
    scanf("%d",&a[i]);
    printf("the elements are:\n");
    for(int i =0;i<ele;i++)
    printf("%d",a[i]);
    for(int i =0;i<ele-2;i=i+2)
{
    temp = a[i];
    a[i]=a[i+1];
    a[i+1]=temp;
}
    printf("the elements after swap are:\n");
    for(int i =0;i<ele;i++)
    printf("%d",a[i]);
}