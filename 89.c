#include <stdio.h>
int main()
{
   int n,k,i,sum,f=1,g=1,e,d;
   scanf("%d%d",&n,&k);
   d=n-k;
   for(i=1;i<=n;i++)
    {
      f=f*i;
    }
    for(i=1;i<=d;i++)
    {
        g=g*i;
    }
        e=f/g;
        printf("%d",e);
    
    
        
    return 0;
}
