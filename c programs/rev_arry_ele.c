#include<stdio.h>
void main()
{
    int a[5],ele,temp;
    ele=sizeof(a)/sizeof(a[0]);
    printf("enter the elements");
    for(int i =0;i<ele;i++)
    scanf("%d",&a[i]);
    printf("the elements are:\n");
    for(int i =0;i<ele;i++)
    printf("%d",a[i]);
    for(int i=0,j=ele-1;i<ele/2;i++,j--)
    {
        temp= a[j];
        a[j]=a[i];
        a[i]=temp;
    }
        printf("\nthe elements after swap are:\n");
    for(int i =0;i<ele;i++)
    printf("%d",a[i]);
}