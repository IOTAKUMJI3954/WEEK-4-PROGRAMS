#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",%n);
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		printf("* ");
		for(int s=0;s<2*n-2*i-2;s++)
		printf("  ");
		for(int k=0;k<i+1;k++)
		printf("* ");
		printf("\n");
	}
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i;j++)
		printf("* ");
		for(int s=0;s<2*i;s++)
		printf("  ");
		for(int k=0;k<n-i;k++)
		printf("* ");
		printf("\n");
	}
	return 0;
}