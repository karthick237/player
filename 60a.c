#include <stdio.h>
int main()
{

char s[1000],c[1000],t;
int i,j,k,l;
scanf("%[^\n]",s);
scanf("\n");
scanf("%[^\n]",c);
for(k=0;c[k]!='\0';k++);
for(l=0;s[l]!='\0';l++);
for(i=0;i<l;i++)
{
t=s[i];
for(j=0;j<k;j++)
{
    if(t==c[j])
    {  t=='-';
        printf("yes");
        break;
    }
}
}
if(t=='-')
{
    printf("no");
}
    return 0;
}
