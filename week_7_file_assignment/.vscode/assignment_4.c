#include <stdio.h>
#include <math.h>
#define MAX_SIZE 1000

// Function to create a CSV file
void make_csv(const char *filename, double *x_arr, double *y_arr) {
    // Open the file for writing
    FILE *file = fopen(filename, "w");
    
    // Check if the file opened successfully
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    
    // Write the header
    fprintf(file, "x,exp(x)\n");
    
    // Write x and e^x values to the file
    for (int i = 0; i < MAX_SIZE; i++) {
        fprintf(file, "%lf,%lf\n", x_arr[i], y_arr[i]);
    }

    // Close the file
    fclose(file);
}

int main() {
    double input_x[MAX_SIZE];  
    double output_y[MAX_SIZE];

    // Generate input values from -5 to 5
    for (int i = 0; i < MAX_SIZE; i++) {
        input_x[i] = (i - 500) / 100.0; // Range from -5 to 5
    }

    // Calculate e^x for each x value
    for (int i = 0; i < MAX_SIZE; i++) {
        output_y[i] = exp(input_x[i]); // Calculate exponential
    }

    // Save the results to a CSV file
    make_csv("exp_function.csv", input_x, output_y);

    printf("Exponential values saved to exp_function.csv\n");

    return 0;
}
