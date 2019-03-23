#include<stdio.h>
#include<string.h>

int main()
{
char a[100][100],b[100],c[100];
int d,e,f,g,h=0,i,j,k;
	scanf("%d%d\n",&d,&k);
	for(i=0;i<d;i++)
	scanf("%s",a[i]);
	for(i=0;i<d;i++)
	{
		strcpy(b,a[i]);
		strcpy(c,a[i+1]);
		e=strlen(b);
		f=strlen(c);
		if(e==f)
		{
			g=0;
			for(j=0;j<f;j++)
			{
				if(b[j]==c[j])
				g++;
			}
		}
		if(e==g)
		h++;
	}
	h++;
	if(h==k)
	printf("yes");
	else
	printf("no");
}
