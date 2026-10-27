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
 =====================================================================
*/

#include <iostream>
#include <string>
using namespace std;

// Máximo de juegos que se pueden registrar

const int maximoPermitido = 20; 

// Función del menú principal

void mostrarMenu() {
    cout << endl;
    cout << "=~=~=~=~=~ GESTOR DE VIDEOJUEGOS =~=~=~=~=~" << endl;
    cout << "" << endl;
    cout << "1. Registra un juego" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "2. Muestra mi biblioteca" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "3. Busca un juego" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "4. Reporte general" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "5. Que juego tengo que volver a jugar?" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "6. Salir" << endl;
    cout << "" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

int main() {

    // Arreglos paralelos: el mismo índice pertenece al mismo juego

    string titulos[maximoPermitido];
    float horas[maximoPermitido];
    int calificacion[maximoPermitido];
    int total = 0;
    int opcion;

    do {
        mostrarMenu();

        // Solicitar al usuario que elija una opción del menú

        cout << "Elige una opcion :v : " << endl;
        cin >> opcion;
        cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "" << endl;
        
        // Validar la opción ingresada y mostrar un mensaje correspondiente

        switch (opcion) {
            case 1: cout << "Registrando: preparando ejecución..." << endl; break;
            case 2: cout << "Mostrar: preparando ejecución..." << endl; break;
            case 3: cout << "Buscar: preparando ejecución..." << endl; break;
            case 4: cout << "Reporte: preparando ejecución..." << endl; break;
            case 5: cout << "Rejugar: preparando ejecución..." << endl; break;
            case 6: cout << "Bay Bay :(" << endl; break;
            default: cout << "Ingresa un dato válido [1-6] ;w" << endl;
        }
    } while (opcion != 6);

    return 0;

 }