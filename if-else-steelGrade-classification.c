#include <stdio.h>

int main() {
    
    int hard, TS, grade;
    float content;
    scanf("%d", &hard);
    scanf("%f", &content);
    scanf("%d", &TS);
    
    if(hard > 50 && content < 0.7 && TS > 5600){
        grade = 10;
    }
    else if(hard > 50 && content < 0.7){
        grade = 9;
    }
    else if(content < 0.7 && TS > 5600){
        grade = 8;
    }
    else if(hard > 50 && TS > 5600){
        grade = 7;
    }
    else if(hard > 50 || TS > 5600 || content < 0.7){
        grade = 6;
    }
    else{
        grade = 5;
    }
    
    printf("The grade of the steel is: %d \n", grade);
    
    if(grade == 10){
        printf("All of the conditions met.");
    }
    else if(grade >= 7){
        printf("Two conditions met.");
    }
    else if(grade == 6){
        printf("Only one condition met.");
    }
    else if(grade == 5){
        printf("None of the conditions met.");
    }
    
    return 0;
}