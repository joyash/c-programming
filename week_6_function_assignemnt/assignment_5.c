/*Create a function minus_counter that returns the number of occurrences of negative values in the 
input array.　The array type is int, and array size is 100. The elements of array is assigned a random
 number in the range of -100 to 100.*/

 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
#define MAX_SIZE 100   // initiate maximum size of array
int minus_counter(int *random_array){       //define a calculator to find size of minus number 
    int counter = 0;       // initialize a variable for get total negative number in array
    for(int i = 0; i < MAX_SIZE; i++){      // initiate  for loop to go through array
        if(random_array[i] < 0) {  // compare array elements and if negative numbers found
            counter += 1;           // counter increase by 1
        }    
    }                
    return counter;          // return size of negative numbers in array
}

int main(){
    int min_num = -100;   //initialize a variable for minimum number in array
    int max_num = 100;      // initiate variable for maximum number in array 
    int random_array[MAX_SIZE];   // create variable for array
    srand(time(0));  // seed time
    int minus_size;
    for(int i = 0; i < MAX_SIZE; i++){   // start loop to create random numbers in array
        random_array[i] = rand() % (max_num - min_num + 1) + min_num;  // get one random at a time
        printf("Random number is : %d \n", random_array[i]);  // print random number
        
       

    }minus_size = minus_counter(random_array); //sending array and to calculate and getting back minus number 
    printf("\n Negative value occured %d out of 100 times!", minus_size); // finallý print  result
    return 0;
}