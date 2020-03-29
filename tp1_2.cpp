#include <stdio.h>

// Funciones
int cuadrado(int num);
void cuadradoVoid(int* num);
void invertir(int* a, int* b);
void ordenar(int* a, int* b);

// Main
int main() {
    // int num;
    // printf("Ingresar un numero: "); scanf("%d", &num);
    // printf("Cuadrado de %d: %d", num, cuadrado(num));
    // cuadradoVoid(&num);

    int a;
    int b;
    printf("Ingresar a: "), scanf("%d", &a);
    printf("Ingresar b: "), scanf("%d", &b);
    printf("Ordenando...");
    ordenar(&a, &b);
    printf("\na: %d", a);
    printf("\nb: %d", b);
    return 0;
}

// Devuelve el cuadrado de un numero
int cuadrado(int num) {
    return num*num;
}

// cuadrado() pero devuelve un void
void cuadradoVoid(int* num) {
    printf("Numero ingresado: %d", *num);
    printf("\nDireccion de memoria de la variable: %p", num);
    printf("\nCuadrado de %d: %d", *num, (*num)*(*num));
}

// invierte los valores de dos variables
void invertir(int* a, int* b) {
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

// Ordena los valores de dos variables de menor a mayor
void ordenar(int* a, int* b) {
    if (*a > *b) {
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
}