#include<stdio.h>
void main()
{
    char a[20];
    printf("enter the string :");
    scanf("%[^\n]",a);
    printf("characters are:");
    for(int i=0;a[i];i++)
    printf("%c ",a[i]);    
}