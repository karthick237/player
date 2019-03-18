#include<stdio.h>
int main()
{
    int a[1000],N,X,i;
    scanf("%d%d",&N,&X);
    for(i=0;i<N;i++)
    {
      scanf("%d",&a[i]);
    }
    int j,f=0;
    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(a[i]+a[j]==X)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
