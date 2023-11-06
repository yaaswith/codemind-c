#include<stdio.h>
int main()
{
    int n,o,rev=0;
    scanf("%d",&n);
    while(n!=0)
{
    o=n%10;
    rev=rev*10+o;
    n=n/10;
}
printf("%d",rev);
}