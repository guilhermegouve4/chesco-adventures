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

    // IN�CIO

    printf("\n\n\n\n\n\n\n\nAS AVENTURAS DE CHESCO\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\n...\n\n\n\n");
    printf("Voc�, um aventureiro destemido, adentra a escuridao da floresta...\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nOs desaparecimentos precisam ser investigados, o rei confia em voc�\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");
    
    printf("\n\n\n\nAnoitece...\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nNa pen�mbra do crep�sculo, voc� se depara com uma bifurca��o\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nNa trilha da direita, voc� identifica pegadas, que aparentemente, adentram cada vez mais na mata fechada.\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nJ� na trilha da esquerda, um brilho agudo desponta do que parece ser uma pequena clareira mais a frente.\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("cls");

    printf("\n\n\n\nO que voc� faz?\n\n\n\n\n\n");
    printf("Digite 1 para seguir a trilha das pegadas\n\n");
    printf("Digite 2 para seguir em dire��o a clareira\n\n");

    scanf("%d", &choice);

    // CAMINHO DAS PEGADAS PARTE 1

    if (choice == 1) {
        system("cls");
        printf("\n\n\n\nVoc� sente que seguir as pegadas ir�o te levar mais perto de descobrir a verdade\n\n");
        printf("\n\nVoc� vai pela DIREITA\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        
        printf("\n\n\n\nAdentrando pela floresta, voc� tem a sensa��o de estar sendo observado.\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        printf("\n\n\n\nVoc� percebe que a trilha de pegadas leva at� um c�rrego, onde somem ao adentrar na �gua.\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");

        printf("\n\n\n\nDe repente, voc� escuta algo...\n\n\n\n");
        printf("Algo grotesco, um urro que quebra o sil�ncio da noite e arrepia todos os pelos do seu corpo.\n\n");
        printf("Aparentemente vem de onde ficaria a clareira.\n\n\n\n\n\n\n\n\n\n");

        system("pause");
        system("cls");

        printf("\n\n\n\nDigite 1 para seguir o c�rrego\n\n");
        printf("Digite 2 para voltar e seguir para clareira\n\n");
        scanf("%d", &choice2);
        system("cls");

        // CAMINHO DAS PEGADAS PARTE 2

        if (choice2 == 1) {
            printf("\n\n\n\nVoc� � esperto e prefere ficar seguro.\n\n");
            printf("Portanto, escolhe continuar seguindo o rio.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");

            printf("\n\n\n\nDepois de alguns minutos caminhando, algo lhe chama aten��o...\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("Uma trilha de sangue, aparentemente fresca, leva at� uma �rvore na encosta do c�rrego\n\n");
            printf("Ao se aproximar voc� identifica um pergaminho ca�do no ch�o com algumas marcas de sangue.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");

            printf("\n\n\n\nQuando voc� se abaixa para pega-lo, algo passa, cortando o vento, rente ao seu rosto.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nVoc� esteve em batalhas suficientes para identificar o som de uma espada.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");

            printf("\n\n\n\nQuando voc� se vira, um human�ide alto, com cheiro de sangue, se encontra � sua frente...\n\n\n\n\n\n\n\n\n\n");
            printf("\n\n\n\nA escurid�o da noite impede que voc� veja seu rosto.\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nSem que antes voc� possa dizer uma palavra, ele brada novamente sua espada e voc� precisa\nse preparar para agir\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nVOC� N�O TEM ESCOLHA!\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("cls");
            printf("\n\n\n\nO monstro se aproxima...\n\n\n\n");

            // CAMINHO DAS PEGADAS BATALHA

            while (heroLife > 0 && knightLife > 0) { //LOOP DE BATALHA
                
                printf("\n\n\n\nO que voc� faz?\n\n");
                
                printf("\n\n\n\n1. Atacar\n\n");
                printf("2. Defender\n\n");
                scanf("%d", &battleChoice);

                // L�GICA CR�TICO                
                if (battleChoice == 1) {
                    int criticalChance = rand() % 4;

                    // IF ATACAR
                    if (criticalChance == 0) { //CR�TICO
                        knightLife -= 5;
                        system("cls");
                        printf("ATAQUE CR�TICO! Voc� causou 5 de dano!\n\n");
                            if (knightLife > 0) {
                                printf("\n\nA vida do monstro agora � de %d pontos.\n\n\n\n\n\n\n\n\n\n", knightLife);
                                system("pause");
                                system("cls");
                            }
                    } else { //ATAQUE NORMAL
                        knightLife -= 2;
                        system("cls");
                        printf("\n\n\n\nVoc� ataca o monstro e causa 2 de dano!\n\n");
                        
                            if (knightLife > 0) {  //S� MOSTRA O ATUAL HP DO MONSTRO SE ELE ESTIVER VIVO
                                printf("\n\nA vida do monstro agora � de %d pontos.\n\n\n\n\n\n\n\n\n\n", knightLife);
                                system("pause");
                                system("cls");
                            }
                    }

                    if(knightLife > 0) { //CONTRA ATAQUE EM CASO DE TER ESCOLHIDO ATACAR
                            heroLife -= 3;
                            printf("\n\n\n\nO monstro contra-ataca e voc� recebe 3 de dano\n\n");
                            printf("\n\nSua vida diminui para %d pontos.\n\n\n\n\n\n\n\n\n\n", heroLife);
                            system("pause");
                            system("cls");
                        }

                // IF DEFENDER
                } else if (battleChoice == 2) {
                    heroLife -=1;
                    printf("\n\n\n\nVoc� se defende e se prepara para o ataque!\n\n");
                        if(heroLife > 0) { //CASO N�O MORRA
                            printf("\n\nSua vida diminui para %d pontos.\n\n", heroLife);
                            printf("\n\nO monstro ataca com a espada, mas voc� est� pronto e recebe apenas 1 de dano.\n\n");
                    } else { //CASO MORRA DEFENDENDO
                        printf("\n\n\n\nApesar de ter se preparado, voc� � vencido pela fadiga...\n\n\n\n\n\n\n\n\n\n");
                    }

                    system("pause");
                    system("cls");
                }
            }

            // CHESCO PERDE A BATALHA
            if (heroLife <= 0) {
                
                system("cls");
                printf("\n\n\n\nSua vis�o se escurece...\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");

                printf("\n\n\n\nVoc� perde a batalha e morre sozinho na escurid�o da floresta\n\n\n\n\n\n\n\n\n\n");

                system("pause");
                system("cls");

                printf("\n\n\n\nFIM DE JOGO\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                
            } else if (heroLife > 0) { // CHESCO VENCE A BATALHA
                system("cls");
                printf("\n\n\n\nArfando em f�ria, voc� desfere o golpe final\n\n");
                printf("Voc� � o vencedor!\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");


                // CONTINUA��O

                printf("\n\n\n\nAo decrescer do fervor da batalha, voc� se lembra do pergaminho ensanguentado\n\n\n\n\n\n\n\n\n\n");
                system("pause");
                system("cls");

                printf("\n\n\n\nLer pergaminho?\n\n\n\n");
                printf("1. Sim\n\n");
                printf("2. N�o\n\n");
                scanf("%d", &scrollChoice);
                system("cls");

                if (scrollChoice == 1) { //CASO ESCOLHA LER O PERGAMINHO
                    printf("\n\n\n\nAo terminar de ler, voce percebe que o pergaminho �, na verdade, uma carta oficial do rei...\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");
                    printf("\n\n\n\nSeu conte�do � assustadoramente familiar. O rei pediu ao destinat�rio para investigar os desaparecimentos\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");

                    printf("\n\n\n\nNeste momento, uma voz e rouca te chama da escurid�o\n\n\n\n\n\n\n\n\n\n")/
                    system("pause");
                    system("cls");
                    
                    printf("Ao relampejo da lua cheia, voc� finalmente pode ver a face de seu inimigo\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");

                    printf("Voc� ent�o percebe que o human�ide a sua frente n�o � nada mais do que outro her�i.\n\n\n\n\n\n\n\n\n\n");
                    system("pause");
                    system("cls");

                    printf("Exatamente como voc�...");





                }


            }

        }

    // CAMINHO DA CLAREIRA PARTE 1

    } else if (choice == 2) {   

        system("cls");
        printf("\n\n\n\nVoc� sente que pode obter mais respostas seguindo aquele brilho distante\n\n");
        printf("Voc� decide ir pela ESQUERDA\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");

    } else {

        // FINAL CRISE DE ANSIEDADE

        system("cls");
        printf("\n\n\n\nESCOLHA INV�LIDA\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        printf("\n\n\n\nIncapaz de tomar a mais simples das decis�es, voc� tem uma crise de ansiedade e cai no ch�o\n\n\n\n\n\n\n\n\n\n");
        system("pause");
        system("cls");
        printf("Voc� morre afogado em l�grimas\n\n\n\n");
        printf("\n\nFIM DE JOGO\n\n\n\n\n\n\n\n\n\n");
        system("pause");
    }
    







    return 0;

}