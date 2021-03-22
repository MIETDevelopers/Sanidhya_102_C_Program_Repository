#include <stdio.h>
//Author : Sanidhya Sharma
//Date: 21-03-2021
//Purpose:Number is even or odd
#include <stdio.h>//Preprocessor directive to include input output function header file
//start of the main body function 
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    int num;//Declaring variable of integer data type
    printf("Enter an integer: ");//Printf function calling to print an integer
    scanf("%d", &num);//Scanf function calling to read the user input
    // true if num is perfectly divisible by 2
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    // True if num is perfectly divisible by 2
    if(num % 2 == 0)//If statement
        printf("%d is even.", num);//Printf function calling
    else//Else statement
        printf("%d is odd.", num);//Printf function calling
    return 0;
} 