#include <stdio.h>

void get_name(char [], char []); //function declaration

void main(){

        get_name("Jai ","chand");   //function call
}

void get_name(char f[10], char l[10]){  //funciton definition
    printf("%s %s",f,l);
}