#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <strings.h>
#include <conio.h>
#include "gotoxy.h"


struct nodoArbol
{
    int dato;
    nodoArbol *izq;
    nodoArbol *der;
};

/// PROTOTIPADO ///
nodoArbol * inicArbol();
nodoArbol * crearNodoArbol(int dato);
nodoArbol * insertar(nodoArbol * arbol, int dato);


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



    return 0;
}

/*** FUNCIONES DE ARBOL ***/


/// se inicializa ///

nodoArbol * inicArbol()
{
    return NULL;
}

/// Se crea ///

nodoArbol * crearNodoArbol(int dato)
{
    nodoArbol * aux = (nodoArbol *) malloc(sizeof(nodoArbol));

    aux ->dato=dato;
    aux ->der=NULL;
    aux ->izq=NULL;
    return aux;
}


/// Insertar ///

nodoArbol * insertar(nodoArbol * arbol, int dato)
{
    if(arbol==NULL)
        arbol = crearNodoArbol(dato);
    else
    {
        if(dato>arbol->dato)
            arbol->der = insertar(arbol->der, dato);
        else
            arbol->izq= insertar(arbol->izq,dato);
    }
    return arbol;
}


