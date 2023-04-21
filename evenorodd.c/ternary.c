// Check whether the given number is even or odd using ternary operator

#include<stdio.h>
int main()
{
	// Declaring the variables
	
	int num;
        
	//Assigning the value
	
	printf("Enter any number:");
	scanf("%d", &num);
        
        //Applying the main logic (condition) using ternary operator
		
	(num % 2 == 0) ? printf("%d is even", num) : printf("%d is odd", num);

	//New line (for output)
	
        printf("\n");

	return 0;
}	


// Output

/*Enter any number:7
7 is odd
*/


/*Enter any number:4
4 is even
*/



