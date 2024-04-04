#pragma once
#include <iostream>
using namespace std;

namespace CaloriasC
{
    class Funciones
    {
    public:
        static void menu_calculadora(string &ejercicios);
        static void datos_usuario(string &genero, int &edad, int &altura, int &peso, int &tiempo_actividad, int &TMB);
        static void running(int &peso, int &calories_base, int &calories_perdudes, int &tiempo_actividad, int &TMB);
        static void caminar(int& peso, int& calories_base, int& calories_perdudes, int& tiempo_actividad, int& TMB);
        static void nadar(int& peso, int& calories_base, int& calories_perdudes, int& tiempo_actividad, int& TMB);
        static void gym(int& peso, int& calories_base, int& calories_perdudes, int& tiempo_actividad, int& TMB);
        static void bici(int& peso, int& calories_base, int& calories_perdudes, int& tiempo_actividad, int& TMB);
        static void yoga(int& peso, int& calories_base, int& calories_perdudes, int& tiempo_actividad, int& TMB);
        static void boxeo(int& peso, int& calories_base, int& calories_perdudes, int& tiempo_actividad, int& TMB);
    };
}