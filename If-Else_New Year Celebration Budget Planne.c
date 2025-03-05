#include <stdio.h>

int main() {
    int bud,num,food,dec,mus,exp,amt;
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&bud,&num,&food,&dec,&mus,&exp);
    int tot_food_cost = num*food;
    amt = tot_food_cost+dec+mus+exp;
    if(amt<=bud){
        if(num>5 && num <=50){
            if((dec<bud*0.3) || (tot_food_cost < bud*0.5)){
                    if(num>25 && mus>0){
                        printf("Celebration Approved");
                    }
                    if(num <= 25 && mus >= 0){
                        printf("Celebration Approved");
                    }
                    if(num > 25 && mus <= 0){
                        printf("Celebration Denied");
                    }
                      
                }
                else{
                    printf("Celebration Denied");
                }
            }
            else{
                printf("Celebration Denied");
            }
        }
        else{
            printf("Celebration Denied");
        }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}