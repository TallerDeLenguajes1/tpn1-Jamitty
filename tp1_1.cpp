#include <stdio.h>

int main () {
    int num = 7;
    int* p_num;
    p_num = &num;
    printf("Contenido del puntero: %d", *p_num);
    printf("\nDireccion de memoria almacenada en el puntero: %p", p_num);
    printf("\nDireccion de memoria de la variable: %p", &num);
    printf("\nDireccion de memoria del puntero: %p", &p_num);
    printf("\nTamanio de memoria usado por la variable (bytes): %ld", sizeof(num));


    return 0;
}