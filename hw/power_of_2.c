#include<stdio.h>
int main()
{
	int num;

	printf("Enter the number you need to be test:");
	scanf("%d",&num);

	//performing bitwise operation
	if(num !=0) && ((num &(num-1)==0)
	printf("%d\n is a power of 2", num);

	else
		printf("%d\n is not power of 2", num);
	
	return 0;
}	
