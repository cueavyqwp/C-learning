#include<stdio.h>
int main(void){
    int age;
    printf("Enter your age\n>");
    scanf("%d",&age);
    age *= 365;//Ignore leap years 忽略闰年
    printf(">Wow.It's been %d days\n",age);
    return 0;
}