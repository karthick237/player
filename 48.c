#include <stdio.h>
int main()
{
   int i,j,k,l,m,n;
    char a[1000],b[1000];
    printf("Input     :\n");
    scanf("%d",&m);
    
     for(i=1;i<=m;i++)
     {
       if(m%i==0)
         {
          if(i%2==1)
         printf("%d ",i);
         }
     }
    return 0;
}
