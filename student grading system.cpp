#include<stdio.h>
int main()
{
	float p;
	printf("enter percentage of student=");
	scanf("%f",&p);
	if(p>=90){
		printf("A grade");
	}
	else if(90>p>=75){printf("B grade");
	}
	else if(75>p>=60){printf("C grade");
	}
	else if(60>p>=50){printf("D grade");
	}
	else{printf("FAIL");
	}
	
}
