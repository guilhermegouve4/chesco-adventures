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
    printf("Voc�, um aventureiro destemido, adentra a escuridao da floresta...\n\n");
    system("pause");
    system("cls");

    printf("Os desaparecimentos precisam ser investigados, o rei confia em voc�\n\n");
    system("pause");
    system("cls");
    
    printf("...\n\n");
    system("pause");
    system("cls");

    printf("Anoitece...\n\n");
    system("pause");
    system("cls");

    printf("Na pen�mbra do crep�sculo, voc� se depara com uma bifurca��o\n\n");
    system("pause");
    system("cls");

    printf("Na trilha da direita, voc� identifica pegadas, que aparentemente, adentram cada vez mais na mata fechada\n\n");
    system("pause");
    system("cls");

    printf("J� na trilha da esquerda, um brilho agudo desponta do que parece ser uma pequena clareira mais a frente\n\n");
    system("pause");
    system("cls");

    printf("O que voc� faz?\n\n");
    printf("Digite 1 para seguir a trilha das pegadas\n\n");
    printf("Digite 2 para seguir em dire��o a clareira\n\n");

    scanf("%d", &choice);

    if (choice == 1) {
        printf("Voc� sente que seguir as pegadas ir�o te levar mais perto de descobrir a verdade\n\n");
        printf("Voc� vai pela DIREITA\n\n");
        system("pause");
        system("cls");
    } else if (choice == 2)
    {
        printf("Voc� sente que pode obter mais respostas seguindo aquele brilho distante\n\n");
        printf("Voc� decide ir pela ESQUERDA\n\n");
        system("pause");
        system("cls");
    } else {
        printf("ESCOLHA INV�LIDA\n\n");
        system("pause");
        printf("\n\n Incapaz de tomar a mais simples das decis�es, voc� tem uma crise de ansiedade e cai no ch�o\n\n");
        system("pause");
        system("cls");
        printf("Voc� morre afogado em l�grimas\n\n");
        printf("\n\nFIM DE JOGO\n\n");
    }
    







    return 0;

}