#pragma once
#include "Pila.h"
#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;
Pila *pila = NULL;
void push(char dat)
{
	Pila *nuevo = new Pila();
	nuevo->setDat(dat);
	if (pila == NULL)
	{
		nuevo->setSgt(NULL);
	}
	else
	{
		nuevo->setSgt(pila);
	}
	pila = nuevo;
}
bool pop(char op)
{
	Pila *aux = pila;
	if (aux== NULL)
	{
		return false;
	}
	else
	{
		if (op ==aux->getDat())
		{
			
			aux = aux->getSgt();
			pila = aux;
			return true;
		}
		
	}
	return false;
}

void imprimi()
{
	Pila *aux = pila;
	do

	{
		cout << aux->getDat() << endl;
		aux = aux->getSgt();
	}while(aux != NULL);
}
