#include<stdio.h>
int main()
{
	int a[10],i,n,num,count=0;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter an element to serach:");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(num == a[i])
		{
		count=count+1;
		}
	}
		if(count == 1)
		{
			printf("%d is present in the array",num);
		}
		else
		{
			printf("element is not present in the array");
		}
	return 0;
}