#include <stdio.h>
#include <string.h>
int add(int , int );

void main(){
int add1 = add(10,6);
printf("%d \n",add1);
}

int add(int a, int b){
    return a+b;
}