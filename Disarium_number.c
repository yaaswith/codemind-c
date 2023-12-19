#include<stdio.h>
#include<math.h>
int main(){
    int n,t,d=0,s=0,pd;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        t=t/10;
        d++;
    }
    t=n;
    while(t!=0)
    {
        pd=t%10;  
        s=s+pow(pd,d);
        t=t/10;
        d--;
    }
    if(s==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
}
}