#include<stdio.h>
#include<conio.h>
int main()
{
   int i,j,n,c=0,d,e=612;
   char str[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {   d=0;
        scanf("%s",&str[1000]);
        for(j=0;str[j]!='\0';j++)
        {
         d=d+str[j];
        }
        if(d==e)
        {
         c++;
        }
    }
    printf("%d",c);

    return 0;
}
