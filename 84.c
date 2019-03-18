#include <stdio.h>
int main()
{
    int a[100],i,j,n,l,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            l=a[i]|a[j];
            if(l>max)
            {
               max=l; 
            }
        }
    }
 printf("%d",max);
    return 0;
}
