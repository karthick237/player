#include<stdio.h>
int main()
{
    char a[100],b[100];
    int i,j,l=0,c=0,m=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        l++;
    }
    for(j=0;b[j]!='\0';j++)
    {
        c++;
   }
   if(l==c)
   {
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
              if(a[i]==b[j]||a[i]-32==b[j]||a[i]==b[j]-32)
              m++;
            }
        }
    }
    if(m==c)
    printf("yes");
    else
    printf("no");
}
