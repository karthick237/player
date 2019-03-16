#include <stdio.h>
#include<math.h>
int main()
{
    int i,j,k,l,m,n,q,f[10000],p,a,b[10000];
    char e[100],c[1000];
    printf("Input :\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&b[i]);
   
    printf("Output :\n");
  
  for(i=0;i<n;i++)
  {
      if(b[i]%2==0)
      {
          p=i;
          m++;
      }
      if(b[i]%2==1)
      {
          q=i;
          l++;
      }
  }
  if(m==1)
  printf("%d",b[p]);
  if(l==1)
  printf("%d",b[q]);
    return 0;
}
