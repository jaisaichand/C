#include <stdio.h>

int main(){
int perc=0;
printf("Enter your percentage");
scanf("\n %d",&perc);
switch(perc){
    case 100:
    printf("Top of class");
    break;

    case 80:
    printf("first class");
    break;

    case 70:
    printf("second class");
    break;

    case 60:
    printf("third class");
    break;

    case 50:
    printf("Fail");
    break;

    default: 
    printf("You are either fail or the number you entered is not valid");
}
    return 0;
}