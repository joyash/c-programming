#include <stdio.h>
/*(1) Make the code that a user input five values of int-type variables and file name from keyboard by
 using scanf, and save these values separeted by comma. Submit screenshots of your code and display on 
 Excel.*/

 #include <stdio.h>

 int main(){
    int arra[5];
    for(int i = 0; i < 5; i++){
        printf("Enter a number: ");
        scanf("%d", &arra[i]);

    }
    FILE *file = fopen("ass1.csv", "w");
    for(int i = 0; i < 5; i++){
        fprintf(file, "%d", arra[i]);
        if(i < 5){
            fprintf(file, ",");
        }
    }fclose(file);
    




    return 0;
 }