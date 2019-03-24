#include<stdio.h>
#include<conio.h>
int main()
{
   int n1,n2,rem,i,j=0,a[100],c=0,n;
    scanf("%d %d",&n1,&n2);
    n=n1*n2;
    while(n)
    {
       rem=n%2;
        a[j]=rem;
        j++;
        n=n/2;
    }
    for(i=0;i<j;i++)
    {
        if(a[i]==1)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
