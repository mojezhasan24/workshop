#include<stdio.h>
int main()
{
	int n,sum,i;
	printf("enter number=");
	scanf("%d",&n);
	sum=0;
	for (int i = 1; i <= n; i++)
		{ sum+=i;
		}
	printf("%d",sum);		
	return 0;
		
}
