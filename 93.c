#include <stdio.h>
int main()
{
	int n,a[50],i,t;
  printf("Enter the value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	if(n%2>0)
	{
	for(i=0;i<n-1;i++)
	{
	    t=a[i];
	    a[i]=a[i+1];
	    a[i+1]=t;
	    i++;
	}
	}
        for(i=0;i<n;i++)
	{	
	    printf("%d",a[i]);
	}
	return 0;
}
