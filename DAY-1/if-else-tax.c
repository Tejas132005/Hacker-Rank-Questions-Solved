#include <stdio.h>

int main() {

    float amt;
    float tax = 0;
    scanf("%f", &amt);
    
    if (amt <= 250000 && amt>=0){
        tax = 0;
    }
    else if(amt>250000 && amt <= 500000){
        tax = ((amt-250000) * 0.05);
    }
    else if(amt>500000 && amt<=1000000){
        tax = (amt-500000)*0.2 + 250000 * 0.05;
    }
    else if(amt > 1000000){
        tax = (250000*0.05) + (500000*0.2) + (amt-1000000)*0.3;
    }
    else if(amt < 0){
        printf("INVALID");
        return 0;
    }
    
    printf("%.2f", tax);
    
    return 0;
}