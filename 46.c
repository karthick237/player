#include<stdio.h>
#include<math.h>
#define pi 3.14

void main()
{
int n;
float res;
clrscr();
scanf("%d",&n);
res=sin(n*pi/180);
printf("%0.1f",res);
getch();
}
