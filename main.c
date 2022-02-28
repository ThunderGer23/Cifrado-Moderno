#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void boxesS();
void boxesP();
void genClave();
int main() {
    menu();
    return 0;
}

void menu() {
    char value;
    do {
        printf("Seleccione una operación");
        printf("1.Cajas S\n2.Cajas P\n3.Generador de claves\n4.Salir");
        scanf("%c", &value);
        switch (value) {
            case '1':
                boxesS();
                break;
            case '2':
                boxesP();
                break;
            case '3':
                genClave();
                break;
            case '4':
                printf("Adios, vuelve pronto");
                break;
            default:
                printf("El dato ingresado no es valido, por favor seleccione otra operación");
                break;
        }
    }while (value == '5');
}