#include<stdio.h>
#include<conio.h>
void main()
{
  int i,rem,n,sum;
  clrscr();
  scanf("%d",&n);
  rem=n%10;
        n=n/10;
        while(n>0)
        {
        i=n%10;
        n=n/10;
        }
        sum=rem+i;
        
        printf("%d",sum);
        
    getch();
}
