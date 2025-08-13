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
    int scrollChoice;

    // INÍCIO

    printf("\n\n\n\n\n\n\n\nAS AVENTURAS DE CHESCO\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\n...\n\n\n\n");
    printf("Você, um aventureiro destemido, adentra a escuridao da floresta...\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nOs desaparecimentos precisam ser investigados, o rei confia em você\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");
    
    printf("\n\n\n\nAnoitece...\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nNa penúmbra do crepúsculo, você se depara com uma bifurcação\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nNa trilha da direita, você identifica pegadas, que aparentemente, adentram cada vez mais na mata fechada.\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nJá na trilha da esquerda, um brilho agudo desponta do que parece ser uma pequena clareira mais a frente.\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nO que você faz?\n\n\n\n\n\n");
    printf("Digite 1 para seguir a trilha das pegadas\n\n");
    printf("Digite 2 para seguir em direção a clareira\n\n");

    scanf("%d", &choice);

    // CAMINHO DAS PEGADAS PARTE 1

    if (choice == 1) {
        system("cls");
        printf("\n\n\n\nVocê sente que seguir as pegadas irão te levar mais perto de descobrir a verdade\n\n");
        printf("\n\nVocê vai pela DIREITA\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        
        printf("\n\n\n\nAdentrando pela floresta, você tem a sensação de estar sendo observado.\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        printf("\n\n\n\nVocê percebe que a trilha de pegadas leva até um córrego, onde somem ao adentrar na água.\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");

        printf("\n\n\n\nDe repente, você escuta algo...\n\n\n\n");
        printf("Algo grotesco, um urro que quebra o silêncio da noite e arrepia todos os pelos do seu corpo.\n\n");
        printf("Aparentemente vem de onde ficaria a clareira.\n\n\n\n\n\n\n\n\n\n");

        system("pause");
        system("cls");

        printf("\n\n\n\nDigite 1 para seguir o córrego\n\n");
        printf("Digite 2 para voltar e seguir para clareira\n\n");
        scanf("%d", &choice2);
        system("cls");

        // CAMINHO DAS PEGADAS PARTE 2

        if (choice2 == 1) {
            printf("\n\n\n\nVocê é esperto e prefere ficar seguro.\n\n");
            printf("Portanto, escolhe continuar seguindo o rio.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");

            printf("\n\n\n\nDepois de alguns minutos caminhando, algo lhe chama atenção...\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("Uma trilha de sangue, aparentemente fresca, leva até uma árvore na encosta do córrego\n\n");
            printf("Ao se aproximar você identifica um pergaminho caído no chão com algumas marcas de sangue.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");

            printf("\n\n\n\nQuando você se abaixa para pega-lo, algo passa, cortando o vento, rente ao seu rosto.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nVocê esteve em batalhas suficientes para identificar o som de uma espada.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");

            printf("\n\n\n\nQuando você se vira, um humanóide alto, com cheiro de sangue, se encontra à sua frente...\n\n\n\n\n\n\n\n\n\n");
            printf("\n\n\n\nA escuridão da noite impede que você veja seu rosto.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nSem que antes você possa dizer uma palavra, ele brada novamente sua espada e você precisa\nse preparar para agir\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nVOCÊ NÃO TEM ESCOLHA!\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nO monstro se aproxima...\n\n\n\n");

            // CAMINHO DAS PEGADAS BATALHA

            while (heroLife > 0 && knightLife > 0) { //LOOP DE BATALHA
                
                printf("\n\n\n\nO que você faz?\n\n");
                
                printf("\n\n\n\n1. Atacar\n\n");
                printf("2. Defender\n\n");
                scanf("%d", &battleChoice);

                // LÓGICA CRÍTICO                
                if (battleChoice == 1) {
                    int criticalChance = rand() % 4;

                    // IF ATACAR
                    if (criticalChance == 0) { //CRÍTICO
                        knightLife -= 5;
                        system("cls");
                        printf("ATAQUE CRÍTICO! Você causou 5 de dano!\n\n");
                            if (knightLife > 0) {
                                printf("\n\nA vida do monstro agora é de %d pontos.\n\n\n\n\n\n\n\n\n\n", knightLife);
                                system("pause");
                                system("cls");
                            }
                    } else { //ATAQUE NORMAL
                        knightLife -= 2;
                        system("cls");
                        printf("\n\n\n\nVocê ataca o monstro e causa 2 de dano!\n\n");
                        
                            if (knightLife > 0) {  //SÓ MOSTRA O ATUAL HP DO MONSTRO SE ELE ESTIVER VIVO
                                printf("\n\nA vida do monstro agora é de %d pontos.\n\n\n\n\n\n\n\n\n\n", knightLife);
                                system("pause");
                                system("cls");
                            }
                    }

                    if(knightLife > 0) { //CONTRA ATAQUE EM CASO DE TER ESCOLHIDO ATACAR
                            heroLife -= 3;
                            printf("\n\n\n\nO monstro contra-ataca e você recebe 3 de dano\n\n");
                            printf("\n\nSua vida diminui para %d pontos.\n\n\n\n\n\n\n\n\n\n", heroLife);
                            system("pause");
                            system("cls");
                        }

                // IF DEFENDER
                } else if (battleChoice == 2) {
                    heroLife -=1;
                    printf("\n\n\n\nVocê se defende e se prepara para o ataque!\n\n");
                        if(heroLife > 0) { //CASO NÃO MORRA
                            printf("\n\nSua vida diminui para %d pontos.\n\n", heroLife);
                            printf("\n\nO monstro ataca com a espada, mas você está pronto e recebe apenas 1 de dano.\n\n");
                    } else { //CASO MORRA DEFENDENDO
                        printf("\n\n\n\nApesar de ter se preparado, você é vencido pela fadiga...\n\n\n\n\n\n\n\n\n\n");
                    }

                    system("pause");
                    system("cls");
                }
            }

            // CHESCO PERDE A BATALHA
            if (heroLife <= 0) {
                
                system("cls");
                printf("\n\n\n\nSua visão se escurece...\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");

                printf("\n\n\n\nVocê perde a batalha e morre sozinho na escuridão da floresta\n\n\n\n\n\n\n\n\n\n");

                system("pause");
                system("cls");

                printf("\n\n\n\nFIM DE JOGO\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                
            } else if (heroLife > 0) { // CHESCO VENCE A BATALHA
                system("cls");
                printf("\n\n\n\nArfando em fúria, você desfere o golpe final\n\n");
                printf("Você é o vencedor!\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");


                // CONTINUAÇÃO

                printf("\n\n\n\nAo decrescer do fervor da batalha, você se lembra do pergaminho ensanguentado\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");

                printf("\n\n\n\nLer pergaminho?\n\n\n\n");
                printf("1. Sim\n\n");
                printf("2. Não\n\n");
                scanf("%d", &scrollChoice);
                system("cls");

                if (scrollChoice == 1) { //CASO ESCOLHA LER O PERGAMINHO
                    printf("\n\n\n\nAo terminar de ler, voce percebe que o pergaminho é, na verdade, uma carta oficial do rei...\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\n\n\nSeu conteúdo é assustadoramente familiar. O rei pediu ao destinatário para investigar os desaparecimentos\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");

                    printf("\n\n\n\nNeste momento, uma voz e rouca te chama da escuridão\n\n\n\n\n\n\n\n\n\n")/
                    system("pause");
                    system("cls");
                    
                    printf("Ao relampejo da lua cheia, você finalmente pode ver a face de seu inimigo\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");

                    printf("Você então percebe que o humanóide a sua frente não é nada mais do que outro herói.\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");

                    printf("Exatamente como você...");





                }


            }

        }

    // CAMINHO DA CLAREIRA PARTE 1

    } else if (choice == 2) {   

        system("cls");
        printf("\n\n\n\nVocê sente que pode obter mais respostas seguindo aquele brilho distante\n\n");
        printf("Você decide ir pela ESQUERDA\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");

    } else {

        // FINAL CRISE DE ANSIEDADE

        system("cls");
        printf("\n\n\n\nESCOLHA INVÁLIDA\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        printf("\n\n\n\nIncapaz de tomar a mais simples das decisões, você tem uma crise de ansiedade e cai no chão\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        printf("Você morre afogado em lágrimas\n\n\n\n");
        printf("\n\nFIM DE JOGO\n\n\n\n\n\n\n\n\n\n");
        system("pause");
    }
    







    return 0;

}