/*(4) Create a function average that returns the average of an input array-type variable consisting 
of 100 randomly generated integer variables. The random range is from 0 to 100. */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100   // initiate maximum size of array
int average_calculator(int *random_array){       //define a calculator to find average 
    int total = 0;       // initialize a variable for get total in array
    int average = 0;   // initiate a variable to get average 
    for(int i = 0; i < MAX_SIZE; i++){      // initiate  for loop to go through array
        total = total + random_array[i];     //calculate total every time in loop
    } printf("%d", total);              // print total 
    return average = total / MAX_SIZE;          // return average of array
}

int main(){
    int min_num = 0;   //initialize a variable for minimum number in array
    int max_num = 100;      // initiate variable for maximum number in array 
    int random_array[MAX_SIZE];   // create variable for array
    srand(time(0));  // seed time
    int average;
    for(int i = 0; i < MAX_SIZE; i++){   // start loop to create random numbers in array
        random_array[i] = rand() % (max_num - min_num + 1) + min_num;  // get one random at a time
        printf("random number is : %d \n", random_array[i]);  // print random number
        
       

    }average = average_calculator(random_array); // sending array and to calculate and getting back average 
    printf("\nAverage is : %d", average); // finallý print average result
    return 0;
}

