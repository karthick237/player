#include<stdio.h>
#include<conio.h>
void main()
{
char a[10];
int i,c=0;
clrscr();
scanf("%s",&a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]>='0'&&a[i]<='9')
{
c=1;
}

else
{
c=0;
}
 }
 if(c==1)
 {
 printf("yes");
 }
 else{
 printf("no);}
 getch();
 }
