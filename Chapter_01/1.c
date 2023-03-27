#include <stdio.h>

int main( void ) {
    int foot ;
    
    printf( "cm to ft\ncm>>>" );

    scanf( "%d" , &foot );

    printf( "ft>>>%.2f\n" , foot * 2.54  );

    return 0 ;
}