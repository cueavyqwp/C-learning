#include <stdio.h>
#include <string.h>

char first_name[20] = "Your first name";
char family_name[20] = "Your family name";

int main(void){
    printf("%s %s\n",first_name,family_name);
    printf("%s\n%s\n",first_name,family_name);
    printf("%s ",first_name);
    printf("%s\n",family_name);
    return 0;
}