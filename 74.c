#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,c=1,b;
    scanf("%d%d",&a,&b);
    for(i=0;i<b;i++)
    {
    c=c*a;
    }
    printf("%d",c);
    return 0;
}
