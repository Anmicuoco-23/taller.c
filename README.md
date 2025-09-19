Taller: Recursividad y Gestión de Datos (taller.c)

Este proyecto en lenguaje C permite gestionar las notas de un grupo de estudiantes utilizando estructuras y funciones recursivas. Está diseñado para realizar operaciones básicas como buscar la nota más alta, calcular el promedio del curso, ordenar los estudiantes por su código y mostrar la lista de estudiantes.

OBJETIVO
El objetivo principal del programa es demostrar el uso de estructuras (struct) y funciones recursivas para manipular un arreglo de estudiantes, cada uno con su código y su nota, y realizar las siguientes operaciones:

BUSCAR LA NOTA MAXIMA
Calcular el promedio del curso.
Ordenar los estudiantes por código usando el algoritmo Selection Sort recursivo.
Mostrar la lista de estudiantes en pantalla.

ESTRUCTURA DEL PROGRAMA 
El código está dividido en varias partes:
Definición de estructuras: Se define un struct Estudiante con dos campos: codigo (int) y nota (float), Comentarios explicativos (encabezado)
typedef strcuct, funciones recursivas, Implementación de funciones (con explicación del caso base y paso recursivo) y main() con menú interactivo
Datos predefinidos: Se declara un arreglo estudiantes de tamaño 5 con valores iniciales.

Funciones recursivas:
notaMaximaRec(): Retorna la nota más alta de forma recursiva.
sumaNotasRec(): Suma todas las notas para calcular el promedio.
indiceMinimoRec(): Encuentra el índice del estudiante con menor código.
selectionSortRec(): Ordena el arreglo por código usando Selection Sort recursivo.

OTRAS FUNCIONES:
mostrarEstudiantes(): Imprime en pantalla la lista de estudiantes.

MENU PRINCIPAL (main):
Muestra opciones al usuario y ejecuta la acción correspondiente.
El programa sigue ejecutándose hasta que el usuario elige salir.

PROCESO DE EJECUCION
1-Inicio del programa
2-Muestra el menú de opciones:

---- MENÚ ----
1. Buscar Nota Máxima
2. Calcular Promedio
3. Ordenar Estudiantes por Código
4. Mostrar Estudiantes
5. Salir


3- El usuario selecciona una opción (1 a 5).
4-Se ejecuta la función correspondiente:

Opción 1: Se imprime la nota más alta.
Opción 2: Se calcula y muestra el promedio.
Opción 3: Se ordenan los estudiantes por código (ascendente).
Opción 4: Se muestra la lista completa de estudiantes.
Opción 5: Finaliza el programa.

5-El programa se repite hasta que el usuario elige la opción de salida.

 REQUISITOS:
Lenguaje C (C99 o superior recomendado)
Compilador como gcc o compatible.

EJEMPLO DE SALIDA
---- MENÚ ----
1. Buscar Nota Máxima
2. Calcular Promedio
3. Ordenar Estudiantes por Código
4. Mostrar Estudiantes
5. Salir
Seleccione una opción: 1
La nota máxima del curso es: 5.00
