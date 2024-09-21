#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

   /* (3) Two players roll six-sided dic three times and calculating total values. Write the code that assigns the higher total value as the winner. 
    When two playes' scores are same, show Same score by using printf function. */
    
    int min_dice = 1;
    int max_dice = 6;
    int user_1, roll_a, roll_b, roll_c; 
    int user_2, roll_d, roll_e, roll_f;
    srand(time(0));
    roll_a = rand() % (max_dice - min_dice + 1) + min_dice;
    roll_b = rand() % (max_dice - min_dice + 1) + min_dice;
    roll_c = rand() % (max_dice - min_dice + 1) + min_dice;
    user_1 = roll_a + roll_b + roll_c;
    
    roll_d = rand() % (max_dice - min_dice + 1) + min_dice;
    roll_e = rand() % (max_dice - min_dice + 1) + min_dice;
    roll_f = rand() % (max_dice - min_dice + 1) + min_dice;
    user_2 = roll_d + roll_e + roll_f;
    
    if (user_1 > user_2) {
        printf("User 1 win!!!");
    }else if (user_2 > user_1) {
        printf("User 2 win!!!");
    }else if (user_1 == user_2) {
        printf("User 1 and User 2 get the same scores!!!");
    } 
    return 0;
}