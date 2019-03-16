#include <stdio.h>
int main()
{
int i,j,l=0,a[100][2],n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<2;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{ 
    for(j=0;j<2;j++)
    {
    
        if(a[i][j]<a[i][j+1])
        {
            l++;
            
        }
    }    
    
}
   printf("%d ",l);
    return 0;
}
