#include <stdio.h>
int main()
{
    int n,m,a[100],b[100],i,temp,j;
    scanf("%d%d",&n,&m);
    for(i=0;i<n+m;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<m+n;i++)
    {
        for(j=i+1;j<m+n;j++)
        {

            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                
            }
            
            
            
        }
    }
     for(i=0;i<m+n;i++)
    {
        printf("%d ",a[i]);
    
    }
    

    return 0;
}
