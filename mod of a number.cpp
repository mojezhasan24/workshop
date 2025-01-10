#include<stdio.h>
int main()
{
	int x;
	printf("entr number=");
	scanf("%d",&x);
	if (x<0){
		x=-x;
	}
	printf("%d",x);
	return 0;
}
