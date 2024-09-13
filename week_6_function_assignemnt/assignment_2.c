/*  Make Function func2 to calculate the area of a rectangle. Inputs to the function are width and 
height.  */

#include <stdio.h> // start program
int area_calculator(int r_width, int r_height){   // initialize function to calculate area 
    int area = (r_width * r_height);   // calculate area 
    return area;
} 

int main(){
    int r_width = 9;    // initialize triangle width 
    int r_height = 6;       // initialize triangle height
    int area;           // initialize area
    area = area_calculator(r_width, r_height);      // sending and receiving variable and result
    printf("Area of rectangle is: %d  ", area);          // print area

    return 0;
}