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

    printf("Inicializando y mostrando los elementos del arreglo:\n");
    for (int i = 0; i < n; i++) {
        arr[i] = i * 100;
        printf("Elemento en indice %d: %d\n", i, arr[i]);
    }

    free(arr);
    printf("Memoria liberada.\n");
    return 0;
}
// con este comentario termino "VOCÊ NÃO VAIS FALA!!"
