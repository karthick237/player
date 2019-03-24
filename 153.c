#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[1000];
    int i,k,j;
    scanf("%s",a);
    scanf("%d",&k);
    j=strlen(a);
    i=k-1;
    while(i<j)
    {
        printf("%c ",a[i]);
        i=i+k;
    }
    return 0;
}
