#include<stdio.h>
int main()
{
	int a[100],n,i;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	deleion(&a,n);
	return 0;	
}
void deletion(int *ptr,int n)
{
	int pos,p,i;
	printf("enter the position number:");
	scanf("%d",&pos);
	p=pos-1;
	for(i=p;i<n;i++)
	{
		*(ptr+i)=*(ptr+i-1);
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d",*(ptr+i));
	}
}
