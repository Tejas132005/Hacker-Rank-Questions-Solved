#include <stdio.h>

int main(){
    int age, income, RT;
    
    scanf("%d\n%d\n%d", &age, &income, &RT);
    
    if(age < 30){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    
    else if(age>=30 && age<=50 && income>75000 && RT==3){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    
    else if(age>50 && RT==3 && income>75000){
        printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
    }
    
    
                //medium risk
    
    else if(age>=30 && age<=50 && income<=75000 && RT==2){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    
    else if(age>=30 && age<=50 && income>75000 && (RT==1 || RT==2)){
        printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
    }
    
    
    
                // Low Risk
    else if(age>50 || (income<=30000 && (RT==1 || RT==2))){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
}