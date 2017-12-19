/*
=======================================================
UNIVERSIDAD DE LAS FUERZAS ARMADAS - "ESPE"
=======================================================
Departamento Ciencias De La Computación
=======================================================
Tema:			PILAS
Carrera:		Ingeniería en Sistemas
Docente:		Ing. Fernando Solis
Integrantes:	Granada David
				Conejo Ivan
				Francisco Sampedro
=======================================================
Fecha Creación:		18/12/2017
Fecha Modificación:	18/12/2017
=======================================================
INGRESO EXPRESIONES MATEAMTICAS
=======================================================
*/

#include "Pila.h"
#include "Jerarquia.h"
#include "validacion.h"
#include<string>
#include<conio.h>
#include<iostream>
#include<stdlib.h>
#include <tchar.h>
using namespace std;
void extrae(string cadena);
int main()
{
	string cadena;
	int datoIng = 0, cont = 0;
	char opcion;
	for (;;)
	{
		system("cls");
		char titulo[41] = "========================================";
		char MENU[41] = "TALLER EVALUACION EXPRESIONES";
		char op0[41] = "[S]alir.";
		char op1[41] = "[I]ngresar.";
		char ch;

		printf("\n%20s", titulo);
		printf("\n%20s", MENU);
		printf("\n%20s", titulo);
		printf("\n%s", op0);
		printf("\n%s", op1);
		printf("\n%20s", titulo);
		printf("\nIntroduzca una opcion [@]: ");
		do
		{
			ch = toupper(_getch()); /*La funcion toupper() convierte una letra a mayuscula*/
		} while (ch != 'S' && ch != 'I');
		switch (ch)
		{
		case 'S':
			exit(0);
			break;
		case 'I':
			do
			{
				system("cls");
				cout << "Ingrese una cadena a evaluar" << endl;
				cin >> cadena;
				extrae(cadena);
				cout << endl << "Desea ingresar otra expresion a evaluar (s/n): " << endl;
				validar_letras(&opcion);
			} while (opcion != 'n'&& opcion != 'N');
			break;
		default:
			system("cls"); //Limpia la pantalla.
			printf("Ingreso de opcion invalida....\n");
			system("pause"); //Pausa el programa.
			break;
		}
	}
	system("pause");
    return 0;
}
void extrae(string cadena)
{
	bool ba;
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < cadena.length(); i++)
		{
			switch (j)
			{
			case 0:

				if (cadena[i] == '(')
				{
					push(cadena[i]);
				}
				if (cadena[i] == ')')
				{
					ba = pop('(');
					if (ba == false)
					{
						printf("Expresion incorrecta...\n");
						return;
					}

				}
				
				break;
			case 1:

				if (cadena[i] == '[')
				{
					push(cadena[i]);
				}
				if (cadena[i] == ']')
				{
					ba = pop('[');
					if (ba == false)
					{
						printf("Expresion incorrecta...\n");
						return;
					}

				}
				
				break;
			case 2:

				if (cadena[i] == '{')
				{
					push(cadena[i]);
				}
				if (cadena[i] == '}')
				{
					ba = pop('{');
					if (ba == false)
					{
						printf("Expresion incorrecta...\n");
						return;
					}

				}
				
				break;

			}
		}
	}
	if (pila == NULL)
	{
		printf("Expresion evaluada exitosamente...\n");
	}
	else
	{
		printf("Expresion incorrecta...\n");
	}

}