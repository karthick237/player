int main()
{
char a[100];
int b,i,j,c;
	scanf("%s",a);
	scanf("%d",&c);
	b=strlen(a);
	for(i=c;i<b;i++)
	printf("%c",a[i]);
	for(i=0;i<c;i++)
	printf("%c",a[i]);
}
