#include <stdio.h>
int main()
{
char a[100];
int i,n,j,l=0;
scanf("%[^\n]s",&a);
for(i=0;a[i]!='\0';i++)
{
   l=0;
   for(j=0;a[j]!='\0';j++)
    {
      if(a[i]==a[j])
        {
            l++;
        }
    }
    if(l==1)
    {
    printf("%c ",a[i]);
    }
    
}
return 0;
}
