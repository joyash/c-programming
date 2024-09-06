#include<stdio.h>
int main(){
    int day;

    printf("Enter a day 1-7: \n");
    scanf("%d", &day);
    switch (day){
        case 1 : printf("Today is Monday \n");
        break;
        case 2 : printf("Today is Tuesday \n");
        break;
        case 3 : printf("Today is Wednesday \n");
        break;
        case 4 : printf("Today is Thursday \n");
        break;
        case 5 : printf("The day is Friday \n");
        break;
        case 6 : printf("The day is Saturday \n");
        break;
        case 7 : printf("The day is Sunday \n");
        break;
        default : printf("Enter a valid number 1-7 \n");

    }


    return 0;
}