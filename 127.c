#include <stdio.h>
#include<string.h>

int main()
{
   char a[100000],b[10000];
    int i,j=0,c=0,l,x,r;
    scanf("%[^\n]",a);
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
    l++;
    }
for(i=0;a[i]!='\0';i++)
{
    if(a[i]!=' ')
    {
        if(a[i]==b[j])
        {
            c++;
            x=i;
            j++;
        }
    }
    else
    {
        if(c==l)
        {
            for(r=x;r>=x-l;r--)
            {
                a[r]='*';
            }
        }
        else
        {
            c=0;
            j=0;
        }
    }
}
if(c==l)
        {
            for(r=x;r>=x-l;r--)
            {
                a[r]='*';
            }
        }
for(i=0;a[i]!='\0';i++)
{
    if(a[i]!='*')
    {
        printf("%c",a[i]);
    }
}
    return 0;
    
}
