#include <stdio.h>

int main() {
    int units;
    float amt;
    scanf("%d", &units);
    if (units < 0){
        printf("Invalid Input!");
        return 0;
    }
    if (units <= 100){
        amt = units * 5;
    }
    if (units <= 300 && units > 100){
        amt = 100 * 5 + (units -100) * 7;
    }
    if (units > 300){
        amt = 100 * 5 + 200 * 7 + (units-300) * 10;
    }
    
    if( amt <= 1200){
        float res = amt - (amt*10/100);
        printf("The electricity bill is: %.2f.",res);
    }
    else{
        printf("The electricity bill is: %.2f.",amt);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}