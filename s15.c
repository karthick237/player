#include<stdio.h>
#include<string.h>
int main()
{
   char a[20],b[20];
   int l1,l2,i,j,f,u,v;
   scanf("%s",a);
   scanf("%s",b);
   l1=strlen(a);
   l2=strlen(b);
   if(l1==l2)
   {
      for(i=0;i<l1;i++)
        {
            for(j=0;j<l2;j++)
            {
                u=a[i]-a[j];
                v=b[i]-b[j];
                if(u==v)
                {
                f=0;
                }
                else
                {
                f=1;
                break;
                }
             }
        }
    }
    else
    {
        printf("no\n");
    }
    if(f==0)
    {
        printf("yes\n");
    }
    else
        printf("no\n");
    return 0;
}
