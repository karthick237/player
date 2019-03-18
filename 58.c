#include<stdio.h>
#include<string.h>
int main()
{
    
  char a[100],b[50],c[10];
  int i,k=0,n=0,l,j=0;
    gets(a);
    scanf("%s",b);
    l=strlen(b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=' ')
        {
            c[k]=a[i];
            k++;
        }
        if(c[k]==b[k])
            {
                    n++;
            }

        if(a[i]==' ')
        {
            for(i=0;i<k;i++)
            {
                c[k]='\0';
            }
            k=0;
        }
            if(n==l)
            {
                j++;
            }
 
 }
 
 printf("%d",j); 

return 0;
}
