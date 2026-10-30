/*
 * =====================================================================
 * BOOTCAMP PROGRAMACIÓN CERO A POO | MINI-PROYECTO C++
 * Proyecto    : Gestor de Videojuegos
 * Autor       : URIEL JARAMILLO
 * Fecha       : 28-oct-2026
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

// Lee la opcion y la repite hasta que este entre 1 y 6

int leerOpcion() {
    int opcion;
    cout << "Elige una opcion :v : ";
    cin >> opcion;

    while (opcion < 1 || opcion > 6) {
        cout << "" << endl;
        cout << "Ingresa un dato valido [1-6] ;w : ";
        cin >> opcion;
    }
    return opcion;
}

// Registra un juego y devuelve el total actualizado

int registrarJuego(string titulos[], float horas[], int calificacion[], int total) {

    if (total >= maximoPermitido) {
        cout << "Tu biblioteca esta llena (20/20) :(" << endl;
        cout << "" << endl;
        return total;
    }

    cout << "Titulo del juego (una palabra): ";
    cin >> titulos[total];
    cout << "" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "" << endl;
    cout << "Horas jugadas: ";
    cin >> horas[total];
    cout << "" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "" << endl;
    while (horas[total] < 0) {
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
        cout << "Las horas no pueden ser negativas ;w : ";
        cin >> horas[total];
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;

    }

    cout << "" << endl;
    cout << "Calificacion (1-10): ";
    cin >> calificacion[total];
    cout << "" << endl;
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "" << endl;
    while (calificacion[total] < 1 || calificacion[total] > 10) {
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
        cout << "La calificacion debe estar entre 1 y 10 ;w : ";
        cin >> calificacion[total];
        cout << "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx" << endl;
    }

    cout << "" << endl;
    cout << "=====================" << endl;
    cout << "Juego registrado :v" << endl;
    cout << "=====================" << endl;
    cout << "" << endl;
    return total + 1;
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

        opcion = leerOpcion();
        cout << "~~~~~~~~~~~~~~~~~~~~~~~" << endl;
        cout << "" << endl;
        
        // Validar la opción ingresada y mostrar un mensaje correspondiente

        switch (opcion) {
            case 1: total = registrarJuego(titulos, horas, calificacion, total); break;
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