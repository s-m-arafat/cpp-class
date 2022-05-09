//condition
#include <stdio.h>
int main()
{
    //variable declaration
    int num1, num2, sum , sub;
    float div;
    char op;
    //input  %d identifier
    printf("Please enter any operator (+ - /): ");
    scanf("%c", &op);

    //set up the condition
    //divition
    if(op == '/'){
        printf("Please enter any two integer: ");
        scanf("%d %d", &num1, &num2);

        //expression
        div = (float)num1 / num2; //type casting
        //output
        printf("division is %f", div);
    }
    //addition
    else if(op == '+'){
        printf("Please enter any two integer: ");
        scanf("%d %d", &num1, &num2);

        //expression
        sum = num1 + num2;
        //output
        printf("sum is %d", sum);
    }
    //substraction
    else if(op == '-'){
        printf("Please enter any two integer: ");
        scanf("%d %d", &num1, &num2);

        //expression
        sub = num1 - num2;
        //output
        printf("sub is %d", sub);
    }
    else{
        printf("please insert the correct operator");
    }
    return 0;
}
