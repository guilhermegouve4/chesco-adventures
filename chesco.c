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

    // INÍCIO

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

    // CAMINHO DAS PEGADAS PARTE 1

    if (choice == 1) {
        printf("Você sente que seguir as pegadas irão te levar mais perto de descobrir a verdade\n\n");
        printf("Você vai pela DIREITA\n\n");
        system("pause");
        system("cls");
        
        printf("Adentrando pela floresta, você tem a sensação de estar sendo observado\n\n");
        system("pause");
        printf("\n\nVocê percebe que a trilha de pegadas leva até um córrego, onde somem ao adentrar na água\n\n");
        system("pause");
        system("cls");

        printf("De repente, você escuta algo\n\n");
        system("pause");
        printf("\n\nAlgo grotesco, um urro que quebra o silêncio da noite e arrepia todos os pelos do seu corpo\n\n");
        printf("Aparentemente vem de onde ficaria a clareira\n\n");

        printf("\n\nDigite 1 para seguir o córrego\n\n");
        printf("\nDigite 2 para voltar e seguir para clareira\n\n");
        scanf("%d", &choice2);
        system("cls");

        // CAMINHO DAS PEGADAS PARTE 2

        if (choice2 == 1) {
            printf("Você é esperto e prefere ficar seguro\n\n");
            printf("Portanto escolhe continuar seguindo o rio\n\n");
            system("pause");
            system("cls");

            printf("Depois de alguns minutos caminhando, algo lhe chama atenção\n\n");
            system("pause");
            printf("\n\nUma trilha de sangue, aparentemente fresca, leva até uma árvore na encosta do córrego\n\n");
            printf("Ao se aproximar você identifica um pergaminho caído no chão com algumas marcas de sangue\n\n");
            system("pause");
            system("cls");

            printf("Quando você se abaixa para pega-lo, algo passa, cortando o vento, rente ao seu rosto\n\n");
            system("pause");
            system("cls");
            printf("Você esteve em batalhas suficientes para identificar o som de uma espada\n\n");
            system("pause");
            system("cls");

            printf("Quando você se vira, um humanóide alto, com cheiro de sangue se encontra à sua frente\n\n");
            printf("A escuridão da noite impede que você veja seu rosto\n\n");
            system("pause");
            system("cls");
            printf("Sem que antes você possa dizer uma palavra, ele brada novamente sua espada e você precisa\nse preparar para agir\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\n\nVOCÊ NÃO TEM ESCOLHA\n\n");
            system("pause");
            system("cls");
            printf("O monstro se aproxima...\n\n");

            // CAMINHO DAS PEGADAS BATALHA

            while (heroLife > 0 && knightLife > 0) {
                
                printf("O que você faz?\n\n");
                
                printf("\n\n\n\n1. Atacar\n\n");
                printf("2. Defender\n\n");
                scanf("%d", &battleChoice);

                // LÓGICA CRÍTICO                
                if (battleChoice == 1) {
                    int criticalChance = rand() % 4;

                    // IF ATACAR
                    if (criticalChance == 0) {
                        knightLife -= 5;
                        printf("ATAQUE CRÍTICO! Você causou 5 de dano!\n\n");
                            if (knightLife > 0) {
                                printf("A vida do monstro agora é de %d pontos\n\n", knightLife); 
                            }
                    } else {
                        knightLife -= 2;
                        printf("Você ataca o monstro e causa 2 de dano!\n\n");
                        
                            if (knightLife > 0) {
                            printf("A vida do monstro agora é de %d pontos\n\n", knightLife);
                            }
                    }
                    system("pause");
                    system("cls");
                    heroLife -= 3;
                        if(knightLife > 0) {
                            printf("\n\n\n\nO monstro contra-ataca e você recebe 3 de dano\n\n");
                            printf("Sua vida diminui para %d pontos\n\n", heroLife);
                        }
                    system("pause");
                    system("cls");

                // IF DEFENDER
                } else if (battleChoice == 2) {
                    printf("\n\n\n\nVocê se defende e se prepara para o ataque!\n\n");

                    heroLife -=1;

                    printf("O monstro ataca com a espada, mas você está pronto e recebe apenas 1 de dano\n\n");
                    printf("Sua vida diminui para %d pontos\n\n", heroLife);
                    system("pause");
                    system("cls");


                }
            }

            // CHESCO PERDE A BATALHA
            if (heroLife <= 0) {
                
                system("cls");
                printf("\n\nSua visão se escurece...\n\n");
                system("pause");
                system("cls");

                system("pause");
                printf("\n\nVocê perde a batalha e morre sozinho na escuridão da floresta\n\n");

                system("pause");
                system("cls");

                printf("\n\n\n\nFIM DE JOGO\n\n\n\n");
                system("pause");
                
            } else if (heroLife > 0) { // CHESCO VENCE A BATALHA
                system("cls");
                printf("\n\nArfando em fúria, você desfere o golpe final\n\n");
                printf("Você é o vencedor!\n\n");
                system("pause");
                system("cls");

            }

        }

    // CAMINHO DA CLAREIRA PARTE 1

    } else if (choice == 2)
    {
        printf("Você sente que pode obter mais respostas seguindo aquele brilho distante\n\n");
        printf("Você decide ir pela ESQUERDA\n\n");
        system("pause");
        system("cls");

    } else {

        // FINAL CRISE DE ANSIEDADE

        printf("ESCOLHA INVÁLIDA\n\n");
        system("pause");
        printf("\n\nIncapaz de tomar a mais simples das decisões, você tem uma crise de ansiedade e cai no chão\n\n");
        system("pause");
        system("cls");
        printf("Você morre afogado em lágrimas\n\n");
        printf("\n\nFIM DE JOGO\n\n");
    }
    







    return 0;

}