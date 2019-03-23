#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100],i,count=0,j;
    clrscr();
    scanf("%s",a);
    for(j=0;a[j]!='\0';j++);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='b')
        {
            count++;
        }
    }
    if(count==j)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
    
}
