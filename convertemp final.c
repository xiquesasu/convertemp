#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

struct pessoa {
    char nome[30];
};
struct pessoa cadastro;

void convertemp() {
    int conver;
    float temp, cel, kel, fah;

    do {
        printf("%s qual a medida da sua temperatura?\n\n[1] Celsius\n[2] Kelvin\n[3] Fahrenheit\n",cadastro.nome);
        scanf("%d", &conver);

        if (conver < 1 || conver > 3) {
            printf("%s esta opção não existe. Escolha uma opção válida.\n\n",cadastro.nome);
        }
    } while (conver < 1 || conver > 3);

    printf("Digite a temperatura:\n");
    scanf("%f", &temp);
    system("cls");
    printf("Processando...");
    Sleep(700);
	system("cls");
    
    if (conver == 1) {
        cel = temp;
        kel = cel + 273;
        fah = (cel * 1.8) + 32;
        printf("********** Se a temperatura em Celsius é de [%.2f]: **********\n\n", cel);
        printf("A temperatura em Kelvin é de %.2f\n", kel);
        printf("A temperatura em Fahrenheit é de %.2f\n\n", fah);
    } else if (conver == 2) {
        kel = temp;
        cel = kel - 273;
        fah = (cel * 1.8) + 32;
        printf("********** Se a temperatura em Kelvin é de [%.2f]: **********\n\n", kel);
        printf("A temperatura em Celsius é de %.2f\n", cel);
        printf("A temperatura em Fahrenheit é de %.2f\n\n", fah);
    } else if (conver == 3) {
        fah = temp;
        cel = (fah - 32) / 1.8;
        kel = cel + 273;
        printf("********** Se a temperatura em Fahrenheit é de [%.2f]: **********\n\n", fah);
        printf("A temperatura em Celsius é de %.2f\n", cel);
        printf("A temperatura em Kelvin é de %.2f\n\n", kel);
    }
}
void tempmedia() {
    int lugar;
    int temperaturaMaxima[] = { 36, 30, 34, 31, 31, 37 };
    int temperaturaMinima[] = { 19, 20, 15, 22, 18, 19 };
    char* lugares[] = { "Xique-Xique", "Chapada Diamantina", "Irecê", "Salvador", "Porto Seguro", "Juazeiro" };

    do {
        printf("Selecione um lugar:\n\n[1]Xique-Xique\n[2]Chapada Diamantina\n[3]Irecê\n[4]Salvador\n[5]Porto Seguro\n[6]Juazeiro\n");
        scanf("%d", &lugar);
			system("cls");
        	printf("Processando...");
    		Sleep(700);
			system("cls");

        if (lugar < 1 || lugar > 6) {
            printf("%s Esta opção não existe. Escolha uma opção válida.\n",cadastro.nome);
        }
    } while (lugar < 1 || lugar > 6);
    lugar--;

    printf("As temperaturas de %s variam de %d °C a %d °C.\n\n", lugares[lugar], temperaturaMinima[lugar], temperaturaMaxima[lugar]);
    
}
void finalizar() {
    printf("%s obrigado por usar meu programa. Até logo! :)\n\nFEITO POR: JOÃO VÍTOR ALMEIDA", cadastro.nome);
    exit(0);
}
main() {
    setlocale(LC_ALL, "portuguese");
    int escolha,passo=1;
    
    printf("Bem-vindo ao conversor de temperatura!\nDigite seu primeiro nome:\n");
    scanf("%s", &cadastro.nome);
    system("cls");

    do {
        printf("%s escolha o que deseja fazer:\n[1] Converter temperatura\n[2] Ver temperatura média de algum lugar\n[3] Sair\n\n", cadastro.nome);
        scanf("%d", &escolha);
        system("cls");

        switch (escolha) {
        case 1:
            convertemp();
            break;

        case 2:
            tempmedia();
            break;

        case 3:
            finalizar();
            passo=0;
            break;

        default:
            printf("Esta opção não existe. Escolha uma opção válida.\n");
            break;
        }
    } while (passo==1);
}

