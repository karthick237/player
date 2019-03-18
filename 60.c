#include <stdio.h>
int main()
{
char s[10000],t[10000];
 int i,c=0,l,l2;

 gets(s);
 
 gets(t);
 
 l=strlen(t);
 
 l2=strlen(s);
 
 if(l==l2)
 {
 
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]==t[i])
        c++;
 }
 
 
 if(c!=0)  
   printf("yes");
  else
   printf("no");
 }
 else
   printf("no");
    return 0;
}
