/* (3) Prepare double type array of size 100. After that, substitute random number from 1 to 100 
into array's element. Finally, calculate average value of the all array's elements.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){                 //main program starts
    double example_a[100];     // initialize array size 100
    double min_num = 1.0;    // assign a 
    double max_num = 100.0;
    srand(time(0));
    double total_in_array = 0;
    for(int i = 0; i < 100; i++){
        example_a[i] = ((double) rand() / RAND_MAX) * (max_num - min_num) + min_num;
        printf("%.2lf \n", example_a[i]);
        total_in_array += example_a[i]; 
    }
    printf(" \nTotal sum in random array is: %.2lf", total_in_array);




    return 0;
}