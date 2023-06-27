#include <stdio.h>
#include "funciones.h"


void primer_menu(){

printf("\n\n\tMENU\n\t");
printf("\n\t1._ VER PRODUCTO\t");
printf("\n\t2._ INGRESO PRODUCTO\t");
printf("\n\t3._ MODIFICACION PRODUCTO\t");
printf("\n\t4._ SALIR\t");

}


void el_switch(){

int opcion;
printf("\n");


do{
scanf("%i", &opcion);
switch(opcion){

case 1: MENUver_productos();       break;
case 2: agregar_productos();       break;
case 3: modificar_productos();     break;
case 4: printf("gracias por visitarnos");   break;
default: printf("por favor escoge una opcion permitida");


}

}while(opcion != 4);

}



void MENUver_productos(){


printf("\ncomic 1");
printf("\n\tID: 001\t\t");
printf("\n\tNombre: Batman\t\t");
printf("\n\tDescripcion: El Caballero Oscuro de Gotham City, conocido por su astucia y habilidades de combate.\t\t");
printf("\n\tCantidad en existencia: 10 comics\t\t");
printf("\n\tPrecio: $15.99\t\t");

printf("\ncomic 2");
printf("\n\tID: 002\t\t");
printf("\n\tNombre: Superman\t\t");
printf("\n\tDescripcion: El Hombre de Acero, poseedor de superpoderes como la fuerza sobrehumana y la capacidad de volar.\t\t");
printf("\n\tCantidad en existencia: 8 comics\t\t");
printf("\n\tPrecio: $14.99\t\t");

printf("\ncomic 3");
printf("\n\tID: 003\t\t");
printf("\n\tNombre: Spiderman\t\t");
printf("\n\tDescripcion: El Hombre Araña, famoso por su agilidad y por lanzar telarañas para balancearse por la ciudad.\t\t");
printf("\n\tCantidad en existencia: 12 comics\t\t");
printf("\n\tPrecio: $12.99\t\t");

printf("\ncomic 4");
printf("\n\tID: 004\t\t");
printf("\n\tNombre: Flash\t\t");
printf("\n\tDescripcion: El Velocista Escarlata, con la capacidad de correr a velocidades sobrehumanas y controlar el tiempo.\t\t");
printf("\n\tCantidad en existencia: 6 comics\t\t");
printf("\n\tPrecio: $16.99\t\t");

printf("\ncomic 5");
printf("\n\tID: 005\t\t");
printf("\n\tNombre: Linterna Verde\t\t");
printf("\n\tDescripcion: Miembro de los Green Lantern Corps, utiliza un anillo de poder para manifestar sus pensamientos en realidad.\t\t");
printf("\n\tCantidad en existencia: 9 comics\t\t");
printf("\n\tPrecio: $13.99\t\t");


}




void agregar_productos(){

    int MAX_COMICS = 2;
    int IDs[MAX_COMICS];
    char Nombres[MAX_COMICS][100];
    char Descripciones[MAX_COMICS][100];
    int Cantidades[MAX_COMICS];
    float Precios[MAX_COMICS];
    int numComics;

    printf("Ingrese el número de comics que desea guardar (máximo %d): ", MAX_COMICS);
    scanf("%d", &numComics);

    // el ciclo se repetirá por cada comic que se haya agregado
    for (int i = 0; i < numComics; i++) {
        printf("\nComic %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &IDs[i]);
        printf("Nombre: ");
        scanf("%s", Nombres[i]);
        printf("Descripción: ");
        scanf("%s", Descripciones[i]);
        printf("Cantidad: ");
        scanf("%d", &Cantidades[i]);
        printf("Precio: ");
        scanf("%f", &Precios[i]);
    }

    MENUver_productos();
    mostrarComics(IDs, Nombres, Descripciones, Cantidades, Precios, numComics);


}




void mostrarComics(int IDs[], char Nombres[][100], char Descripciones[][100], int Cantidades[], float Precios[], int numComics) {
    int numeroComic = 6; 
    printf("\nNuevos comics guardados:\n");
    for (int i = 0; i < numComics; i++) {
        printf("\nComic %d:\n", numeroComic);
        numeroComic++; 
        printf("ID: %d\n", IDs[i]);
        printf("Nombre: %s\n", Nombres[i]);
        printf("Descripción: %s\n", Descripciones[i]);
        printf("Cantidad: %d\n", Cantidades[i]);
        printf("Precio: %.2f\n", Precios[i]);
    }
}



void modificar_productos(){

int opcion;
printf("\nque producto deseas modificar?(por favor introduce su ID)");

do{

printf("\n");
printf("\nbatman: 001");
printf("\nsuperman: 002");
printf("\nspiderman: 003");
printf("\nflash: 004");
printf("\nlinterna verde: 005");
printf("\n");
scanf("%i", &opcion);

switch(opcion){

case 001: eliminar_productos();       break;
case 002: eliminar_productos();       break;
case 003: eliminar_productos();       break;
case 004: eliminar_productos();       break;
case 005: eliminar_productos();       break;
default: printf("por favor ingresa correctamente el ID ");


}

}while(opcion < 1 || opcion > 5);


}




void eliminar_productos(){

    int opcion;
    int IDs;
    char Nombres[100];
    char Descripciones[100];
    int Cantidades;
    float Precios;

printf("\n\n\tdeseas modificarlo o eliminarlo?\n\t");

do{

printf("\n\n\t1._ MODIFICAR\n\t");
printf("\n\n\t2._ ELIMINAR\n\t");

scanf("%i", &opcion);

switch(opcion){

case 1:        printf("\nComic:\n");
        printf("ID: ");
        scanf("%d", &IDs);
        printf("Nombre: ");
        scanf("%s", &Nombres);
        printf("Descripción: ");
        scanf("%s", &Descripciones);
        printf("Cantidad: ");
        scanf("%d", &Cantidades);
        printf("Precio: ");
        scanf("%f", &Precios);       
        printf("ha sido modificado correctamente"); break;


case 2: printf("ha sido eliminado correctamente");       break;

default: printf("por favor escoja una opcion valida");


}


}while(opcion != 1 && opcion != 2);
}