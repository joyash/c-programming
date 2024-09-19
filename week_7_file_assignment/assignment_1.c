#include <stdio.h>
/*(1) Make the code that a user input five values of int-type variables and file name from keyboard by
 using scanf, and save these values separeted by comma. Submit screenshots of your code and display on 
 Excel.*/

 #include <stdio.h>
 #include <string.h>

 int main(){        // start main  program
    int arra[5];        // initialize array to store value
    char user_f[10];
    printf("Choose a name of the file: ");
    scanf("%s", user_f);
    strcat(user_f, ".csv");
    for(int i = 0; i < 5; i++){         // for loop to get 5 value from user
        printf("Enter a number: ");     //ask user to input
        scanf("%d", &arra[i]);      //assign those input in variable

    }
    FILE *file = fopen(user_f, "w");        //initialize to write on file
    for(int i = 0; i < 5; i++){     //for loop to write value in file
        fprintf(file, "%d", arra[i]);       // write value in file
        if(i < 4){              
            fprintf(file, ","); // put commas after each value
        }
    }fclose(file);
    
    return 0;
 }