#include <stdio.h>
void create_user(char new_user_first_name[], char new_user_last_name[], int user_password, float initial_balance){
     FILE *file;
     char filename[50];
    snprintf(filename, sizeof(filename), "%s_%s.txt", new_user_first_name, new_user_last_name);
    file = fopen(filename, "w");
    if(file == NULL){
        printf("Error creating user file !\n");
        return;
    }
    fprintf(file, "%s, %s, %d, %.2f\n", new_user_first_name, new_user_last_name, user_password, initial_balance);
    fclose(file);
    printf("User Created successfully! \n"); 
}

int check_user(){
    FILE * file;
    int ac_num, user_password, stored_password;
    char filename[50];
    char first_name[10];
    char last_name[10];
    float balance;

    printf("Enter your first name: ");
    scanf("%s", first_name);
    printf("Enter your last name: ");
    scanf("%s", last_name);
    printf("Enter your password: ");
    scanf("%d", &user_password);
    snprintf(filename, sizeof(filename), "%s_%s.txt", first_name, last_name);
    file = fopen(filename, "r");
    if(file == NULL){
        printf("User not found\n");
        return -1;
    }
    //read user information from file
    fscanf(file, "%[^,], %[^,], %d, %f", first_name,last_name, &stored_password, &balance);
    fclose(file);

    if(stored_password == user_password ){
        printf("LOG-IN SUCCESSFUL ! Your balance is: %.2f\n", balance);
        return 0;
    }else{
        printf("Incorrect password!\n");
        return -1;
    }



}


int main(){
    char new_user_first_name[10];
    char new_user_last_name[10];
    int user_password;
    float initial_balance;
    int check_in, user_password1;
   
    while(1){
    printf("--- Welcome to the New Bank ! ---\n");
    printf("--- Please select from the options ! ---\n");
    printf("If you are a new user : Enter 1 \nIf you have an account : Enter 2\n");
    printf("If you wish to quit : Enter 0\n");
    printf("You enter : "); 
    scanf("%d", &check_in);
    if(check_in == 1){
        printf("Enter your details to create an account !\n");
        printf("Enter your first name: ");
        scanf("%s", new_user_first_name);
        printf("Enter your last name: ");
        scanf("%s", new_user_last_name);
        printf("Enter your password: ");
        scanf("%d", &user_password);
        printf("Your initial balance: ");
        scanf("%f", &initial_balance);
        create_user(new_user_first_name, new_user_last_name, user_password, initial_balance);


        
    }
    else if(check_in == 2){
        check_user();
        
    }
    else if(check_in == 0){
        break;
    }

    }
    

    
        
    

    


    
    return 0;
}