#include <stdio.h>

// Funciones
int cuadrado(int num);
void cuadradoVoid(int* num);

// Main
int main() {
    int num;
    printf("Ingresar un numero: "); scanf("%d", &num);
    // printf("Cuadrado de %d: %d", num, cuadrado(num));
    cuadradoVoid(&num);
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