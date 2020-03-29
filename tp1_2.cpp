#include <stdio.h>

// Funciones
int cuadrado(int num);

// Main
int main() {
    int num;
    printf("Ingresar un numero: "); scanf("%d", &num);
    printf("Cuadrado de %d: %d", num, cuadrado(num));
    return 0;
}

int cuadrado(int num) {
    return num*num;
}