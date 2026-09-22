#include<stdio.h>
void main()
{
    int a[5],l=0,sl=0,i,ele;
    ele=sizeof(a)/sizeof(a[0]);

    printf("enter the elements");
    for(int i =0;i<ele;i++)
    scanf("%d",&a[i]);
    
    printf("\nthe elements are:\n");
    for(int i =0;i<ele;i++)
    printf("%d ",a[i]);

    for(int i=0;i<ele;i++)
    if(a[i]>l)
    l=a[i];

for(i=0;i<ele;i++)
{
    if(a[i]>l)
    {
        sl=l;
        l=a[i];
    }
    else if((a[i]>sl)&&(a[i]!=l))
    sl=a[i];
}
printf("\nlargest is %d and second largest is %d\n",l,sl);
}