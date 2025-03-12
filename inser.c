#include<stdio.h>
int n;
void insertion(int a[],int n)
{
	int pos,i,num,p;
	printf("enter the position to insert:");
	scanf("%d",&pos);
	p=pos-1;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=n;i>p;i--)
	{
		a[i]=a[i-1];
	}
	a[i]=num;
	printf("new array is:\n");
	for(i=0;i<=n;i++)
	{
			printf("%d\n",a[i]);
	}
}

void deletion(int a[],int n)
{
        int pos,p,i;
        printf("enter the position number:");
        scanf("%d",&pos);
        p=pos-1;
        for(i=p;i<n;i++)
        {
                a[i]=a[i+1];
        }
	printf("new array is\n:");
        for(i=0;i<n-1;i++)
        {
                printf("%d\n",a[i]);
        }
}

void traversal(int a[],int n)
{
	int i;
	printf("new array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}

void merging(int a[],int n1)
{
	int b[100],n2,i,c[100];
	printf("enter the number of elements of second array:");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		c[i]=a[i];
	}
	for(i=n1;i<n1+n2;i++)
	{
		c[i]=b[i-n1];
	}
	printf("merged array is:\n");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d\n",c[i]);
	}
}
int main()
{
	int a[100],i,op;
	printf("enter the number of array elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	do
	{
		printf("enter the operation :\n1-insertion\n2-deletion\n3-traversal\n4-merging\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1: insertion(a,n);
				break;
			case 2: deletion(a,n);
				break;
			case 3: traversal(a,n);
				break;
			case 4: merging(a,n);
				break;
		}
	}while(op<5);
	return 0;
}
