int main()
{
  int p,a,i,j,perimeter,area,d=0;
	scanf("%d %d",&p,&a);
	for(i=1;i<=(p/2);i++)
	{
	  for(j=1;j<=(p/2);j++)
	{
	  perimeter=2*(i+j);
	    area=i*j;
	    if(perimeter==p && area==a)
	    {
	        printf("yes");
	        d=1;
	        break;
	    }
	}
	if(d==1)
	    break;
	}
	if(d==0)
	{
	    printf("no");
	}

}
