/* (4) Write the code for input age of 10 persons by scanf and substituting them to array. 
After that, when including "minus" or "over 100", output warning message.  */

#include <stdio.h>
#define MAX_SIZE 10  //initialize max size for array
int main(){
    int user_age;   // initialize age variable
    int user_age_array[MAX_SIZE];  // initialize array of user age variable
    for(int i = 0; i < MAX_SIZE; i++){   // create loop upto the size of array
        printf("Please enter your age :  ");  // ask user to enter age
        scanf("%d", &user_age); // assign user age to variable
        if (user_age > 0 && user_age < 100) {  // comparing user age 
            user_age_array[i] = user_age;} // if user age is in limit save that value in array
        else { printf("You have entered the wrong age!! \nPlease enter age between 0 -100 !!! \n");
        i--;}   // decreasing loop size by 1 if user enter wrong age
        }

    for(int i = 0; i < MAX_SIZE; i++){  // use loop to display user entered valid age
        printf("Your age is %d \n", user_age_array[i]);
    }




    return 0;
}