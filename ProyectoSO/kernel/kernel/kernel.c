#include <stdio.h>

#include <kernel/tty.h>

void kernel_main(void) {
	terminal_initialize();
	int opcion = 3;

    do
    {
        printf( "\n   1. Calculadora ");
        printf( "\n   2. Emitir Sonido");
        printf( "\n   3. Salir");
        printf( "\n\n   Introduzca opcion (1-3): ");

        switch ( opcion )
        {
            case 1: 

              
            
                    break;

            case 2: printf( "Emitir Sonido");
                    break;

         }

    } while ( opcion != 3 );
}
