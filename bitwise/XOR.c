#include<stdio.h>
int main()
{

       //Declaring the variables

       int x;
    
       int o;
   
       int r;

       //Assigning the values

       x = 10;
   
       o = 20;
    
       //Applying the main logic

       r = x^=o^=x^=o;

       //Printing r value
       
       printf("%d\n", r);
       printf("\n");

       //Now printing x , o values
       
       printf("%d %d\n", x , o);

       return 0;
}       





/* output
 * 20

20 10
*/

