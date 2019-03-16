#include <stdio.h>
int main()
{
int i,a;
char s[10000];
gets(s);

for(i=0;s[i]!='\0';i++)
{
   if(s[i]=='(')
    a++;
    else if(s[i]==')')
    a--;  
}
 if(a==0)
 printf("yes");
 else
 printf("no"); 
 return 0;
}
