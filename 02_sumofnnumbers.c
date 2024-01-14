#include<stdio.h>

int main(){
    int num, sum = 0;

    printf("Enter the natural number you want the sum of\n");
    scanf("%d", &num);

    for(int i = 0; i <= num; i++ ){ 
        sum += i;
    }

    printf("Sum of first %d natural number is %d", num, sum);

}