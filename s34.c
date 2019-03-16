#include<stdio.h>
void main()
{
 char a[100];
 int i,k;
 scanf("%[^\n]",a);
 for(i=0;a[i]!='\0';i++)
{
if(i==0)
{
printf("%c",a[i]);
}
else if(i%3==0)
{
printf("%c",a[i]);
}
}
}
