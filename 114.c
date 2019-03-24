#include<stdio.h>
void main()
{
    long int a,b,c,ans,s=1,i;
    printf("Enter the value");
    scanf("%ld %ld %ld",&a,&b,&c);
    for(i=1;i<=b;i++)
    {
        s=s*a;
    }
    ans=s%c;
    printf("%ld",ans);
    getch();
}
