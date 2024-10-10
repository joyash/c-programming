/*(3) On the code 6, change mathematical function from sin(x)to sin(x)+0.1x, 
that is, output_y[i] = sin(input_x[i]) + 0.1*input_x[i]. After that, save it and make a graph via Excel.
 Submit screenshot of the graph.*/

 #include <stdio.h>
 #include <math.h>
 #define MAX_SIZE 1000
 // User-defined function for making CSV
// Input: File name, array data
// Result: Save file
 void make_csv(char *filename, double *arr){
    //open file
    FILE *file = fopen(filename, "w");
    // record values
    for(int i = 0; i < MAX_SIZE; i++){
        fprintf(file, "%lf", arr[i]);
        if(i < MAX_SIZE - 1){
            fprintf(file, "\n");
        }
        // close file
    }fclose(file);
 }
 int main(){
    double input_x[MAX_SIZE];
    double output_y[MAX_SIZE];
    // making input domain
    // i = 0 to 99.9
    // 0.0, 0.1, ..., 99.9
    for(int i = 0; i < MAX_SIZE; i++){
        input_x[i] = 0.1 * i;
    }
    // get value for sin function
    for(int i = 0; i < MAX_SIZE; i++){
        output_y[i] = sin(input_x[i] + 0.1 * input_x[i]);
    }
    //save
    make_csv("sin_function.csv", output_y);
    return 0;
 }