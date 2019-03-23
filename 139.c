#include <stdio.h>

int main() 
{
	int n,i,j,count=0,a[1000],rem,count1=0;
	scanf("%d",&n);
	while(n)
	{
	    rem=n%2;
		a[i]=rem;
		i++;
		n=n/2;
	}
	j=i;
	for(i=0;i<j;i++)
	{
		if(a[i]==1)
		{
			count1=count1+1;
		}
	}
	printf("%d",count1);

	return 0;
}
