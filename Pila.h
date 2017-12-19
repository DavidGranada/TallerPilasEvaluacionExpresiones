#pragma once
#include<string.h>
#include<iostream>
using namespace std;
class Pila
{
private:
	char dato;
	Pila *siguiente;
public:
	void setDat(char dat);
	void setSgt(Pila *sgt);
	char getDat();
	Pila * getSgt();
};
void Pila::setDat(char dat)
{
	this->dato = dat;
}
void Pila::setSgt(Pila *sgt)
{
	this->siguiente = sgt;
}
char Pila::getDat()
{
	return dato;
}
Pila * Pila::getSgt()
{
	return siguiente;
}