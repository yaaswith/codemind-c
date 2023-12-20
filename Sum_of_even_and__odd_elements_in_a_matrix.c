#include<stdio.h>
int main()
{
    int r,c,sum=0,add=0;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]%2==0)
            {
                sum=sum+a[i][j];
            }
            if(a[i][j]%2!=0)
            {
                add=add+a[i][j];
            }
        }
    }
    printf("%d %d",sum,add);
}