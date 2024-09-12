/*  (6) Roll the 6-sided dice 100 times, and assign them to array. And count the number of values 
that are greater than 2.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 100

int main(){

    int min_side = 1;               // initialize minimum side of dice
    int max_side = 6;                // initialize maximum side of dice
    int dice_array[MAX_SIZE];           // initialize array for side store
    int counter = 0;                // initialize counter to count > 2
    srand(time(0));             // seed time
    for(int i = 0; i < MAX_SIZE; i++){      // for loop to  roll the dice up to 100 time
        dice_array[i] = rand() % (max_side - min_side + 1) + min_side;      //roll the random dice
    }
    for(int i = 0; i < MAX_SIZE; i++){  // loop to check numbers greater than 2 
        if(dice_array[i] > 2){
            counter++;  // if num > 2 counter increse
        }
    }printf("Counting Completed! Side that is greater than 2 counts %d  !!!", counter ); // print result

    return 0;
}
 