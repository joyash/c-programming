/*Assignment 1:
Five patients arrive at the hospital.
They input (1) first name, (2) last name, (3) age, (4) gender, (5) height, and (6) weight from a keyboard by scanf.
Including calculation function of BMI.
Show averge value of BMI in a display.
Show the numbers of male/female in a display.
Show the numbers of person who is over 25 BMI in a display.
Save (1)-(6), and (7) BMI of all patient to array-type variables.
Output files on the above arrays, e.g., first_name.csv, lase_name.csv, age.csv ...*/

#include <stdio.h>
// function to claculate bmi
void bmi_cal(float height[], int weight[], float bmi[], int count){
    for(int i = 0; i < count; i++){
        bmi[i] = weight[i] / (height[i] * height[i]);
    }
}

int main(){
    char gender[5], first_name[5][10], last_name[5][10]; // array to store gender, name 
    int age[5],weight[5];  // array to store age weight
    float height[5], bmi[5]; // array to store height bmi
    int male_count = 0;
    int female_count = 0;
    float bmi_sum = 0.0;
    int bmi_over_25 = 0;
   
    // open files for writing
    FILE *file = fopen("first_name.csv", "a");
    FILE *file1 = fopen("last_name.csv", "a");
    FILE *file2 = fopen("gender.csv", "a");
    FILE *file3 = fopen("age.csv", "a");
    FILE *file4 = fopen("height.csv", "a");
    FILE *file5 = fopen("weight.csv", "a");
    FILE *file6 = fopen("bmi.csv", "a");
    
    // using loop to collect data for 5
    for(int i = 0; i < 5; i++){
            printf("Enter your first name: ");
            scanf("%s", first_name[i]);
            printf("Enter your last name: ");
            scanf("%s", last_name[i]);
            printf("Enter your gender: ");
            scanf(" %c", &gender[i]);
            printf("Enter your age: ");
            scanf("%d", &age[i]);
            printf("Enter your height: ");
            scanf("%f", &height[i]);
            printf("Enter your weight: \n");
            scanf("%d", &weight[i]);
    
        // write data to files
        fprintf(file, "%s\n", first_name[i]);
        fprintf(file1, "%s\n", last_name[i]);
        fprintf(file2, "%c\n", gender[i]);
        fprintf(file3, "%d\n", age[i]);
        fprintf(file4, "%.2lf\n", height[i]);
        fprintf(file5, "%d\n", weight[i]);
        
     
     // keeping track of male and female number
     if(gender[i] == 'm' || gender[i] == 'M'){
         male_count +=1 ;}
    else if(gender[i] == 'f' || gender[i] == 'F'){
        female_count += 1;
    } 
    }
    // calculate bmi for each 
    bmi_cal(height, weight, bmi, 5);
    for(int i = 0; i < 5; i++){
        fprintf(file6, "%.2lf\n", bmi[i]);
        bmi_sum += bmi[i];
        if(bmi[i] > 25){
            bmi_over_25 ++;
        }
        
        
    }
    // display results
    printf("Average BMI: %.lf\n", bmi_sum / 5);
    printf("Number of males: %d\n", male_count);
    printf("Number of females: %d\n", female_count);
    printf("Number of people with over BMI 25 : %d\n", bmi_over_25);
    fclose(file);
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);
    fclose(file5);
    fclose(file6);
    
    return 0;
}