#include<stdio.h>
int main()
{
	int i,n,r,num,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		sum = sum+r*r*r;
		n=n/10;
	}
	if(sum == num)
	{
		printf("%d is an armstrong number",num);
	}
	else
	{
			printf("%d is not an armstrong number",num);
	}
	return 0;
}