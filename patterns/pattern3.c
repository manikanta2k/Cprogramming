#include<stdio.h>
int main()
{
	int i;
	int j;
	int num;

	printf("Enter num value:");
	scanf("%d", &num);

	for(i=num; i>0; i--)
	{
		for(j = i; j>0; j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


/* Enter num value:5
* * * * *
* * * *
* * *
* *
*
*/
