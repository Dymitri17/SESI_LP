#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

// Funções Auxiliares
void espaco() {
    printf("\n");
}

void tempo() {
    sleep(1);
}

void mostrar_ranking(char n1[], int v1, char n2[], int v2, int modo) {
    printf("\n=============================");
    printf("\n       RANKING FINAL         ");
    printf("\n=============================");

    if (modo == 2) {
        if (v1 > v2) {
            printf("\nVENCEDOR: %s", n1);
        } else if (v2 > v1) {
            printf("\nVENCEDOR: %s", n2);
        } else {
            printf("\nRESULTADO: EMPATE!");
        }
        printf("\n-----------------------------");
        printf("\n%-15s: %i vitorias", n1, v1);
        printf("\n%-15s: %i vitorias", n2, v2);
    } else {
        printf("\n%-15s: %i vitorias", n1, v1);
    }
    printf("\n=============================\n");
}

int main() {
    char nome1[50], nome2[50] = "Maquina";
    char originalN1[50], originalN2[50];
    char letra_escondida, palpite;
    int modo_jogo, continuar = 1;
    int vitorias1 = 0, vitorias2 = 0;
    int rodadas = 0;

    srand(time(NULL));

    printf("------------------------------------------\n");
    printf("   BEM-VINDO AO ADIVINHE A LETRA (A-Z)    \n");
    printf("------------------------------------------\n");

    printf("\nEscolha o modo de jogo:\n");
    printf("1 - Contra a Maquina\n2 - Contra um Colega\nOpcao: ");
    scanf("%i", &modo_jogo);

    printf("Digite o nome do Jogador 1: ");
    scanf("%49s", nome1); // Limite de 49 caracteres para segurança
    strcpy(originalN1, nome1);

    if (modo_jogo == 2) {
        printf("Digite o nome do Jogador 2: ");
        scanf("%49s", nome2);
        strcpy(originalN2, nome2);
    }

    while (continuar == 1) {
        rodadas++;
        
        if (modo_jogo == 1) {
            letra_escondida = 'A' + (rand() % 26);
            printf("\n> A Maquina escolheu uma letra! %s, tente adivinhar.", nome1);
        } else {
            printf("\n%s, digite a letra secreta (A-Z) SEM QUE %s VEJA: ", nome2, nome1);
            scanf(" %c", &letra_escondida);
            letra_escondida = toupper(letra_escondida);
            system("clear || cls"); 
            printf("\nLetra escondida! Agora e a vez de %s.\n", nome1);
        }

        int acertou = 0;
        while (!acertou) {
            printf("\n[%s], qual o seu palpite? ", nome1);
            scanf(" %c", &palpite);
            palpite = toupper(palpite);

            if (palpite == letra_escondida) {
                printf(">> PARABENS! Voce acertou a letra '%c'!", letra_escondida);
                vitorias1++;
                acertou = 1;
            } else if (palpite < letra_escondida) {
                printf("Dica: A letra secreta vem DEPOIS de '%c' no alfabeto.", palpite);
            } else {
                printf("Dica: A letra secreta vem ANTES de '%c' no alfabeto.", palpite);
            }
        }

        printf("\n\nDeseja jogar outra rodada?\n[1] Sim / [2] Sair: ");
        scanf("%i", &continuar);
        
        if (modo_jogo == 2 && continuar == 1) {
            char tempNome[50];
            int tempVit;
            
            // Troca nomes 
            strcpy(tempNome, nome1);
            strcpy(nome1, nome2);
            strcpy(nome2, tempNome);
            
            // Troca pontuação para manter o histórico correto por nome
            tempVit = vitorias1;
            vitorias1 = vitorias2;
            vitorias2 = tempVit;
            
            printf("\n--- AGORA OS PAPEIS INVERTERAM! ---\n");
            tempo();
        }
    }

    // Lógica para o Ranking Final
    if (modo_jogo == 2 && rodadas % 2 != 0) {
        mostrar_ranking(nome2, vitorias2, nome1, vitorias1, modo_jogo);
    } else {
        mostrar_ranking(nome1, vitorias1, nome2, vitorias2, modo_jogo);
    }

    printf("\nObrigado por jogar! Ate a proxima.\n");

}