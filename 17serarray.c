//Author name :Sanidhya sharma 
//Creation date: 19-03-2021
//Purpose :A C Program to search an element in the array based on user choice.     
//Purpose :A C Program to search an element in the array based on user choice.    
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of main function body
void main(){  //In this program we are not using 'return 0', So 'int main() -> void main()'.
    int num;//Declaring variable of integer data type
    int i,  keynum, found = 0;//Declaring variable of integer data type
 
    printf("Enter the number of elements: \n");//printf function calling to print the numbers of elements
    scanf("%d", &num);//This will set the maximum number (Limit) of values to be entered by user based on their choice.
    int array[num];
    printf("Enter the elements one by one: \n");//printf function calling to print the elements one by one
    for (i = 0; i < num; i++)//start for loop
    {
        scanf("%d", &array[i]); //This will scan the user input.
    }
 
    printf("Enter the element to be searched: ");//printf function calling to print the element to be searched
    scanf("%d", &keynum);//scanf function calling to read the user input
    // This step will determine Linear search.
    for (i = 0; i < num ; i++)//using for loop
    {
        if (keynum == array[i] )//if statement
        {
            found = 1;