#include <stdio.h>
#include<string.h>

int main()
{
    char a[100000];
    int i,n;
    for(i=0;a[i]!='0';i++)
    {
        scanf("%c",&a[i]);
    }
    n=strlen(a);
    for(i=0;i<n;i++)
    {
    printf("%s",a[i]);
    }
    return 0;
}
