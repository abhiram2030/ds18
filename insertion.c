#include<stdio.h>
int main()
{
	int a[100],n,i,op;
	void deletion(int a[],int);
	void  insertion(int a[],int);
	void traversal(int a[],int);
	void merging(int a[],int);
	printf("enter the number of array elements:");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the operation :");
	scanf("%d",&op);
	switch(op)
	{
		case 1: insertion(&a,n);
			break;
		case 2: deletion(&a,n);
			break;
		case 3: traversal(&a,n);
			break;
		case 4: merging(&a,n);
			break;
		case 5: merge(&a,n);
			break;
	}
	return 0;
}
void insertion(int *ptr,int n)
{
	int pos,i,num,p;
	printf("enter the position to insert:");
	scanf("%d",&pos);
	p=pos-1;
	printf("enter the number:");
	scanf("%d",&num);
	for(i=n;i>p;i--)
	{
		*(ptr+i)=*(ptr+i-1);
	}
	*(ptr+i)=num;
	printf("new array is:\n");
	for(i=0;i<=n;i++)
	{
			printf("%d\n",*(ptr+i));
	}
}

void deletion(int *ptr,int n)
{
        int pos,p,i;
        printf("enter the position number:");
        scanf("%d",&pos);
        p=pos-1;
        for(i=p;i<n;i++)
        {
                *(ptr+i)=*(ptr+i+1);
        }
	printf("new array is\n:");
        for(i=0;i<n-1;i++)
        {
                printf("%d\n",*(ptr+i));
        }
}

void traversal(int *ptr,int n)
{
	int i;
	printf("new array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(ptr+i));
	}
}

void merging(int *ptr,int n1)
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
		c[i]=*ptr+i;
	}
	for(i=n1;i<n1+n2;i++)
	{
		c[i]=b[i-n1];
	}
	printf("merged arrayb is:\n");
	for(i=0;i<n1+n2;i++)
	{
		printf("%d\n",c[i]);
	}
}
void merge(int *a,int n1)
{
	int b[100],n2,p,q,r,i,c[100];
        printf("enter the number of elements of second array:");
        scanf("%d",&n2);
        for(i=0;i<n2;i++)
        {
                scanf("%d",&b[i]);
        }
	p=0;
	q=0;
	r=0;
	while(p<n1 && q<n2)
	{
		if(a[p]<b[q])
		{
			c[r]=a[p];
		}
		else
		{
			c[r]=b[q];
		}
		p++;
		q++;
		r++;
	}
	while(p<n1)
	{
		c[r]=a[p];
		p++;
		r++;
	}
	while(q<n2)
	{
		c[r]=b[q];
		q++;
		r++;
	}
	for(i=0;i<n1+n2;i++)
	{
		printf("%d\n",c[i]);
	}
}


