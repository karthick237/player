#include<stdio.h>
void main()
{
    int n,i,f=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
         f=1;
        }
    }
    if(f==1)
    printf("yes");
    else
    printf("no");
    getch();
}
