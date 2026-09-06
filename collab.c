#include <stdio.h>
//there was only syntax error in original gemini rewrote the code
//with extra syntax
//our code was good enough but break period makes us hurry 
//thats why code was not running properly
int main(){
    int prime;
    int n=2;
    int c=1; //originally c =0 could have been  possibility thats why loop was not starting
    printf("enter your number");
    scanf("%d",&prime);
    while(prime>n && c != 0){ //orginally , || or was here  and (<) was here

        c = prime%n;  //it was making loop infinite hence something like dump issue 
        n++;
    
        
    }
    if(c == 0){
            printf("it is not prime");
        }else
        {
            printf("it is prime number");
        }

    return 0;
}