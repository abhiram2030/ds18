#include<stdio.h>
int linearsearch(int *a,int n,int key)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			return 1;
		}
	}
	return -1;
}
int main()
{
	int a[100],n,i,key;
	printf("enter the number of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the  element for search:");
	scanf("%d",&key);
	i=linearsearch(&a[0],n,key);
	if(i==1)
	{
		printf("number is found\n");
	}
	else
	{
		printf("number is not found\n");
	}
	return 0;
}
