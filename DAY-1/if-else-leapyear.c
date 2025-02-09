#include <stdio.h>

int main() {
    int leap;
    scanf("%d", &leap);
    if(leap > 0)
    {
    if( (leap%4 == 0 && leap % 100 != 0) || leap % 400 == 0)
    {
    printf("Yes, %d is a leap year.", leap);
    }
    else {
    printf("No, %d is not a leap year.", leap); 
    }}
    if(leap <= 0)
    {
    printf("The given year %d is Invalid year.", leap);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}