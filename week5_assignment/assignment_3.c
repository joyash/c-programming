/* (3) Prepare double type array of size 100. After that, substitute random number from 1 to 100 
into array's element. Finally, calculate average value of the all array's elements.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){                 //main program starts
    double example_a[100];     // initialize array size 100
    double min_num = 1.0;    // initialize and assign minimum value
    double max_num = 100.0;   // initialize and assign maximum vlaue
    srand(time(0));     // seed random number generator 
    double total_in_array = 0;       // initialize and assign total sum in array
    for(int i = 0; i < 100; i++){     // using for loop to generate random number and add in total
        example_a[i] = ((double) rand() / RAND_MAX) * (max_num - min_num) + min_num;
        printf("%.2lf \n", example_a[i]);
        total_in_array += example_a[i]; 
    }
    printf(" \nTotal sum in random array is: %.2lf", total_in_array);  // print total in array




    return 0;
}