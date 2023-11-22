#include<stdio.h>
int main()
{
int i,n,m,k,t;

scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
     scanf("%d%d%d",&n,&m,&k);
    if(n<=m-k)
    {
      printf("YES
");
     }
     else
     {
         printf("NO
");
     }
    }
}