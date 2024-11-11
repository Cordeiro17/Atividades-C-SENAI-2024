#include <stdio.h>
#include<stdlib.h>
int main() {
    float grau;
    char conver;

    do {
        printf("Digite um grau para converter: ");
        scanf("%f", &grau);
        printf("Escolha a conversão:\n a para Celsius para Fahrenheit\n b para Fahrenheit para Celsius\n c para Celsius para Kelvin\n d para Kelvin para Celsius\n e para  encerrar o programa. \n");
        scanf(" %c", &conver); 

        switch (conver) {
            case 'a':
                printf("F = %.2f\n", (grau * 9 / 5) + 32);
                break;
            case 'b':
                printf("C = %.2f\n", (grau - 32) * 5 / 9);
                break;
            case 'c':
                printf("K = %.2f\n", grau + 273.15);
                break;
            case 'd':
                printf("C = %.2f\n", grau - 273.15);
                break;
            case 'e':
                printf("Você escolheu encerrar.\n");
                break;
            default:
                printf("Você escolheu um símbolo inválido.\n");
        }

    } while (conver != 'e');

    
}
