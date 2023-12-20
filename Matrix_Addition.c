#include<stdio.h>
int main()
{
    int r1,c1;
    scanf("%d%d",&r1,&c1);
    int i,j,arr1[r1][c1];
    for(i=0;i<r1;i++)
    {
    	for(j=0;j<c1;j++)
    	{
    	scanf("%d",&arr1[i][j]);
        } 
	}
	int r2,c2,k,l;
	scanf("%d%d",&r2,&c2);
	int arr2[r2][c2];
	for(k=0;k<r2;k++)
    {
    	for(l=0;l<c2;l++)
    	{
    	scanf("%d",&arr2[k][l]);
    	
        } 
    }
        for(k=0;k<r2;k++)
    {
    	for(l=0;l<c2;l++)
    	{
    	printf("%d ",arr1[k][l]+arr2[k][l]);
        } 
     printf("
");

	}
}