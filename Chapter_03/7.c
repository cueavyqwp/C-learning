#include<stdio.h>
int main(void){
    float h_ft , h_cm ;
    printf("Enter your height(ft): ");
    scanf("%f",&h_ft);
    h_cm = h_ft * 2.54;
    printf("%0.2f(cm)\n",h_cm);
    return 0;
}