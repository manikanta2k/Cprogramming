#include<stdio.h>
int main()
{
 
      //Declaring the variables
      int a = 10;
     
      int b = 0;

      int c = 20;

      int r;

      //Applying the main logic

      r = (a = b) || (b = c);

      printf("%d\n", r);

      printf("%d %d %d\n \n \n", a,b,c);

      return 0 ;
}      




/*output
1
0 20 20
*/

