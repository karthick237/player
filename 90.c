#include <stdio.h>
int main()
{
  int n,k,i,sum,f=1,g=1,e,d,l=1;
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
     for(i=1;i<=k;i++)
    {
      l=l*i;
    }
        e=f/(g*l);
        printf("%d",e);
    
    
        
    return 0;
}
