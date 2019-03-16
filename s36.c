#include <stdio.h>
int main()
{
char a[100],n;
int i,j,l=0;
scanf("%[^\n]s",&a);
scanf("\n");
scanf("%c",&n);

    for(j=0;a[j]!='\0';j++)
    {
        if(a[j]==n)
        {
          l++;
        }
    }
    printf("%d ",l);
   return 0;
}
