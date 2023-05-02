#include<stdio.h>
int main()
{
	//Varaiable declaration
	int i,j,k,num;

	printf("Enter the value of rows:");
	scanf("%d", &num);

	for(i = 1; i <= num; i++)
	{
		for(j = num; j > i; j--)
		{
			printf("  ");
		}
		for(k = 0; k < (i * 2)-1; k++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}	



/* Enter the value of rows:5
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *

Enter the value of rows:3
     *
   * * *
 * * * * *
 
*/
