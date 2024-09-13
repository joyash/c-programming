/*Roll the 6-sided dice 100 times and save the result in an int type array. Then, create a function 
count_x that counts the number of occurrences of x and returns the result. x is the value from 1 to 6, 
and this value is decided by user from scanf function.*/

#include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
#define MAX_SIZE 100   // initiate maximum size of array
int secret_counter(int *random_array, int user_secret){       //define a calculator to find size of secret number occured 
int counter = 0;       // initialize a variable for get total user secret number in array
    for(int i = 0; i < MAX_SIZE; i++){      // initiate  for loop to go through array
        if(random_array[i] == user_secret) {  // compare array elements and if  number secret is  found
            counter += 1;           // counter increase by 1
        }    
    }                
    return counter;          // return size of secret numbers in array
}

int main(){
    int min_num = 0;   //initialize a variable for minimum side number of dice
    int max_num = 6;      // initiate variable for maximum side number of dice
    int random_array[MAX_SIZE];   // create variable for array
    srand(time(0));  // seed time
    int user_secret;
    int one_size;
    for(int i = 0; i < MAX_SIZE; i++){   // start loop to create random numbers in array
        random_array[i] = rand() % (max_num - min_num + 1) + min_num;  // get one random roll at a time
        //printf("Rolling!!! \nYou rolled  : %d \n", random_array[i]);  // print random number
        
       

    }
    printf("Enter a number you want to get from roll dice, (1-6) : "); // ask user to enter their choice
    scanf("%d", &user_secret);   // save user shoice to user_secret
    one_size = secret_counter(random_array, user_secret); //sending array to calculate and getting back sixe of secret number  
    printf("\n Your's number rolled out %d times out of 100 times!", one_size); // finallý print  result
    return 0;
}