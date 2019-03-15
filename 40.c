#include <stdio.h>
#include<conio.h>
void main ()
{
  char a[10], b[10];
  int l = 0, c = 0,d=0,k, i, j;
  gets (a);
  gets (b);
  scanf("%d",&k);
  for (i = 0; a[i] != '\0'; i++)
    {
      l++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        c++;
    }
    if(l==c)
    {
        for(i=0;i<l;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i]==b[j])
                {
                    a[i]='$';
                }
            }
        }
    }
for(i=0;i<l;i++)
{
 if(a[i]!='$')
 d++;
}
if(k==d)
{
 printf("yes");
}
else
{
    printf("no");
}
getch();
}
