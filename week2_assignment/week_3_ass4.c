#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    
    /* (4) Add the function for input the player names in ealry pahse of program by using scanf 
    function, and show winners name.*/
    
    int min_dice = 1;
    int max_dice = 6;
    int user_1, roll_a, roll_b, roll_c; 
    int user_2, roll_d, roll_e, roll_f;
    char first_user[20], second_user[20];
    printf("Enter first player name:  ");
    scanf(" %s", first_user);
    printf("Enter second player name:  ");
    scanf(" %s", second_user);
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
        printf("\n%s win!!!", first_user);
    }else if (user_2 > user_1) {
        printf("\n%s win!!!", second_user);
    }else if (user_1 == user_2) {
        printf("\nfirst_user and second_user get the same scores!!!");
    }
    

    return 0;
}