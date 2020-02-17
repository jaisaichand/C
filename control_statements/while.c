#include <stdio.h>
#define STRING_SIZE 80
#include <string.h>

int main(){
    int a;
    char msg[STRING_SIZE];
    printf("How many times do you wanna print messege?");
    scanf("\n %d",&a);
    printf("What is the messege that you wanna print %d times ?",a);
    scanf("%s",msg); //this method will only read string upto a space.


//scanf("%[^\n]%*c", msg) ;

//fgets(msg,STRING_SIZE,stdin);

while(a>=0){
    printf("%s \n",msg);
    a= a-1;
}


    return 0;
}