#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include "actividades.h"

using namespace std;

//Creacion de variables globales
string ejercicios;
int edad;
int altura;
int peso;
int tiempo_actividad;
int calories_base;
string genero;
int TMB;
string altra_activitat;
int calories_perdudes;

int main()
{
	while (altra_activitat != "No")
	{
		menu_calculadora();
		if (ejercicios == "1")
		{
			datos_usuario();
			running();
		}
		else if (ejercicios == "2")
		{
			datos_usuario();
			caminar();
		}
		else if (ejercicios == "3")
		{
			datos_usuario();
			nadar();
		}
		else if (ejercicios == "4")
		{
			datos_usuario();
			gym();
		}
		else if (ejercicios == "5")
		{
			datos_usuario();
			bici();
		}
		else if (ejercicios == "6")
		{
			datos_usuario();
			yoga();
		}
		else if (ejercicios == "7")
		{
			datos_usuario();
			boxeo();
		}
		else
		{
			cout << "Opcio incorrecta, torna a introduir un valor valid...";
			Sleep(2000);
			menu_calculadora();
		}

		cout << "\n\n\t\t\t       As echo mas actividad fisica? Quieres volver a calcular la perdida calorica? Si/No\n\n";
		cout << "\t\t\t\t\t\t\t\t        ";
		cin >> altra_activitat;
		if (altra_activitat == "Si")
		{
			calories_base = calories_perdudes;
		}
		else if (altra_activitat == "No")
		{
			break;
		}
		Sleep(1000);
	}

	return 0;
}


