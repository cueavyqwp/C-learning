#include<stdio.h>
#include<float.h>
int main(void){
    int i_max = __INT_MAX__ ;
    float f_max = __FLT_MAX__ ;
    float f_min = __FLT_MIN__ ;
    printf("%d\n", i_max+1);
    printf("%f\n", f_max+1);
    printf("%f\n", f_min-1);
    return 0;
}