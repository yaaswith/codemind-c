#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a=0,b=1,c= a+b;
    printf("%d %d ",a,b);
    for(i=1;i<=n-2;i++)
    {
          printf("%d ",c);
      a=b;
      b=c;
    c=a+b;
}
}