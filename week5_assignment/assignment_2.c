/* (2) Generate random numbers from -100 to 100 and input these random values 
into int-type array's element. After that calculate these sum total by using For statement.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int random_array[10];   //initialize array with maximum size of 10
    int random_n;           // initialize variable to assign random numbers.
    int random_min = -100;  // create min number for ramdom number.
    int random_max = 100;   // create maximum number for random number.
    int random_total = 0;       // initialize  variavle to assign total sum.
    srand(time(0));     // cal the random function to create ramdom number for real time.

    for(int i = 0; i < 10; i++){   // use for loop to create 10 random number in a sequence.
        
        random_array[i] = rand() % (random_max - random_min + 1) + random_min; // creating ramdom numbers.
        printf("%d \n", random_array[i]);  // printing the array value 
        random_total += random_array[i];// adding the random value each at a time.

    }printf("The total sum of the array is %d", random_total); // printing the total sum 
    



    return 0;

}