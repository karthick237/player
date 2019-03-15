#include <stdio.h>

int main()
{
 int n=0,i,c;
 int a,b;
 scanf("%d%d",&a,&b);
 for(i=a;i<=b;i++)
 {
     c=sqrt(i);
     if(c*c==i)
     {
         n++;
     }
 }
printf("%d",n);
 return 0;
}
