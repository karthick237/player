#include<stdio.h>
void main()
{
    int m,i,j,a[10],temp=0;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
    scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
      for(j=i+1;j<m;j++)
        {
          if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("%d",a[1]);
   getch();
}
