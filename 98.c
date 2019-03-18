#include <stdio.h>
int main()
{
   int i,j,k,l,m,n,b[10000];
   char a[100000];
   printf("Input :\n");
   
   scanf("%s",a);
   scanf("%d",&k);
   for(i=48;i<=48+k;i++)
  {
      b[j]=i;
      j++;
  }
  
   printf("Output :\n");
   for(i=0;a[i]!='\0';i++)
   {
       m=0;
       for(j=0;j<=k;j++)
       {
           if(a[i]==b[j])
           {
               m=1;
               break;
           }
       }
       if(m==0)
       {
           l=1;
           break;
       }
      }
   if(l==0)
   printf("yes");
    else
    printf("no");
    return 0;
}
