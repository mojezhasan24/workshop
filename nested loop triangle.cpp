#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter rows");
	scanf("%d",&n);
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%d",n-i+j);
		}
		printf("\n");
	}
	
}
