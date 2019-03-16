#include <stdio.h>
int main()
{
int i,a,j,n=0;
scanf("%d",&a);
for(i=0;i<=a;i++)
{
    for(j=0;j<=a;j++)
    {
        if((1*i)+(2*j)==a)
        {
           n++; 
        }
        
    }
}
    printf("%d",n);
    return 0;
}
