#include<stdio.h>
int main()
{
  int n,k,a[100],i,b[10],max;
  scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
    scanf("%d",&b[i]);
    }
    while(k>0)
    {
        a[n]=b[k-1];
        n++;
        max=a[0];
        for(i=1;i<n;i++)
        {
        if(max<a[i])
            {
             max=a[i];
            }
        }
         printf("%d ",max);
        k--;
    }
    printf("%d ",max);
    return 0;
}
