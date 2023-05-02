#include<stdio.h>
int main()
{
	//Variable declaration
	int i , j , k , num;


	printf("Enter num value: ");
	scanf("%d", &num);

	for(i = num; i>0; i--)
        {
                for(j = i; j>0; j--)

		{
			printf("* ");
		}
		printf("\n");
	}

	
	for(i = 0; i < num; i++)
	{
		for(k = 0; k < i+1; k++)
		{
			printf("* ");
		}
		printf("\n");
	}

	return 0;
}	



/* Enter num value: 5
* * * * *
* * * *
* * *
* *
*
*
* *
* * *
* * * *
* * * * *

*/
