#include<stdio.h>
int main()
{
     //Declaring the variables

     float marks;
     
     // Assigning the values
     
     printf("Enter the marks:");
     scanf("%f", &marks);
     
     // Applying the main logic 
     
     //marks <= 0 or > 100 then print Invalid input
     //marks > 0 and < 30 then print Fail 
     //marks >= 30 and < 50 then print Pass
     //marks >= 50 and < 75 then print Average
     //marks >=75 and < 100 then print Good

     if (marks <= 0 || marks > 100)
     {
	 printf("Invalid input\n");
     }
     else if (marks >0 && marks <30)
     {
	 printf("Fail\n");
     }
     else if (marks >= 30 && marks <50)
     {
         printf("Pass\n");
     }
     else if (marks >=50 && marks <75)
     { 
	 printf("Average\n");
     }
     else
     {
	 printf("Good\n");
     }
     return 0;
}     



/*Enter the marks:15
Fail

Enter the marks:35
Pass

Enter the marks:56
Average

Enter the marks:88
Good
*/
