#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <strings.h>
#include <conio.h>
#include "gotoxy.h"


typedef struct nodoArbol
{
    int dato;
    struct nodoArbol *izq;
    struct nodoArbol *der;
}nodoArbol;

/// PROTOTIPADO ///
nodoArbol* inicArbol();
nodoArbol* crearNodoArbol(int dato);
nodoArbol* insertar(nodoArbol * arbol, int dato);
void preOrder(nodoArbol * arbol);
void inOrder(nodoArbol * arbol);
void postorder(nodoArbol * arbol);
nodoArbol * buscar(nodoArbol * arbol, int dato);


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

    printf("\t\t\t\t  ______________________________________________________________________________\n");
    printf("\t\t\t\t |                              FUNCIONES                                       |\n");
    printf("\t\t\t\t |                                                                              |\n");
    printf("\t\t\t\t |______________________________________________________________________________|\n");

    printf("\n Hacer algo ...\n");

    int a[10] = {1,10,2,45,9,15,46,33,25,20};
    nodoArbol * arbol = inicArbol();
    for( int i=0; i<10; i++)
    {
        arbol = insertar(arbol, a[i]);
    }

    printf("\n\n PREORDER: \n");
    preOrder(arbol);

    printf("\n\n INORDER: \n");
    inOrder(arbol);

    printf("\n\n POSTORDER \n");
    postorder(arbol);

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


/// PREORDER ///

void preOrder(nodoArbol * arbol)
{
    if(arbol!= NULL)
    {
        printf("\n %d", arbol->dato);
        preOrder(arbol->izq);
        preOrder(arbol->der);
    }
}

/// INORDER ///

void inOrder(nodoArbol * arbol)
{
    if(arbol != NULL)
    {
        inOrder(arbol->izq);
        printf("\n %d", arbol->dato);
        inOrder(arbol->der);
    }
}

/// POSTORDER ///

void postorder(nodoArbol * arbol)
{
    if(arbol != NULL)
    {
        postorder(arbol->izq);
        postorder(arbol->der);
        printf("\n %d", arbol->dato);
    }
}

/// Buscar NODO ///

nodoArbol * buscar(nodoArbol * arbol, int dato)
{
    nodoArbol * rta = NULL;
    if(arbol!=NULL)
    {
        if(dato == arbol->dato)
        {
            rta = arbol;
        }
        else
        {
            if(dato == arbol->dato)
            {
                rta = buscar(arbol->der, dato);
            }
            else
            {
                rta = buscar(arbol->izq, dato);
            }
        }
    }
    return rta;
}
