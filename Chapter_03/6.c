#include<stdio.h>
#include<math.h>
int main(void){
    float qt_w , water_molecules ;
    printf("Enter Quart water: ");
    scanf("%f",&qt_w);
    qt_w *= 950;
    water_molecules = qt_w / (3 * pow(10,-23));
    printf("%e\n",water_molecules);
    return 0;
}