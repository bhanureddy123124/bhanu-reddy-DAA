#include<stdio.h>
int main()
{
	int i,j,n,c=1,k;
	printf("enter the number of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i;j++)
		{
		printf(" ");	
		}
	    for(k=0;k<=i;k++)
		{
			if(k==0||i==0)
			{
			printf("%d",1);	
			}	
			else
			{
				c=c*(i-k+1)/k;
				printf("%3d",c);
			}
		}	
		printf("\n");
	}
	return 0;
}