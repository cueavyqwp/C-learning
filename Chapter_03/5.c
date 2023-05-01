#include<stdio.h>
int main(void){
    long long int year , sec ;
    printf("Enter your age: ");
    scanf("%d",&year);
    sec = year * 31560000;
    printf("%lld\n",sec);
    return 0;
}