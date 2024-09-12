/* (4) Write the code for input age of 10 persons by scanf and substituting them to array. 
After that, when including "minus" or "over 100", output warning message.  */

#include <stdio.h>
#define MAX_SIZE 10
int main(){
    int user_age;   // initialize age variable
    int user_age_array[MAX_SIZE];  // initialize array of user age variable
    for(int i = 0; i < MAX_SIZE; i++){ 
        printf("Please enter your age :  ");
        scanf("%d", &user_age);
        if (user_age > 0 && user_age < 100) {
            user_age_array[i] = user_age;}
        else { printf("You have entered the wrong age!! \nPlease enter age between 0 -100 !!! \n");
        i--;}
        }

    for(int i = 0; i < MAX_SIZE; i++){
        printf("Your age is %d \n", user_age_array[i]);
    }




    return 0;
}