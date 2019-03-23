#include<stdio.h>
int main()
{
	int a[100],b,c,d,i,j;
	scanf("%d\n",&b);
	for(i=0;i<b;i++)
	scanf("%d",&a[i]);
	for(i=0;i<b;i++)
	{
		if(a[i]%a[i-1]==0)
		{
			printf("%d ",a[i]);
		}
	}
}
