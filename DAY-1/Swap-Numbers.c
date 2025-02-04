// Write a program to swap two numbers.

// Input Format
// Two unique integers a and b

// Output Format
// Two lines printing the swapped values of a and b

// Sample Input 0
// 10 5

// Sample Output 0
// a = 5
// b = 10

#include <stdio.h>

int main() {
    scanf("%d %d", &a, &b);
    
    temp = a;
    a = b;
    b = temp;
    
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}