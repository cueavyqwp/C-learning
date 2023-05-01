#include<stdio.h>
int main(void){
    float cup,pt,oz,soup,teaspoon;
    printf("Enter a value(cup): ");
    scanf("%f",&cup);
    pt = cup/2;
    oz = cup*8;
    soup = oz*2;
    teaspoon = soup*3;
    printf("%0.1f(pt)\n",pt);
    printf("%0.1f(oz)\n",oz);
    printf("%0.1f(soup)\n",soup);
    printf("%0.1f(teaspoon)\n",teaspoon);
    return 0;
}