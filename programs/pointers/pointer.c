#include <stdio.h>

void main(){
    int *p;
    int k = 50;
    printf("k value is %d \n",k);
    p=&k;
    k=k+1;
    printf("p value after adding 1 to k is %d \n",*p);
    printf("k value finally is %d \n",k);
}