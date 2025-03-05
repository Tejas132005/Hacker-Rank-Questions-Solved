#include <stdio.h>

int main() {

    int x,y,z;
    scanf("%d %d %d", &x, &y, &z);
    
    int c1 = 0, c2= 0;
    
    if (x%y == 0){
        c1 = 1;
    }
    if (x%z == 0){
        c2 = 1;
    }
    
    if(c1 && c2){
        printf("X defeats all!");
    }
    else if(c1){
        printf("Y triumphs over X!");
    }
    else if(c2){
        printf("Z outsmarts X!");
    }
    else if(!c1 && !c2){
        printf("X remains undefeated!");
    }
    
    return 0;
}