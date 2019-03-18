#include<stdio.h>
int main()
{
  int n,i,j,a[100],k;
  scanf("%d",&n);
    scanf("%d",&k);
    if(1<=n<=100000)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<k;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==a[j])
                {
                    printf("%d ",i);
                }
            }
        }
    
    }
    return 0;
}
