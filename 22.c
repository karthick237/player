#include <stdio.h>
int main()
{
    int n,k,i,j,a[100],b[100];
    scanf("%d  %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(k--)
    {
        for(i=0;i<n;i++)
        {
        b[i]=a[i]; 
        }
        for(i=0;i<n;i++)
        {
        a[i]=b[i-1];
        }
        a[0]=b[n-1];
}
    for(i=0;i<n;i++)
    {
 printf("%d",a[i]);}
 return 0;
}
