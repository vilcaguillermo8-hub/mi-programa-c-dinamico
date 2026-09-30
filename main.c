#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n;

    printf("Bienvenido al programa de memoria dinamica en C.\n");
    printf("Ingrese el numero de elementos para el arreglo: ");
    scanf("%d", &n);

    arr = (int*) malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }

    printf("Memoria asignada exitosamente para %d enteros.\n", n);

    free(arr);
    printf("Memoria liberada.\n");
    return 0;
}