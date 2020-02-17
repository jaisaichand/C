#include <stdio.h>

int main(){
    int a,b,c;
    printf("**************Greatest of three numbers************");
    printf("\n Enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    

    if(a>b){
        if(a>c){
            printf("Greatest number of three is %d",a);
        }
        else{
            printf("Greatest of three numbers is %d",c);
        }
    }

    else if(b>c){
        printf("%d is greatest of three numbers ",b);
    }

    else{
        printf("%d is greatest of all",c);
    }

    return 0;
}