//To write a program on geting the output i.e., stars in the shape of right angle trianglee 

#include<stdio.h>
int main ()
{
	//Variable Declaration
	int i;
	int j;
	int num;
	
	printf("Enter num value:");
	scanf("%d", &num);

	for(i = 0; i < num; i++)
	{
		for(j = 0; j<i+1;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}



/*Enter num value:4
*
* *
* * *
* * * *
*/
