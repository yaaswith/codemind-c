#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    do
    {
        n/=10;
        ++c;
    }
   while(n!=0);
   printf("%d",c);
}
 