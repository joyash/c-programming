#include <stdio.h>
#define MAX_ARR 3

void change_arr_val(int *pointer){
    for(int i = 0; i < MAX_ARR; i++){
        *pointer = i * 0;
        pointer = pointer + 1;
    }
}

int main(){
    int a[MAX_ARR] = {1,2,3};
    change_arr_val(a);
    for(int i = 0; i < MAX_ARR; i++){
        printf("a[%d] = %d \n", i, a[i]);
    }
    return 0;
}