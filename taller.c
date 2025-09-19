#include <stdio.h>
#include <stdlib.h>

#define N 5  // Número de estudiantes

// Definición de la estructura Estudiante
typedef struct  {
    int codigo;
    float nota;
} Estudiante;

// Datos predefinidos
Estudiante estudiantes[N] = {
    {2024101, 4.5},
    {2024102, 3.2},
    {2024103, 5.0},
    {2024104, 2.8},
    {2024105, 4.0}
};

// Función recursiva para encontrar la nota máxima
float notaMaximaRec(Estudiante arr[], int n) {
    if (n == 1) {
        return arr[0].nota;
    }
    float maxSub = notaMaximaRec(arr, n - 1);
    return (arr[n - 1].nota > maxSub) ? arr[n - 1].nota : maxSub;
}

// Función recursiva para sumar todas las notas
float sumaNotasRec(Estudiante arr[], int n) {
    if (n == 0) {
        return 0.0;
    }
    return arr[n - 1].nota + sumaNotasRec(arr, n - 1);
}

// Función recursiva para encontrar el índice del código mínimo
int indiceMinimoRec(Estudiante arr[], int inicio, int fin) {
    if (inicio == fin) {
        return inicio;
    }
    int minRest = indiceMinimoRec(arr, inicio + 1, fin);
    return (arr[inicio].codigo < arr[minRest].codigo) ? inicio : minRest;
}

// Función recursiva para ordenar por código usando Selection Sort
void selectionSortRec(Estudiante arr[], int n, int inicio) {
    if (inicio >= n - 1) {
        return;
    }
    int minIndex = indiceMinimoRec(arr, inicio, n - 1);
    if (minIndex != inicio) {
        Estudiante temp = arr[inicio];
        arr[inicio] = arr[minIndex];
        arr[minIndex] = temp;
    }
    selectionSortRec(arr, n, inicio + 1);
}

// Función para mostrar los estudiantes
void mostrarEstudiantes(Estudiante arr[], int n) {
    printf("\nCódigo\tNota\n");
    printf("---------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%.2f\n", arr[i].codigo, arr[i].nota);
    }
}

// Función principal
int main() {
    int opcion;
    do {
        printf("\n---- MENÚ ----\n");
        printf("1. Buscar Nota Máxima\n");
        printf("2. Calcular Promedio\n");
        printf("3. Ordenar Estudiantes por Código\n");
        printf("4. Mostrar Estudiantes\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        
        if (scanf("%d", &opcion) != 1) {
            printf("Entrada inválida. Por favor ingrese un número.\n");
            while (getchar() != '\n'); // Limpiar buffer
            opcion = 0;
            continue;
        }

        switch(opcion) {
            case 1: {
                float maxNota = notaMaximaRec(estudiantes, N);
                printf("La nota máxima del curso es: %.2f\n", maxNota);
                break;
            }
            case 2: {
                float suma = sumaNotasRec(estudiantes, N);
                printf("El promedio del curso es: %.2f\n", suma / N);
                break;
            }
            case 3: {
                selectionSortRec(estudiantes, N, 0);
                printf("Estudiantes ordenados por código.\n");
                break;
            }
            case 4: {
                mostrarEstudiantes(estudiantes, N);
                break;
            }
            case 5:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
        }
    } while (opcion != 5);

    return 0;
}
