#include <stdio.h>
int main()
{
  int n,r,sum=0,i;
  scanf("%d",&n);
 while(n)
 {   
    r=n%10;
    n=n/10;
    r=r*r;
    sum=sum+r;
 }   
printf("%d",sum);
    return 0;
}
