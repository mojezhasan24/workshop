#include<stdio.h>
int main()
{
	char ch;
	printf("enter alphabet:");
	scanf("%c",&ch);
	switch(ch){
		case 'a':
			case 'A':printf("vovel");
		break;
		case 'e':
			case 'E':printf("vovel");
		break;
		case 'i':
			case 'I':printf("vovel");
		break;
		case 'o':
			case 'O':printf("vovel");
		break;
		case 'u':
			case 'U':printf("vovel");
		break;
		default:printf("consonent");
		break;
	}
}
