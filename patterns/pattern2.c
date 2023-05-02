#include<stdio.h>
int main ()
{
        //Variable Declaration
        int i;
        int j;
        int num;

        printf("Enter num value:");
        scanf("%d", &num);

        for(i = 0; i < num; i++)
        {
                for(j = 0; j<i+1; j++)
                {
                        printf("%d ", i+1);
                }
                printf("\n");
        }
        return 0;
}


/*Enter num value:4
1
2 2
3 3 3
4 4 4 4
*/

