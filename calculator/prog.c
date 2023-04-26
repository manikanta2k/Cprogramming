#include <stdio.h>
int main()
{
	//Declaring the variables
	
	char sign;

	int num1 , num2 , output;

	printf("Enter the sign + - * / %");
	scanf("%c", &sign);

	printf("Enter two numbers:");
	scanf("%d %d", &num1 , &num2);

	switch (sign)
	{
		case '+':
		output = num1 +num2;
		printf("%d\n", &output);
		break;
	}
	return 0;
}	
		
