#include <stdio.h>
int main() 
{
   int a[1000],b[100],i,j,n,k=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        k=k+a[i];
        b[j]=k;
        j++;
    }
    for(i=j-1;i>=0;i--)
    {
        printf("%d ",b[i]);
    }
    return 0;
    
}
