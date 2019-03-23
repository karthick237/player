#include <stdio.h>
#include<conio.h>
int main()
{
 int a,b,i,f=1,g=1,j;
 scanf("%d %d",&a,&b);
for(i=1;i<=a;i++)
{
    f=f*i;
}
for(j=1;j<=b;j++)
{
    g=g*j;
}
printf("%d",f/g);


    return 0;
}
