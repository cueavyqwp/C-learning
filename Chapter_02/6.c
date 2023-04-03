#include<stdio.h>
#include<math.h>
int toes = 10;
int toes_2 = toes * 2;
int toes_sqr = pow(toes,2);

int main(void){
    printf("toes>%d\n",toes);
    printf("toes*2>%d\n",toes_2);
    printf("toes**2>%d\n",toes_sqr);
    return 0;
}
