/* Define three integer variables a、b、c. After that, input specific values from keyboard into these variables and when all values are same, 
       show same values. */
    
    #include <stdio.h>
    int main(){
    int a, b, c;                                // initialize variables
    printf("Enter a first number:  ");          //get first number from user
    scanf("%d", &a);                            // assign input to the variable
    printf("Enter a second number:  ");         //get second number from user
    scanf("%d", &b);                            // assign the input to the variable
    printf("Enter a third number:  ");          //get third number from user
    scanf("%d", &c);                            // assign the input to the variable
    if (a == b && b == c) {           // compare the inputs, if all the input are same, then print same otherise not same    
        printf("All three numbers are same!!!");
    }else {
        printf("Numbres are not same!!! All numbers should be same to get positive result!!! ");}
    return 0;
    } 