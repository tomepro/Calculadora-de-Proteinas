#pragma once
#ifndef ACTIVIDADES_H
#define ACTIVIDADES_H

#include <iostream>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

// Declaración de las funciones
void menu_calculadora();
void datos_usuario();
void running();
void caminar();
void nadar();
void gym();
void bici();
void yoga();
void boxeo();

// Declaración de las variables globales
extern string ejercicios;
extern int edad;
extern int altura;
extern int peso;
extern int tiempo_actividad;
extern int calories_base;
extern string genero;
extern int TMB;
extern string altra_activitat;
extern int calories_perdudes;


void menu_calculadora() {
	system("cls");

	cout << "\n\toooooooooooo                                                                 oooo                      o8o\n";
	cout << "\t`888'     `8                                                                 `888                      `''\n";
	cout << "\t 888         oooo  oooo   .ooooo.  oooo d8b  .oooo.       .ooooo.   .oooo.    888   .ooooo.  oooo d8b oooo   .oooo.    .oooo.o\n";
	cout << "\t 888oooo8    `888  `888  d88' `88b `888''8P `P  )88b     d88' `'Y8 `P  )88b   888  d88' `88b `888''8P `888  `P  )88b  d88(  '8\n";
	cout << "\t 888    '     888   888  888ooo888  888      .oP'888     888        .oP'888   888  888   888  888      888   .oP'888  `'Y88b.\n";
	cout << "\t 888          888   888  888    .o  888     d8(  888     888   .o8 d8(  888   888  888   888  888      888  d8(  888  o.  )88b\n";
	cout << "\to888o         `V88V'V8P' `Y8bod8P' d888b    `Y888''8o    `Y8bod8P' `Y888''8o o888o `Y8bod8P' d888b    o888o `Y888''8o 8""888P'\n\n";

	cout << "\t\t\t\t\t\t\t  _________________________\n";
	cout << "\t\t\t\t\t\t\t |   MENU DE ACTIVIDADES   | \n";
	cout << "\t\t\t\t\t\t\t  -------------------------\n";
	cout << "\t\t\t\t\t\t\t |  1.- Running            | \n";
	cout << "\t\t\t\t\t\t\t |  2.- Caminar            | \n";
	cout << "\t\t\t\t\t\t\t |  3.- Nadar              | \n";
	cout << "\t\t\t\t\t\t\t |  4.- GYM (pesas)        | \n";
	cout << "\t\t\t\t\t\t\t |  5.- Ciclismo           | \n";
	cout << "\t\t\t\t\t\t\t |  6.- Yoga               | \n";
	cout << "\t\t\t\t\t\t\t |  7.- Boxeo              | \n";
	cout << "\t\t\t\t\t\t\t |_________________________|\n\n\n";

	cout << "\t\t\t\t\t\t\t Opcion:\t";
	cin >> ejercicios;
}

void datos_usuario() {
	system("cls");

	cout << "\n\toooooooooo.                 .                                                                              o8o\n";
	cout << "\t`888'   `Y8b              .o8                                                                              `''\n";
	cout << "\t 888      888  .oooo.   .o888oo  .ooooo.   .oooo.o    oooo  oooo   .oooo.o oooo  oooo   .oooo.   oooo d8b oooo   .ooooo.\n";
	cout << "\t 888      888 `P  )88b    888   d88' `88b d88(  '8    `888  `888  d88('8   `888  `888  `P  )88b  `888''8P `888  d88' `88b\n";
	cout << "\t 888      888  .oP'888    888   888   888 `'Y88b.      888   888  `'Y88b.   888   888   .oP'888   888      888  888   888\n";
	cout << "\t 888     d88' d8(  888    888 . 888   888 o.  )88b     888   888  o.  )88b  888   888  d8(  888   888      888  888   888\n";
	cout << "\to888bood8P'   `Y888''8o   '888' `Y8bod8P' 8''888P'     `V88V'V8P' 8''888P'  `V88V'V8P' `Y888''8o d888b    o888o `Y8bod8P'\n\n";


	cout << "\t\t\t\t\t\t\t  |-------------------------|\n";
	cout << "\t\t\t\t\t\t\t     1.- Genero H/M:\t";
	cin >> genero;
	cout << "\t\t\t\t\t\t\t     2.- Edad:\t\t";
	cin >> edad;
	cout << "\t\t\t\t\t\t\t     3.- Altura:\t";
	cin >> altura;
	cout << "\t\t\t\t\t\t\t     4.- Peso:\t\t";
	cin >> peso;
	cout << "\t\t\t\t\t\t\t     5.- Tiempo:\t";
	cin >> tiempo_actividad;
	cout << "\t\t\t\t\t\t\t  |_________________________|\n\n\n";

	if (genero == "H")
	{
		TMB = (peso * 10) + (altura * 6.25) - (edad * 5) + 5;
	}
	else if (genero == "M")
	{
		TMB = (peso * 10) + (altura * 6.25) - (edad * 5) - 161;
	}
	else
	{
		cout << "\t\t\t\t\t            Calculo erronio, gernero mal introducido\n\n";
	}

	cout << "\t\t\t\t\t          Tu quema promedia de calorias diarias es de " << TMB;

	Sleep(1000);
}

void running() {
	if (peso <= 70)
	{
		calories_base = 740;
	}
	else if (peso > 71 && peso <= 80)
	{
		calories_base = 920;
	}
	else if (peso > 81)
	{
		calories_base = 1110;
	}
	calories_base = (calories_base + calories_perdudes) * tiempo_actividad;
	cout << "\n\t\t\t          Como hoy as echo (running) durante " << tiempo_actividad << "h, as quemado un total de: " << TMB + calories_base << " calorias";
}

void caminar() {
	if (peso <= 70)
	{
		calories_base = 270;
	}
	else if (peso > 71 && peso <= 80)
	{
		calories_base = 334;
	}
	else if (peso > 81)
	{
		calories_base = 400;
	}
	calories_base = (calories_base + calories_perdudes) * tiempo_actividad;
	cout << "\n\t\t\t          Como hoy as echo (caminado) durante " << tiempo_actividad << "h, as quemado un total de: " << TMB + calories_base << " calorias";
}

void nadar() {
	if (peso <= 70)
	{
		calories_base = 360;
	}
	else if (peso > 71 && peso <= 80)
	{
		calories_base = 446;
	}
	else if (peso > 81)
	{
		calories_base = 532;
	}
	calories_base = (calories_base + calories_perdudes) * tiempo_actividad;
	cout << "\n\t\t\t          Como hoy as echo (natacion) durante " << tiempo_actividad << "h, as quemado un total de: " << TMB + calories_base << " calorias";
}

void gym() {
	if (peso <= 70)
	{
		calories_base = 180;
	}
	else if (peso > 71 && peso <= 80)
	{
		calories_base = 224;
	}
	else if (peso > 81)
	{
		calories_base = 266;
	}
	calories_base = (calories_base + calories_perdudes) * tiempo_actividad;
	cout << "\n\t\t\t          Como hoy as echo (pesas) durante " << tiempo_actividad << "h, as quemado un total de: " << TMB + calories_base << " calorias";
}

void bici() {
	if (peso <= 70)
	{
		calories_base = 720;
	}
	else if (peso > 71 && peso <= 80)
	{
		calories_base = 852;
	}
	else if (peso > 81)
	{
		calories_base = 1066;
	}
	calories_base = (calories_base + calories_perdudes) * tiempo_actividad;
	cout << "\n\t\t\t          Como hoy as echo (ciclismo) durante " << tiempo_actividad << "h, as quemado un total de: " << TMB + calories_base << " calorias";
}

void yoga() {
	if (peso <= 70)
	{
		calories_base = 240;
	}
	else if (peso > 71 && peso <= 80)
	{
		calories_base = 258;
	}
	else if (peso > 81)
	{
		calories_base = 356;
	}
	calories_base = (calories_base + calories_perdudes) * tiempo_actividad;
	cout << "\n\t\t\t          Como hoy as echo (yoga) durante " << tiempo_actividad << "h, as quemado un total de: " << TMB + calories_base << " calorias";
}

void boxeo() {
	if (peso <= 70)
	{
		calories_base = 540;
	}
	else if (peso > 71 && peso <= 80)
	{
		calories_base = 670;
	}
	else if (peso > 81)
	{
		calories_base = 800;
	}
	calories_base = (calories_base + calories_perdudes) * tiempo_actividad;
	cout << "\n\t\t\t          Como hoy as echo (boxeo) durante " << tiempo_actividad << "h, as quemado un total de: " << TMB + calories_base << " calorias";
}

#endif // ACTIVIDADES_H
