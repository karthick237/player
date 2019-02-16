#include <stdio.h>
#include<string.h>
int main() 
{
  int n,i,res,b[10],in=0;
  char a[10];
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
   {
    if(a[i]=='I')
    	b[i]=1;
    	else if(a[i]=='V')
    	b[i]=5;
    	else if(a[i]=='X')
    	b[i]=10;
    	else
    	printf("INVALID\n");
    }
    for(i=0;i<n;i=i+2)
    {
    	if(b[i]<b[i+1])
    	{
    	 res=b[i+1]-b[i];
        }
    	else 
        {
        res=b[i]+b[i+1];
        }
    in=res+in;
    }
    printf("%d",in);
    return 0;
}
