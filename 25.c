#include <stdio.h>

int main()
{
    char a[100],c;
    int i,n,j,count=0,max=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        count==0;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;
                if(max<count)
                {
                   max=count;
                   c=a[i];
                }
            }
        }
        
    }
    printf("%c",c);

    return 0;
}
