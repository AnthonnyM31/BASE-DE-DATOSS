#include <stdio.h>
#include "funciones.h"




int main (int argc, char *argv[]) {

int decision;
do{
    
primer_menu();
el_switch();

printf("\n\n\tdesea volver al menu principal?\n\t");
printf("\n\n\t1) si\n\t");
printf("\n\n\t2) no\n\t");
scanf("%i", &decision);
}while(decision = 1);
printf("hasta la proxima");
    return 0;
}







