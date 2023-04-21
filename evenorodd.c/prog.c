//Check whether the given number is even or odd using AND operator

#include<stdio.h>
int main()
{

      //Declaring the variables
      
      int num;

      printf("enter a number:");
      scanf("%d",&num);

      if(num & 1)
      { 
	printf("%d is odd\n", num);
      }
      else
      {	      
	printf("%d is even\n", num);
      }
      
      return 0;

}      



/*enter a number:2
2 is even
*/

/*enter a number:3
3 is odd
*/
