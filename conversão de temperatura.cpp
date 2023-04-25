#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int escolha;
    float temp, cel, kel, fah;

	printf("Bem-vindo ao conversor de temperatura!\n\n");
    printf("Qual a medida da sua temperatura?\n\n[1] Celsius\n[2] Kelvin\n[3] Fahrenheit\n\n");
    scanf("%d", &escolha);

    printf("\nDigite a temperatura:\n ");
    scanf("%f", &temp);

    if (escolha == 1){
        cel = temp;
        kel = cel + 273.15;
        fah = (cel * 1.8) + 32;
        printf("Se a temperatura em Celsius é de %.2f:\n\n", cel);
        printf("A temperatura em Kelvin é de %.2f\n", kel);
        printf("A temperatura em Fahrenheit é de %.2f\n\n", fah);
    }

    if (escolha == 2){
        kel = temp;
        cel = kel - 273.15;
        fah = (cel * 1.8) + 32;
        printf("Se a temperatura em Kelvin é de %.2f:\n\n", kel);
        printf("A temperatura em Celsius é de %.2f\n", cel);
        printf("A temperatura em Fahrenheit é de %.2f\n\n", fah);
    }

    if (escolha == 3){
        fah = temp;
        cel = (fah - 32) / 1.8;
        kel = cel + 273.15;
        printf("Se a temperatura em Fahrenheit é de %.2f:\n\n", fah);
        printf("A temperatura em Celsius é de %.2f\n", cel);
        printf("A temperatura em Kelvin é de %.2f\n\n", kel);
    }

    return 0;
}
