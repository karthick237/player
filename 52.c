#include <stdio.h>
#include<conio.h>
void main()
{
 int a[100],k,pos,temp=0,min,i,n;
 scanf("%d %d",&n,&k);
  for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     }
     k=(n+1)-k;
     while(temp<=k)
     {
         min=a[0];
         for(i=0;i<n;i++)
         {
             if(a[i]>min)
             {
               min=a[i];
               pos=i;
             }
         }
         if(temp==k)
         {
           printf("%d",min);
         }
         else
         {
           a[pos]=0;
         }
         temp++;
     }

    getch();
}
