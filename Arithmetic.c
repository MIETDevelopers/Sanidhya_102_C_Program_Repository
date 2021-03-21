//Creation date: 19-03-21
#include<stdio.h>
int main(){
    char operator;
@@ -9,19 +10,19 @@ int main(){
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);
            printf("%.lf + %.lf = %.lf",a, b, a+b);//Addition Function
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);
            printf("%.lf - %.lf = %.lf",a, b, a-b);//Subtraction Function
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);
            printf("%.lf * %.lf = %.lf",a, b, a*b);//Multiplication Function
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);
            printf("%.lf / %.lf = %.lf",a, b, a/b);//Division Function
            break;
    printf("Error encountered by the input values");
    }