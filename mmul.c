  #include<stdio.h>
int main()
{
        int i,c1,r1,c2,r2,j,k;
        printf("enter the number of rows:");
        scanf("%d",&r1);
        printf("enter the number of coloumns:");
        scanf("%d",&c1);
	printf("enter the number of rows:");
        scanf("%d",&r2);
        printf("enter the number of coloumns:");
        scanf("%d",&c2);
	int a[r1][c1],b[r2][c2],c[r1][c2];
	for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
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
                for(j=0;j<c2;j++)
                {
                        c[i][j]=0;
                }
        }
	if(c1==r2)
	{
        	for(i=0;i<r1;i++)
        	{
                	for(j=0;j<c2;j++)
                	{
				for(k=0;k<c1;k++)
				{
                        		c[i][j]+=a[i][k]*b[k][j];
				}
                	}
        	}
		printf("multiplied array:\n");
		for(i=0;i<r1;i++)
		{
			printf("\n");
			for(j=0;j<c2;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf(" error");
	}
	return 0;
}
