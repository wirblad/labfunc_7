#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 


bool isVowel(char word){

    if(word == 'a' || word =='e' || word =='i' || word =='o' || word =='u' || word =='y' || word =='å' || word =='ä' || word =='ö' )
        return true;
    else    
        return false;
    
}


void translate(char *input , char *output){

    int endOfOutput = 0;

    for( int i = 0 ; i < strlen(input); i++){

        if(!isVowel(input[i]) && isalpha(input[i])){
             
            output[endOfOutput] = input[i];
            endOfOutput++;
            output[endOfOutput] = 'o';
            endOfOutput++;
            output[endOfOutput] = input[i];
            endOfOutput++;

        }
        else{
           output[endOfOutput] = input[i];
           endOfOutput++; 
        }
    }


}

void main(){

char input[100] = "";
char output[100] = "";

GetInput("Enter a text: ", input, sizeof(input));

//printf("tst: %s", input);
translate( input,output);

printf("%s\n", output);
    
}