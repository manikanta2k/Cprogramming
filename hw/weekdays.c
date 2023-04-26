//To write a program on weekdays using switch operator

#include <stdio.h>
int main()
{
	//Declaring the variable
	int Day;
	
	//Printing the number from 1 to 7 
	
	printf("Enter the number from 1 to 7:\n");
	scanf("%d", &Day);

	//Main logic using switch 
	
	switch(Day)
	{
		case 1:
		printf("Sunday\n");
		break;
	
		case 2:
		printf("Monday\n");
		break;

		case 3:
		printf("Tuesday\n");
		break;

		case 4:
		printf("Wednesday\n");
		break;

		case 5:
		printf("Thursday\n");
		break;

		case 6:
		printf("Friday\n");
		break;

		case 7:
		printf("Saturday\n");
		break;

		default:
		printf("Invalid input\n");
		break;
	}
	
	return 0;
}



/*Enter the day from 1 to 7:
1
Sunday

Enter the day from 1 to 7:
7
Saturday

Enter the day from 1 to 7:
2
Monday

Enter the day from 1 to 7:
6
Friday

Enter the day from 1 to 7:
3
Tuesday

Enter the day from 1 to 7:
5
Thursday

Enter the day from 1 to 7:
4
Wednesday*/

