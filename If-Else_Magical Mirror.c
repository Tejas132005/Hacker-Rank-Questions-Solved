#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int c1=0, c2=0, c3=0;
    
    if (n<=0){
        printf("The verdict for the number %d is: INVALID", n);
        return 0;
    }
    
    if(n%2==0 && n>10){
        c1 = 1;
    }
    if(n%3 == 0 && n>15){
        c2 = 1;
    }
    if(n%7 == 0){
        c3 = 1;
    }
    
    if(c1 && c2 && c3){
        printf("The verdict for the number %d is: SUPERNATURAL", n);
    }
    else if((c1&&c2) || (c2 && c3) || (c3 && c1)){
        printf("The verdict for the number %d is: MIRACULOUS", n);
    }
    else if(c1 || c2 || c3){
        printf("The verdict for the number %d is: MAGICAL", n);
    }
    else{
        printf("The verdict for the number %d is: NORMAL", n); 
    }
    
    return 0;
}