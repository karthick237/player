#include <stdio.h>
int main()
{
  int n,k,c=0,a[50],i,j;
    printf("Enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}
