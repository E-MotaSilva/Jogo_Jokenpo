#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int escolha, escolhapc, menu, vitoria, vitoriapc;
        int placar1, placar2, empate;

        printf(" ====== BEM VINDO AO JOGO JOKENPO ======\n");

        do {
        printf(" \n");
        printf("---------------\n");
        printf("1 - Iniciar jogo\n");
        printf("2 - Iniciar campeonato melhor de 5\n");
        printf("3 - Ver regras do jogo\n");
        printf("4 - Encerrar\n");
        printf(" \n");
        printf("Escolha abaixo a opcao desejada: ");
        scanf("%d", &menu);
        printf(" \n");

        switch (menu)   {
        case 1:
            srand(time(0));
            escolhapc = rand() % 3 + 1;

            printf("Ok, vamos comecar o game!\n");
            printf("Voce quer PEDRA(1), PAPEL(2) OU TESOURA(3)?: ");
            scanf("%d", &escolha);
            printf(" \n");

                if (escolha == 1) {
                    printf("Voce escolheu PEDRA\n");
                    }              
                else if (escolha == 2) {
                    printf("Voce escolheu PAPEL\n");
            }
                else if (escolha == 3) {
                    printf("Voce escolheu TESOURA\n");
            }
                else {
                    printf("Escolha invalida!\n");               
            }
        if (escolha > 3 || escolha < 1) {
            printf("Escolha invalida!\n");
        }
        else if (escolhapc == 1) {
           printf("Seu adversario escolheu PEDRA\n");
           printf(" \n");
          }
        else if (escolhapc == 2) {
            printf("Seu adversario escolheu PAPEL\n");
            printf(" \n");
          }
        else {
            printf("Seu adversario escolheu TESOURA\n");
            printf(" \n");
          }
        if (escolha == escolhapc) {
            printf("Voces EMPATARAM!\n");
        }
        else if (escolha > 3 || escolha < 1) {
            printf("Sem resultado\n");
        }
        else if ( 
                (escolha > escolhapc && escolhapc != 1) ||
                (escolha == 2 && escolhapc == 1) ||
                (escolha == 1 && escolhapc ==3) ) {
            printf("Voce GANHOU!");
        }
        else {
            printf("Voce PERDEU!");
        }
            break;
        
        case 2:
            vitoria = 0;
            vitoriapc = 0;
            placar1 = 0;
            placar2 = 0;
            empate = 0;

            printf("Modo Campeonato! Vamos comecar o game!\n");
            
            do {
            srand(time(0));
            escolhapc = rand() % 3 + 1;

            printf("Proxima partida:\n");
            printf(" \n");
            printf("Voce quer PEDRA(1), PAPEL(2) OU TESOURA(3)?: ");
            scanf("%d", &escolha);
            printf(" \n");

                if (escolha == 1) {
                    printf("Voce escolheu PEDRA\n");
                    }              
                else if (escolha == 2) {
                    printf("Voce escolheu PAPEL\n");
            }
                else if (escolha == 3) {
                    printf("Voce escolheu TESOURA\n");
            }
                else {
                    printf("Escolha invalida!\n");               
            }
        if (escolha > 3 || escolha < 1) {
            printf("Escolha invalida!\n");
        }
        else if (escolhapc == 1) {
           printf("Seu adversario escolheu PEDRA\n");
           printf(" \n");
          }
        else if (escolhapc == 2) {
            printf("Seu adversario escolheu PAPEL\n");
            printf(" \n");
          }
        else {
            printf("Seu adversario escolheu TESOURA\n");
            printf(" \n");
          }
        if (escolha == escolhapc) {
            printf("Partida empatada\n");
            empate++;
        }
        else if (escolha > 3 || escolha < 1) {
            printf("Sem resultado\n");
        }
        else if ( 
                (escolha > escolhapc && escolhapc != 1) ||
                (escolha == 2 && escolhapc == 1) ||
                (escolha == 1 && escolhapc ==3) ) {
            vitoria++;
            placar1++;
            printf("Voce ganhou a partida\n");
        }
        else {
            printf("Voce perdeu a partida\n");
            vitoriapc++;
            placar2++;
            printf(" \n");
        }
            printf("Placar: Voce = %d, Adversario = %d, Empates = %d\n", placar1, placar2, empate);
        if (vitoria >= 5 && vitoriapc < 5) {
            printf("Voce GANHOU O CAMPEONATO\n");
        }
        else if (vitoria < 5 && vitoriapc >= 5) { 
            printf("Voce perdeu o CAMPEONATO\n");
        }
        else { }
}
        while (vitoria < 5 && vitoriapc < 5 && menu != 4);
        break;

        case 3:
            printf("---- REGRAS DO JOGO ----\n");
            printf("PEDRA ganha de TESOURA\n");
            printf("TESOURA ganha de PAPEL\n");
            printf("PAPEL ganha de PEDRA\n");
            printf("Opcoes iguais equivalem a um EMPATE\n");
            printf(" \n");

            break;
        default:
            printf("Jogo encerrado");
            break;
        }
    }  
        while (menu != 4);

        return 0;
    }
