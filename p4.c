#include<stdio.h>
int main()
{
	int n;
	printf("enter n:");
	scanf("%d",%n);
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i;k++)
		printf("  ");
		for(int j=5;j>i;j--)
		printf("* ");
		printf("\n");
	}
	return 0;
}