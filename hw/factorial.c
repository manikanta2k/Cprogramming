//To write a factorial program using for loop

#include <stdio.h>
int main()
{
	//Variable declaration
	
	int i;
	
	int n;
	
	//Basic factorial formula is n! = n*(n-1)*(n-2)*(n-3)...
	//Using for loop
	
	for(n = 1; n<5; n++)
	{
		for(i=1; i<5; i++)
		{
			n*=i;
			printf("%d\n",n);
		}
	}

	return 0;
}


/* output 
 * 1
2
6
24
*/
