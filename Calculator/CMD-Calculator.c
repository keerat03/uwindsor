#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <stdbool.h>

int firstTime == 0;
float binaryOperation(); 
void displayOptions(); 

int main(void){

    char main
    
    do{

        displayOptions();

    } while( *option != 'x');





}

void displayOptions(){
    
    if(firstTime == 0){
        puts("Welcome to our Command-Line Calculator (CLC)");
        printf("Developer: \n");
        printf("Version: 3\n");
        printf("Date : \n");

        printf("Select one of the following items:\n");
        printf("B) - Binary Mathematical Operations, such as addition and subtraction.\n");
        printf("U) - Unary Mathematical Operations, such as square root, and log.\n");
        printf("A) - Advances Mathematical Operations, using variables, arrays.\n");
        printf("V) - Define variables and assign them values.\n");
        printf("X) - Exit\n");

        firstTime++;
    }

    else{
        puts("Please select your option ( B (Binary operation), U (Unary operation) , A(Advanced),V(Variables), X(Exit)) ");
    }

    while(scanf("%d"))
}

float binaryOperation(){
    

}
