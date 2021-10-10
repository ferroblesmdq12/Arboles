#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <strings.h>
#include <conio.h>
#include "gotoxy.h"


int main()
{
    color(10);
    printf("\t\t ARBOLES!\n");
    system("pause");
    system("cls");
    color(23);
    printf("\t Realizado por Fernando Robles \n");
    system("pause");
    system("cls");
    color(1);

    printf("\t\t\t\t ╔══════════════════════════════════════════════════════════════════════════════╗\n");
    printf("\t\t\t\t ║                              FUNCIONES                                       ║\n");
    printf("\t\t\t\t ║                                                                              ║\n");
    printf("\t\t\t\t ╚══════════════════════════════════════════════════════════════════════════════╝\n");
    printf("\n Hacer algo ...");
    /// se inicializa ///

    nodoArbol * inicArbol()
    {
        return NULL;
    }

    nodoArbol * crearNodoArbol(int dato)
    {
        nodoArbol * aux = (nodoArbol *) malloc(sizeof(nodoArbol));

        aux ->dato=dato;
        aux ->der=NULL;
        aux ->izq=NULL;
        return aux;
    }

    return 0;
}
