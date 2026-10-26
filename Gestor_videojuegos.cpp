/*
 * =====================================================================
 * BOOTCAMP PROGRAMACIÓN CERO A POO | MINI-PROYECTO C++
 * Proyecto    : Gestor de Videojuegos
 * Autor       : URIEL JARAMILLO
 * Fecha       : 25-oct-2026
 * Descripción : Sistema de gestión en consola para registrar, consultar
 *               y analizar una biblioteca de hasta 20 videojuegos.
 *
 * ANÁLISIS E / P / S
 * ---------------------------------------------------------------------
 * ENTRADA : Opción del menú (1-6), título del juego,
 *           horas jugadas (decimal >= 0) y calificación (entero 1-10).
 * PROCESO : Almacenar los datos en arreglos paralelos, recorrerlos con
 *           bucles, buscar de forma secuencial, calcular promedio y
 *           máximo, y filtrar juegos para recomendar cuál rejugar.
 * SALIDA  : Menú, listado de juegos, resultado de búsqueda, reporte
 *           general, recomendación y mensajes de error o aviso.
 * =====================================================================
 */

 #include <iostream>
 #include <string>
 using namespace std;

 // Máximo de juegos que se pueden registrar
 const int maximoPermitido = 20;  

 int main() {

    // Arreglos paralelos: el mismo índice pertenece al mismo juego

    string titulos[maximoPermitido];
    float horas[maximoPermitido];
    int calificacion[maximoPermitido];

    // Cantidad de juegos registrados

    int total = 0;   
    
    cout << "=~=~=~=~=~ GESTOR DE VIDEOJUEGOS =~=~=~=~=~" << endl;

    return 0;
    
 }