#include <stdio.h>
int main()
{
  int i,j,k,l,m,n;
  char a[100],b[100];
  printf("Input :\n");
  scanf("%s\n",&a);
  scanf("%s",&b);
  printf("Output :\n");
   for(i=0;a[i]!='\0';i++);
   for(j=0;b[j]!='\0';j++);
   if(i>j)
  {
      m=j;
      n=j;
  }
   else 
   {
       m=i;
       n=i;
   }   
   for(i=0;i<m;i++)
   printf("%c",a[i]);
   for(i=0;i<m;i++)
   
   printf("%c",b[i]);
   
    return 0;
}
