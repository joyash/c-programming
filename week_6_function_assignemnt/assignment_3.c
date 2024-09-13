/* Make Function func3 to calculate the area of triangle or rectangle. Inputs to the function are 
width, height, and user's select. When a user select 0, calculate triangle, when a user select 1, 
calculate rectangle. */

#include <stdio.h>
int t_area_calculator(int height, int width){    // initialize function for triangle area calculator
    int area = (height * width) * 1 / 2;        // calculate area of triangle
    return area;                                // return area to main program
}
int r_area_calculator(int height, int width){    // initialize function for rectangle area calculator
    int area = (height * width);                // calculate area of rectangle
    return area;                            // return area to main program
}
int main(){
    int user_choice;        // initialize variable for get value from user 
    int height;     // initialize height
    int width;      // initialize width
    int area;       // initialize area
    printf("Please select the shape of your calculation ! \n 1 for Triangle ! \n 2 for Rectangle ! \n");
    printf("Your choice is : "); // asking user to select the option
    scanf("%d", &user_choice);      // assign vlaue to variable
    printf("Please enter height : ");   // asking user to enter height
    scanf("%d", &height);           // assign value to height variable
    printf("Please enter width : "); //asking user to enter width 
    scanf("%d", &width);        // assign value to width variable
    if(user_choice == 1){       // comparing user value 
        area = t_area_calculator(height, width); // if 1 the calling triangle area calculator function
        printf("Area of Triangle is %d", area); // print the reuslt
    }else if (user_choice == 2){  // comparing the user value
        area = r_area_calculator(height, width); /// if 2 then calling rectangle area calculator function
        printf("Area of Rectangle is %d", area); // print the result
    }
    
    return 0;
}