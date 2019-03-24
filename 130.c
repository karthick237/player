#include <stdio.h>
#include<conio.h>

void main()
{
  int a[100],i,n,j,sum=0,k=0,b[100];
  printf("Enter the value");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum%2==0)
        {
            b[k]=sum;
            k++;
        }
        else
        {
            b[k]=a[i];
            k++;
        }
    
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",b[j]);
    }
getch();
}
