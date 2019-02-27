#include <stdio.h>
int main()
{
    int L,R,i,n,b=0;
    scanf("%d %d",&L,&R);
    n=L*R;
    for(i=1;i<=n;i++)
    {
    if((L%i==0)&&(R%i==0))
    {
        if(i>b)
        {
            b=i;
        }
     
    }
}printf("%d",b);
  return 0;
}
