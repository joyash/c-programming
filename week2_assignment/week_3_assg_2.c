/* (2) Define three integer variables a、b、c. After that, input specific values from keyboard into these variables and when all values are not
     same, show Different values. 
    */
    #include <stdio.h>
    int main(){
    int user_a, user_b, user_c; // initilizing three variable
    printf("Enter a first number: "); // ask user to enter numbers
    scanf("%d", &user_a);              // assign user input value in variable
    printf("Enter a second number: ");
    scanf("%d", &user_b);
    printf("Enter a third number: ");
    scanf("%d", &user_c);
    if (user_a != user_b && user_b != user_c && user_a != user_c){  // check if all values are same
        printf("\nThe numbers %d, %d and %d are not same !!!", user_a, user_b, user_c); // print
    }else {                                                                 // if values are not same
        printf("\nAt least two of the numbers are same!!!"); // print if two are same
    }
    return 0;
    }
    