/*Roll the 6-sided dice 100 times and save the result in an int type array. Then, create a function 
count_1 that counts the number of occurrences of 1 and returns the result.*/

#include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
#define MAX_SIZE 100   // initiate maximum size of array
int one_counter(int *random_array){       //define a calculator to find size of number 1 occured 
    int counter = 0;       // initialize a variable for get total 1 number in array
    for(int i = 0; i < MAX_SIZE; i++){      // initiate  for loop to go through array
        if(random_array[i] == 1) {  // compare array elements and if  number 1 is  found
            counter += 1;           // counter increase by 1
        }    
    }                
    return counter;          // return size of numbers 1 in array
}

int main(){
    int min_num = 0;   //initialize a variable for minimum side number of dice
    int max_num = 6;      // initiate variable for maximum side number of dice
    int random_array[MAX_SIZE];   // create variable for array
    srand(time(0));  // seed time
    int one_size;
    for(int i = 0; i < MAX_SIZE; i++){   // start loop to create random numbers in array
        random_array[i] = rand() % (max_num - min_num + 1) + min_num;  // get one random roll at a time
        printf("Rolling!!! \nYou rolled  : %d \n", random_array[i]);  // print random number
        
       

    }one_size = one_counter(random_array); //sending array and to calculate and getting back sixe of number 1 
    printf("\n Side 1 came %d out of 100 times!", one_size); // finallý print  result
    return 0;
}