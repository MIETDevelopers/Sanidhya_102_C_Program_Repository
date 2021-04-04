#include <stdio.h>

//Author name: Sanidhya sharma
//Creation Date: 17th March 2021
//Purpose: Check whether the alphabet is vowel or consonent
#include <stdio.h>//Preprocessor directive to include input output function header file
//Start of the main function body
int main()
{
    char ch;
    char ch;//Declaring a variable of character data type

    /* Input an alphabet from user */
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
      
    printf("Enter any alphabet: ");//Printf function calling to print an alphabet
    scanf("%c", &ch);//Scanf function calling to read user input

    /* Switch value of ch */
    //Start of Switch case
    switch(ch)
    {
        case 'a': 
            printf("Vowel");
            break;
        case 'e': 
            printf("Vowel");
            break;
        case 'i': 
            printf("Vowel");
            break;
        case 'o': 
            printf("Vowel");
            break;
        case 'u': 
            printf("Vowel");
            break;
        case 'A': 
            printf("Vowel");
            break;
        case 'E': 
            printf("Vowel");
            break;
        case 'I': 
            printf("Vowel");
            break;
        case 'O': 
            printf("Vowel");
            break;
        case 'U': 
            printf("Vowel");
            break;
        default: 
            printf("Consonant");
        case 'a'://Case 1 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'e'://Case 2 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'i'://Case 3 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'o'://Case 4
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'u'://Case 5 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'A'://Case 6 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'E'://Case 7 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'I'://Case 8 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'O'://Case 9 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        case 'U'://Case 10 
            printf("Vowel");//Printf function calling to print vowel
            break;//Break statement
        default://Default statement 
            printf("Consonant");//Printf function calling to print consonent
    }

    return 0;
}
    return 0;//Return statement
}//End of the main function body