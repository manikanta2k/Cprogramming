#include <stdio.h>
int main()
{
        //Declaring the variables

        char sign;

        int num1, num2, result;

        printf("Enter the sign + - * / :");
        scanf("%c", &sign);

	printf("Enter two numbers:" );
        scanf("%d %d", &num1, &num2);

        switch(sign)
        {
                case '+':
                result = num1 + num2;
                printf("%d\n", result);
		break;

                case '-':
                result = num1 - num2;
                printf("%d\n", result);
	       	break;

                case '*':
                result = num1 * num2;
                printf("%d\n", result);
		break;

                case '/':
                result = num1 / num2;
                printf("%d\n", result);
		break;

		default:
		printf("invalid input");
		break;
        }

        return 0;
}





/*Enter the sign + - * / :-
Enter two numbers:9
5
4

Enter the sign + - * / :+
Enter two numbers:8
6
14

Enter the sign + - * / :*
Enter two numbers:5
5
25

Enter the sign + - * / :/
Enter two numbers:6
2
3
*/
