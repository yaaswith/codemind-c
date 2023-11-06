#include<stdio.h>
int main()
{
    int n,o,i,sum=0;
    scanf("%d",&n);
    while(n!=0)
{
    o=n%10;
    sum=sum+o;
    n=n/10;
}
printf("%d",sum);
}