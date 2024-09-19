/*(2) Make the code that a user input five values of double-type variables and file name from 
keyboard by using scanf, and save these values separeted by line break \n. Submit screenshots 
of your code and display on Excel.*/


#include <stdio.h>
 #include <string.h>

 int main(){        // start main  program
    double arra[5];        // initialize array to store value
    char user_f[10];        // assign variable to store file name
    printf("Choose a name of the file: ");      //ask user to enter file name
    scanf("%s", user_f);        // save file name to variable
    strcat(user_f, ".csv");     // add filename to .csv format
    for(int i = 0; i < 5; i++){         // for loop to get 5 value from user
        printf("Enter a number: ");     //ask user to input
        scanf("%d", &arra[i]);      //assign those input in variable

    }
    FILE *file = fopen(user_f, "w");        //initialize to write on file
    for(int i = 0; i < 5; i++){     //for loop to write value in file
        fprintf(file, "%d", arra[i]);       // write value in file
        if(i < 4){              
            fprintf(file, "\n"); // put commas after each value
        }
    }fclose(file);   // close file after work
    
    return 0;
 }