#include<stdio.h>
void main()
{
    char a[10],b[10];
    int i,j,c=0;
    scanf("%s %s",a,b);
    for(i=0,j=0;a[i]!='\0',b[i]!='\0';i++,j++)
    {
        if(a[i]==b[i])
        {
            c=1;
        }
        else
        {
            printf("no");
            c=0;
            break;
        }
    }
    if(c==1)
    {
    printf("yes...both strings are the same");
    }
}
