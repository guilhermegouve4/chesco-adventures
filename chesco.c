#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int choice;
    int heroLife = 10;
    int bossLife = 10;

    printf("AS AVENTURAS DE CHESCO\n\n");
    system("pause");
    system("cls");

    printf("...\n");
    printf("Você, um aventureiro destemido, adentra a escuridao da floresta...\n\n");
    system("pause");
    system("cls");

    printf("Os desaparecimentos precisam ser investigados, o rei confia em você\n\n");
    system("pause");
    system("cls");
    
    printf("...\n\n");
    system("pause");
    system("cls");

    printf("Anoitece...\n\n");
    system("pause");
    system("cls");

    printf("Na penúmbra do crepúsculo, você se depara com uma bifurcação\n\n");
    system("pause");
    system("cls");

    printf("Na trilha da direita, você identifica pegadas, que aparentemente, adentram cada vez mais na mata fechada\n\n");
    system("pause");
    system("cls");

    printf("Já na trilha da esquerda, um brilho agudo desponta do que parece ser uma pequena clareira mais a frente\n\n");
    system("pause");
    system("cls");

    printf("O que você faz?\n\n");
    printf("Digite 1 para seguir a trilha das pegadas\n\n");
    printf("Digite 2 para seguir em direção a clareira\n\n");

    scanf("%d", &choice);

    if (choice == 1) {
        printf("Você sente que seguir as pegadas irão te levar mais perto de descobrir a verdade\n\n");
        printf("Você vai pela DIREITA\n\n");
        system("pause");
        system("cls");
    } else if (choice == 2)
    {
        printf("Você sente que pode obter mais respostas seguindo aquele brilho distante\n\n");
        printf("Você decide ir pela ESQUERDA\n\n");
        system("pause");
        system("cls");
    } else {
        printf("ESCOLHA INVÁLIDA\n\n");
        system("pause");
        printf("\n\n Incapaz de tomar a mais simples das decisões, você tem uma crise de ansiedade e cai no chão\n\n");
        system("pause");
        system("cls");
        printf("Você morre afogado em lágrimas\n\n");
        printf("\n\nFIM DE JOGO\n\n");
    }
    







    return 0;

}