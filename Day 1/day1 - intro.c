//single line comment
/*multi-line comment
line 2
line 3 */

//this is a program for adding two numbers
//date: 09 may 2022
#include <stdio.h>
int main()
{
    //variable declaration
    int num1, num2;
    float div;
    //input  %d identifier
    printf("Please enter any two integer number: ");
    scanf("%d %d", &num1, &num2);

    //expression
    div = (float)num1 / num2; //type casting
    //output
    printf("division is %.2f", div);
    return 0;
}
