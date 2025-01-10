/*celcius to faren*/
#include<stdio.h>
int main()
{
	float f,c;
	printf("enter temprature in celcius");
	scanf("%f",&c);
	f=(c * 9)/ 5 + 32;
	printf("temprature in farenheit=%f",f);
	return 0;
}
