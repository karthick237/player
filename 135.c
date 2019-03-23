#include <stdio.h>
#include<math.h>

int main()
{
 int N,i,a[10000],c,j,t;
 scanf("%d",&N);
 
 for(i=0;i<N;i++)
 {

scanf("%d",&a[i]);
}
  if(N%2!=0)   
 c=floor((N-1)/2); 
 else

  c=floor((N)/2); 
  for(i=0;i<c;i++)
 {
     
   for(j=i+1;j<c;j++)
   {
       
   if(a[i]>a[j])
   {
       
       
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       } }
     }
   for(i=c;i<N;i++)
 {
     
   for(j=i+1;j<N;j++)
   {
       
   if(a[i]<a[j])
   {
       
       
       t=a[i];
       a[i]=a[j];
       a[j]=t;
       } }
     }
 
 for(i=0;i<N;i++)
 {

printf("%d ",a[i]);
}
 
 
    return 0;
}
