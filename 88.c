#include <stdio.h>
int main()
{
    int n,k,i,sum;
    scanf("%d%d",&n,&k);
    i=n>>k;
    printf("%ld",i);
    return 0;
}
