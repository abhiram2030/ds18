#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],j,i,c1,r1,c2,r2;
	printf("enter the number of rows:");
	scanf("%d",&r1);
	printf("enter the number of coloumns:");
	scanf("%d",&c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	r2=r1;
	c2=c1;
	printf("enter the second matrix elements:\n");
	for(i=0;i<r2;i++)
        {
                for(j=0;j<c2;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("new matrix is:\n");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
	printf("\n");
	return 0;
}

