// A C Program demonstrating use of malloc() function.   		© Sanidhya Sharma 20/March/2021
#include <stdio.h>
#include <stdlib.h> //Using standard library header file.
	int main(){
	int *ptr;
		ptr = malloc(15 * sizeof(*ptr)); //A block of 15 integers.
    	if (ptr != NULL) {
        *(ptr + 5) = 298; //Assign 298 to sixth integer.
    printf("Value of the 6th integer is %d",*(ptr + 5));
    }
}
