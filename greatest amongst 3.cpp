#include<stdio.h>
int main()
{
	int a,b,c;
	printf("input three numbers=");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c){
			printf("first is greatest");
		}
		else{
			printf("print third is greatest");
		}
	}
	else{
		if(b>c){
			printf("second is greatest");
		}
		else{
			printf("third is greatest");
		}
	}

}
	

