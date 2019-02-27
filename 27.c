#include <stdio.h>
int main()
{
    int L,R;
    scanf("%d %d",&L,&R);
    if((L%R==0)||(R%L==0))
    {
      if(L>=R)
      printf("%d",L);
     else if(R>=L)
      printf("%d",R);
    }
 else
{
  printf("%d",L*R);
}
  return 0;
}
