/*(7)Roll the 6-sided dice 100 times, and assign them to array. And count the numbers of each 
value. e.g., 1: 30times, 2: 20times, 3: 10times, 4: 10times, 5: 20times, 6: 10times (total 100 times).*/

#include <stdio.h>
#include <stdlib.h>   //getting library for random usage
#include <time.h>    // getting time for real timing
# define MAX_SIZE 100

int main(){
    int dice_array[MAX_SIZE];               // initialize array
    int min_side = 1;                       // initialize min side
    int max_side = 6;                       // initialize max sidde
    int counter1 = 0;                        //initialize counter to count 1
    int counter2 = 0;       
    int counter3 = 0;
    int counter4 = 0;
    int counter5 = 0;
    int counter6 = 0;
    srand(time(0));                         // seed time
    for(int i = 0; i < MAX_SIZE; i++){       //use loop to count upto limit
        dice_array[i] = rand() % (max_side - min_side + 1) + min_side;  // random number for roll dice
        //printf("%d \n", dice_array[i]);                           // checking every roll side
        }
    for(int i = 0; i < MAX_SIZE; i++){  // use loop to count number of 1
        if(dice_array[i] == 1){    // increasing countr if there is 1 in array
            counter1 = counter1 + 1;
        }
        else if(dice_array[i] == 2){    // increasing countr if there is 2 in array
            counter2 = counter2 + 1;
        }
        if(dice_array[i] == 3){    // increasing countr if there is 3 in array
            counter3 = counter3 + 1;
        }
        if(dice_array[i] == 4){    // increasing countr if there is 4 in array
            counter4 = counter4 + 1;
        }
        if(dice_array[i] == 5){    // increasing countr if there is 5 in array
            counter5 = counter5 + 1;
        }
        if(dice_array[i] == 6){    // increasing countr if there is 6 in array
            counter6 = counter6 + 1;
        }

    } printf("\nSide * came %d times at this game!!!", counter1);    // print result
      printf("\nSide ** came %d times at this game!!!", counter2);    // print result
      printf("\nSide *** came %d times at this game!!!", counter3);    // print result
      printf("\nSide **** came %d times at this game!!!", counter4);    // print result
      printf("\nSide ***** came %d times at this game!!!", counter5);    // print result
      printf("\nSide ****** came %d times at this game!!!", counter6);    // print result
    


    return 0;
}