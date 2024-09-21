/* 1) Make Function func1 to calculate the area of a triangle. Inputs to the function are width 
and height.  */

#include <stdio.h> // start program
int area_calculator(int t_width, int t_height){   // initialize function to calculate area 
    int area = (t_width * t_height) * 1 / 2;   // calculate area 
    return area;
} 

int main(){
    int t_width = 9;    // initialize triangle width 
    int t_height = 6;       // initialize triangle height
    int area;           // initialize area
    area = area_calculator(t_width, t_height);      // sending and receiving variable and result
    printf("Area of triangle is: %d  ", area);          // print area

    return 0;
}