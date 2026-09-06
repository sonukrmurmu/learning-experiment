#include <stdio.h>

int main(){
    int prime;
    int n = 2;
    int c = 1; // FIX 1: Initialized to 1 so it doesn't hold garbage memory

    printf("enter your number: ");
    scanf("%d", &prime); // FIX 2: Added the mandatory '&' before prime

    // FIX 3: Changed the loop condition
    while(n < prime){
        c = prime % n;
        
        if (c == 0) {
            break; // We found a number that divides evenly! Smash out of the loop.
        }
        
        n++;
    }

    if(c == 0){
        printf("it is not prime\n");
    }else{
        printf("it is prime number\n");
    }

    return 0;
}