/* (5) Roll the 6-sided dice 100 times, and assign them to array. And count the number of 1. */

#include <stdio.h>
#include <stdlib.h>   //getting library for random usage
#include <time.h>    // getting time for real timing
# define MAX_SIZE 100

int main(){
    int dice_array[MAX_SIZE];   // initialize array
    int min_side = 1;           // initialize min side
    int max_side = 6;       // initialize max sidde
    int counter = 0;        //initialize counter to count 1
    srand(time(0));         // seed time
    for(int i = 0; i < MAX_SIZE; i++){      //use loop to count upto limit
        dice_array[i] = rand() % (max_side - min_side + 1) + min_side;  // random number for roll dice
        //printf("%d \n", dice_array[i]);  // checking every roll side
        }
    for(int i = 0; i < MAX_SIZE; i++){  // use loop to count number of 1
        if(dice_array[i] == 1){    // increasing countr if there is 1 in array
            counter = counter + 1;
        }
    } printf("\n1 came %d times in this game!!!", counter);    // print result
    


    return 0;
}