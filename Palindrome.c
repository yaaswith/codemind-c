#include<stdio.h>
int main()
{
    int n,r,o,rev=0;
    scanf("%d",&n);
    o=n;
    while(n!=0)
{
    r=n%10;
    rev=rev*10+r;
    n=n/10;
}

   if(o==rev)
{
    printf("True");
}
    else
{
    printf("False");
}
}