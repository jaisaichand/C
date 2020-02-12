#include <stdio.h>
int main(){
    char name;
    int age;
    float perc;
    printf("Enter your name: \n");
    scanf("%c",&name);
    printf("\n Enter your age \n");
    scanf("%d",&age);
    printf("\n Enter your percentage \n");
    scanf("%f \n",&perc);

    printf("\n ************************************************************");
    printf("*                                                          *");
    printf("*                                                          *");
    printf("*              Name: %c                                    *",name);
    printf("*              Age: %d                                     *",age);
    printf("*              Percentage: %f                              *",perc);
    printf("*                                                          *");
    printf("*                                                          *");
    printf("*                                                          *");
    printf("************************************************************");

    return 0;
}