#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],n;
    int l=0,i,c=0;
    gets(a);
    scanf("%c",&n);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]==n)
        {
            c++;     
        }
   }
    printf("%d",c);
    return 0;
}
