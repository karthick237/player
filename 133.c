#include <stdio.h>

int main()
{
    int i,j,k,l,m,n,b[10000],a[1000];
    
    printf("Input :\n");
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d %d",&a[i],&b[i]);
    printf("output :\n");
    
     for(i=0;i<n;i++)
    {
        
       if(a[i]>b[i])
       l=1;break;
       if(b[n-1]!=m)
       l=1;
        
    }
    if(l==0)
    printf("yes");
    else
    printf("no");
    return 0;
}
