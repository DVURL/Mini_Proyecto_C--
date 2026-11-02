# Gestor de Videojuegos

Sistema de gestión en consola, hecho en C++, para llevar el control de mi
biblioteca de videojuegos. Permite registrar juegos, consultarlos, buscarlos
y analizar cuáles me gustaron más o cuáles debería volver a jugar.

Proyecto del Mini-Proyecto Integrador (Taller Integrador 1) del Bootcamp
Programación Cero a POO. 

## Datos que administra

Guarda hasta **20 juegos** usando arreglos paralelos:

| Dato | Tipo | Regla |
|---|---|---|
| Título | texto | Identifica el juego |
| Horas jugadas | decimal | Mayor o igual a 0 |
| Calificación | entero | Entre 1 y 10 |

## Funcionalidades del menú

1. **Registrar un juego:** guarda un nuevo juego (máximo 20).
2. **Mostrar mi biblioteca:** lista todos los juegos registrados.
3. **Buscar un juego:** búsqueda secuencial por título.
4. **Reporte general:** promedio de calificación y juego con más horas jugadas.
5. **¿Qué juego rejugar?:** componente creativo (ver abajo).
6. **Salir:** termina el programa.

## Componente creativo: ¿Qué juego rejugar?

Recomienda los juegos que me han gustado mucho pero que casi no jugué:
los que tienen **calificación de 9 o más** y **menos de 10 horas jugadas**.
Si ninguno cumple, el programa lo informa.

## Validaciones

- La opción del menú debe estar entre 1 y 6 (también rechaza letras).
- La calificación debe estar entre 1 y 10.
- Las horas no pueden ser negativas.
- No se permite registrar más de 20 juegos.
- Si no hay datos, las opciones de listado, búsqueda, reporte y
  recomendación muestran un mensaje claro.
- Si la búsqueda no encuentra el juego, lo informa y el menú continúa.

## Cómo compilar y ejecutar

Requiere un compilador de C++ (por ejemplo, g++).

```
g++ main.cpp -o juegos
./juegos
```

En Windows (PowerShell): `.\juegos.exe`

## Autor

URIEL JARAMILLO {^w^}
