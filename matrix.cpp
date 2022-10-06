#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],i,j,k,c,r;
	printf("enter the number of rows:");
	scanf("%d",&r);
	printf("enter the number of coloumns:");
	scanf("%d",&c);
	printf("enter the matrix1 elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the matrix2 elements:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("multiply of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			mul[i][j]=0;
			for(k=0;k<c;k++)
			{
				mul[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	return 0;
}
