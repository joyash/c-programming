/* Prepare int-type array of size 5. Input value into array by using scanf
 and for statement. Not use equal symbol for assignment like a[0] = 3.*/

#include <stdio.h>
int main(){

    int a_array[5];               // initialize an empty array
    for(int i = 0; i < 5; i++){        // using for loop to get 5 value from user 
        printf("Enter Five numbers: ");  // ask user to enter value
        scanf("%d", &a_array[i]);    // assign the user value in a_array array
        }
    for(int i = 0; i < 5; i++){        // using for loop to print the value from array. 
        printf("The number %d is in position %d\n", a_array[i], i); // finally program prints the user input value.
    }    
    return 0;
}    