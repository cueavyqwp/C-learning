#include<stdio.h>

void jolly(void){
    for ( int i=0;i<3;i++ ){
        printf("For he's a jolly good fellow!\n");
    }
}

void deny(void){
    printf("Which nobody can deny!\n");//这是无可否认的
}

int main(void){
    jolly();
    deny();
    return 0;
}