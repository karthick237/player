#include<stdio.h>
#include<string.h>
int main() {
  char a[100],t[100];
  int i,l;
  scanf("%s",a);
  l=strlen(a);
  for(i=0;i<l;i++)
   {
       if(i%2==0)
       {
           t[i]=a[i];
           a[i]=a[i+1];
           a[i+1]=t[i];
       }
   }
   printf("%s",a);
   return 0;
}
