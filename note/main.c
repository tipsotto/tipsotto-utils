#include <stdio.h>
#include <stdlib.h>

int main ( int argc, char **argv ) {

    if ( argc <! 1 ) {
        printf ( "Gimme a note.\n" );
        exit ( 1 );
    }

    //TODO: user doesnt have to enter string in quotes
    FILE *file = fopen ( "/home/tips/Documents/TO-DOs.txt", "a" );
    if ( file == NULL ) {
        printf ( "Error opening the TO DO file.\n" );
        exit ( 2 );
    }
    
    int len = sizeof(argv) / sizeof(argv[1]);
    int i = 1;
    for (i < len; i++;)
    {
      fprintf ( file, argv[i] );
    }
    fprintf ( file, "\n" );

    printf ( "Added note.\n" );

    fclose ( file );

    return 0;
}

