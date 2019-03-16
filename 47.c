#include <stdio.h>
void main()
{
   int a,b,c,s=0;
	  scanf("%d %d %d",&a,&b,&c);
    s=a+b+c;
    if(s==180)
    {
     printf("yes..it forms traingle");
    }
    else
    {
     printf("they cant be the interior angles of the triangle");
    }
}
