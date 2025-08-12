#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int choice;
    int choice2;
    int battleChoice;
    int heroLife = 20;
    int knightLife = 15;
    int bossLife = 25;

    // IN�CIO

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

    // CAMINHO DAS PEGADAS PARTE 1

    if (choice == 1) {
        printf("Voc� sente que seguir as pegadas ir�o te levar mais perto de descobrir a verdade\n\n");
        printf("Voc� vai pela DIREITA\n\n");
        system("pause");
        system("cls");
        
        printf("Adentrando pela floresta, voc� tem a sensa��o de estar sendo observado\n\n");
        system("pause");
        printf("\n\nVoc� percebe que a trilha de pegadas leva at� um c�rrego, onde somem ao adentrar na �gua\n\n");
        system("pause");
        system("cls");

        printf("De repente, voc� escuta algo\n\n");
        system("pause");
        printf("\n\nAlgo grotesco, um urro que quebra o sil�ncio da noite e arrepia todos os pelos do seu corpo\n\n");
        printf("Aparentemente vem de onde ficaria a clareira\n\n");

        printf("\n\nDigite 1 para seguir o c�rrego\n\n");
        printf("\nDigite 2 para voltar e seguir para clareira\n\n");
        scanf("%d", &choice2);
        system("cls");

        // CAMINHO DAS PEGADAS PARTE 2

        if (choice2 == 1) {
            printf("Voc� � esperto e prefere ficar seguro\n\n");
            printf("Portanto escolhe continuar seguindo o rio\n\n");
            system("pause");
            system("cls");

            printf("Depois de alguns minutos caminhando, algo lhe chama aten��o\n\n");
            system("pause");
            printf("\n\nUma trilha de sangue, aparentemente fresca, leva at� uma �rvore na encosta do c�rrego\n\n");
            printf("Ao se aproximar voc� identifica um pergaminho ca�do no ch�o com algumas marcas de sangue\n\n");
            system("pause");
            system("cls");

            printf("Quando voc� se abaixa para pega-lo, algo passa, cortando o vento, rente ao seu rosto\n\n");
            system("pause");
            system("cls");
            printf("Voc� esteve em batalhas suficientes para identificar o som de uma espada\n\n");
            system("pause");
            system("cls");

            printf("Quando voc� se vira, um human�ide alto, com cheiro de sangue se encontra � sua frente\n\n");
            printf("A escurid�o da noite impede que voc� veja seu rosto\n\n");
            system("pause");
            system("cls");
            printf("Sem que antes voc� possa dizer uma palavra, ele brada novamente sua espada e voc� precisa\nse preparar para agir\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\n\nVOC� N�O TEM ESCOLHA\n\n");
            system("pause");
            system("cls");
            printf("O monstro se aproxima...\n\n");

            // CAMINHO DAS PEGADAS BATALHA

            while (heroLife > 0 && knightLife > 0) {
                
                printf("O que voc� faz?\n\n");
                
                printf("\n\n\n\n1. Atacar\n\n");
                printf("2. Defender\n\n");
                scanf("%d", &battleChoice);

                // L�GICA CR�TICO                
                if (battleChoice == 1) {
                    int criticalChance = rand() % 4;

                    // IF ATACAR
                    if (criticalChance == 0) {
                        knightLife -= 5;
                        printf("ATAQUE CR�TICO! Voc� causou 5 de dano!\n\n");
                            if (knightLife > 0) {
                                printf("A vida do monstro agora � de %d pontos\n\n", knightLife); 
                            }
                    } else {
                        knightLife -= 2;
                        printf("Voc� ataca o monstro e causa 2 de dano!\n\n");
                        
                            if (knightLife > 0) {
                            printf("A vida do monstro agora � de %d pontos\n\n", knightLife);
                            }
                    }
                    system("pause");
                    system("cls");
                    heroLife -= 3;
                        if(knightLife > 0) {
                            printf("\n\n\n\nO monstro contra-ataca e voc� recebe 3 de dano\n\n");
                            printf("Sua vida diminui para %d pontos\n\n", heroLife);
                        }
                    system("pause");
                    system("cls");

                // IF DEFENDER
                } else if (battleChoice == 2) {
                    printf("\n\n\n\nVoc� se defende e se prepara para o ataque!\n\n");

                    heroLife -=1;

                    printf("O monstro ataca com a espada, mas voc� est� pronto e recebe apenas 1 de dano\n\n");
                    printf("Sua vida diminui para %d pontos\n\n", heroLife);
                    system("pause");
                    system("cls");


                }
            }

            // CHESCO PERDE A BATALHA
            if (heroLife <= 0) {
                
                system("cls");
                printf("\n\nSua vis�o se escurece...\n\n");
                system("pause");
                system("cls");

                system("pause");
                printf("\n\nVoc� perde a batalha e morre sozinho na escurid�o da floresta\n\n");

                system("pause");
                system("cls");

                printf("\n\n\n\nFIM DE JOGO\n\n\n\n");
                system("pause");
                
            } else if (heroLife > 0) { // CHESCO VENCE A BATALHA
                system("cls");
                printf("\n\nArfando em f�ria, voc� desfere o golpe final\n\n");
                printf("Voc� � o vencedor!\n\n");
                system("pause");
                system("cls");

            }

        }

    // CAMINHO DA CLAREIRA PARTE 1

    } else if (choice == 2)
    {
        printf("Voc� sente que pode obter mais respostas seguindo aquele brilho distante\n\n");
        printf("Voc� decide ir pela ESQUERDA\n\n");
        system("pause");
        system("cls");

    } else {

        // FINAL CRISE DE ANSIEDADE

        printf("ESCOLHA INV�LIDA\n\n");
        system("pause");
        printf("\n\nIncapaz de tomar a mais simples das decis�es, voc� tem uma crise de ansiedade e cai no ch�o\n\n");
        system("pause");
        system("cls");
        printf("Voc� morre afogado em l�grimas\n\n");
        printf("\n\nFIM DE JOGO\n\n");
    }
    







    return 0;

}