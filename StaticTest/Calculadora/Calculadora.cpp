#include <iostream>
#include <windows.h>
#include <mmsystem.h>
#include <LasProtes.h>

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
		
		CaloriasC::Funciones::menu_calculadora(ejercicios);
		if (ejercicios == "1")
		{
			CaloriasC::Funciones::datos_usuario(genero, edad, altura, peso, tiempo_actividad, TMB);
			CaloriasC::Funciones::running(peso, calories_base, calories_perdudes, tiempo_actividad, TMB);
		}
		else if (ejercicios == "2")
		{
			CaloriasC::Funciones::datos_usuario(genero, edad, altura, peso, tiempo_actividad, TMB);
			CaloriasC::Funciones::caminar(peso, calories_base, calories_perdudes, tiempo_actividad, TMB);
		}
		else if (ejercicios == "3")
		{
			CaloriasC::Funciones::datos_usuario(genero, edad, altura, peso, tiempo_actividad, TMB);
			CaloriasC::Funciones::nadar(peso, calories_base, calories_perdudes, tiempo_actividad, TMB);
		}
		else if (ejercicios == "4")
		{
			CaloriasC::Funciones::datos_usuario(genero, edad, altura, peso, tiempo_actividad, TMB);
			CaloriasC::Funciones::gym(peso, calories_base, calories_perdudes, tiempo_actividad, TMB);
		}
		else if (ejercicios == "5")
		{
			CaloriasC::Funciones::datos_usuario(genero, edad, altura, peso, tiempo_actividad, TMB);
			CaloriasC::Funciones::bici(peso, calories_base, calories_perdudes, tiempo_actividad, TMB);
		}
		else if (ejercicios == "6")
		{
			CaloriasC::Funciones::datos_usuario(genero, edad, altura, peso, tiempo_actividad, TMB);
			CaloriasC::Funciones::yoga(peso, calories_base, calories_perdudes, tiempo_actividad, TMB);
		}
		else if (ejercicios == "7")
		{
			CaloriasC::Funciones::datos_usuario(genero, edad, altura, peso, tiempo_actividad, TMB);
			CaloriasC::Funciones::boxeo(peso, calories_base, calories_perdudes, tiempo_actividad, TMB);
		}
		else
		{
			cout << "Opcio incorrecta, torna a introduir un valor valid...";
			Sleep(2000);
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
}