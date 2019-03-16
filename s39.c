#include <stdio.h>
int main()
{
int i=1,a;
scanf("%d",&a);
while(i<a)
{
    i=i*2;
    if(i>a)
    {
      printf("no");
    }
}
if(i==a)
{
   printf("yes");
    
}
    return 0;
}
