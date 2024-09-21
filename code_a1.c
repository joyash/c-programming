/*NPC and a user play the Rock-Paper-Scissors game.
Rule:NPC and a user select one in Rock-Paper-Scissors at same timing.
Rock is stronger than Scissors.
Paper is stronger than Rock.
Scissors is stronger than Paper.
For example, when NPC selects Scissors and a user selects Rock, a user win.
When selections of NPC and a user is same, no winner and no loser.*/
// game rule
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 // here
int main(){
    int human_player;       // variable for save choice
    int cpu_player;

    printf("Welcome to Rock, Paper and Scissor Game!!!\n");  // welcome message
    printf("Player 1 : You\n");
    printf("Player 2 : Computer\n");
    int human_win_counter = 0;      // variable for count win record
    int com_win_counter = 0;
    int equal = 0;


    for(int i = 0; i < 5; i++ ){        // for loop to play game for 5 times 
        int min_num = 1;                // minimum number for game 
        int max_num = 3;                // maximum number for game   
        srand(time(0));                 // seed real time
        printf("Please select from the options : \nRock = 1\nPaper = 2\nScissor = 3 \n"); // ask user 
        printf("Enter your choice: ");  // to enter choice to start game 
        scanf("%d", &human_player);
                
        if(human_player >= 1 && human_player <= 3){     // check the user selection if ok game continue
            cpu_player = rand() % (max_num - min_num + 1) + min_num; // cpu generates its choice
            printf("Here is computer choice: %d\n", cpu_player);

        if(human_player == 1 && cpu_player == 3 || human_player == 2 && cpu_player == 1 || human_player == 3 && cpu_player == 2){
            printf("Congratulation you win the game!!!\n"); // if beat computer player wins
            human_win_counter += 1;   // tracking player wins record
        }
        else if(human_player == 3 && cpu_player == 1 || human_player == 1 && cpu_player == 2 || human_player == 2 && cpu_player == 3){
            printf("Computer wins the game!!!\n");   // if computer beat player computer wins
            com_win_counter += 1;               // tracking computer wins record
        }
        else if(human_player == 2 && cpu_player == 2 || human_player == 1 && cpu_player == 1 || human_player == 3 && cpu_player == 3){
            printf("Both have same choice! Nobody wins the game!!!\n");  // if both choice same it is tie
            equal += 1;  // tracking number of ties 
        }} 
        else if(human_player < 0 || human_player > 3){ // show error if wrong selection
            printf("You Select the wrong choice !!!\nSelect the correct choice from the list!!!\n");
            i--;  // minus counter if wrong choice
        }
        else{
            printf("Pieni Hetki\n Erron on Game!!!\n");
        }
    } 
    printf("Here is the final result !!!\n");      // print final result
    printf("You win %d times !!!\n", human_win_counter);
    printf("Computer wins %d times !!!\n" , com_win_counter);
    printf("%d times it was tie!!!", equal);


    return 0;

}