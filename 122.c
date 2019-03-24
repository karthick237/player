#include<stdio.h>
 void main()
{

 char a[100];
int i;
printf("Enter the value");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
if(a[3]=='0' && a[4]=='1')
{
printf("January");
break;
}
else if(a[3]=='0' &&a[4]=='2')
{
printf("February");
break;
}
else if(a[3]=='0' && a[4]=='3')
{
printf("March");
break;
}
else if(a[3]=='0' && a[4]=='4')
{
printf("April");
break;
}
else if(a[3]=='0'&&a[4]=='5')
{
printf("May");
break;
}
else if(a[3]=='0' && a[4]=='6')
{
printf("June");
break;
}
else if(a[3]=='0'&&a[4]=='7')
{
printf("July");
break;
}
else if(a[3]=='0' && a[4]=='8')
{
printf("August");
break;
}
else if(a[3]=='0' && a[4]=='9')
{
printf("September");
break;
}
else if(a[3]=='1' && a[4]=='0')
{
printf("October");
break;
}
else if(a[3]=='1'&&a[4]=='1')
{
printf("November");
break;
}
else if(a[3]=='1'&&a[4]=='2')
{
printf ("December");
break;
}
}
}
