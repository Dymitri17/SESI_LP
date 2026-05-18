#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Cores para o terminal (funciona na maioria dos terminais modernos)
#define RED   "\x1B[31m"
#define GRN   "\x1B[32m"
#define YEL   "\x1B[33m"
#define CYN   "\x1B[36m"
#define RESET "\x1B[0m"

typedef struct {
    char nome[30];
    int hp;
    int hp_max;
    int atk;
    int def;
    int agilidade; // Chance de esquiva
} Entidade;

// Protótipos das funções
void mostrar_intro(Entidade m);
void barra_vida(Entidade e, char* cor);
int calcular_dano(Entidade atacante, Entidade defensor);

// int main() {
//     srand(time(NULL));

//     Entidade heroi = {"Valerius, o Bravo", 120, 120, 25, 8, 15};
//     Entidade monstro = {"Orc enfurecido", 100, 100, 18, 5, 5};
    
//     int escolha, dano_final;
//     int pocoes = 3;

//     mostrar_intro(monstro);

//     while (heroi.hp > 0 && monstro.hp > 0) {
//         printf("\n" CYN ">>> TURNO DO HERÓI <<<" RESET "\n");
//         barra_vida(heroi, GRN);
//         barra_vida(monstro, RED);

//         printf("\n1. Espada Pesada\n2. Usar Poção (%d restantes)\n3. Provocar Inimigo\nEscolha: ", pocoes);
//         scanf("%d", &escolha);

//         // --- Lógica do Herói ---
//         if (escolha == 1) {
//             dano_final = calcular_dano(heroi, monstro);
//             if (dano_final > 0) {
//                 monstro.hp -= dano_final;
//                 printf(YEL "\nVocê golpeia o %s causando %d de dano!" RESET "\n", monstro.nome, dano_final);
//             } else {
//                 printf(CYN "\nO %s foi rápido e desviou do seu golpe!" RESET "\n", monstro.nome);
//             }
//         } 
//         else if (escolha == 2 && pocoes > 0) {
//             int cura = 30 + (rand() % 20);
//             heroi.hp += cura;
//             if (heroi.hp > heroi.hp_max) heroi.hp = heroi.hp_max;
//             pocoes--;
//             printf(GRN "\nVocê bebe uma poção borbulhante e recupera %d HP!" RESET "\n", cura);
//         }
//         else {
//             printf("\nVocê grita insultos! O monstro parece confuso, mas nada acontece...\n");
//         }

//         // --- Lógica do Monstro ---
//         if (monstro.hp > 0) {
//             printf("\n" RED ">>> TURNO DO %s <<<" RESET "\n", monstro.nome);
//             dano_final = calcular_dano(monstro, heroi);
            
//             if (dano_final > 0) {
//                 heroi.hp -= dano_final;
//                 printf("O %s ruge e te acerta, causando %d de dano!\n", monstro.nome, dano_final);
//             } else {
//                 printf("Você consegue bloquear o ataque com seu escudo!\n");
//             }
//         }
//     }

//     // --- Fim de Jogo ---
//     if (heroi.hp > 0) {
//         printf("\n" GRN "VITORIA! O %s cai morto no chão. Você sobrevive para mais uma aventura!" RESET "\n", monstro.nome);
//     } else {
//         printf("\n" RED "DERROTA... A escuridão toma conta de seus olhos. Fim de jogo." RESET "\n");
//     }

    
// }

// --- Funções Auxiliares ---

int calcular_dano(Entidade atacante, Entidade defensor) {
    // Teste de esquiva (agilidade)
    if ((rand() % 100) < defensor.agilidade) return 0;

    int base = (atacante.atk - (defensor.def / 2));
    int variacao = rand() % 10;
    int critico = ((rand() % 100) < 15) ? 2 : 1; // 15% de chance de crítico

    if (critico == 2) printf(YEL "--- GOLPE CRÍTICO! --- " RESET);
    
    int total = (base + variacao) * critico;
    return (total > 1) ? total : 1;
}

void barra_vida(Entidade e, char* cor) {
    int quadrados = (e.hp * 20) / e.hp_max;
    if (quadrados < 0) quadrados = 0;
    
    printf("%-18s [", e.nome);
    printf("%s", cor);
    for (int i = 0; i < 20; i++) {
        if (i < quadrados) printf("#");
        else printf("-");
    }
    printf(RESET "] %d/%d HP\n", (e.hp > 0 ? e.hp : 0), e.hp_max);
}

void mostrar_intro(Entidade m) {
    printf(YEL "==========================================\n");
    printf("   BEM-VINDO ÀS MASMORRAS DE C\n");
    printf("==========================================\n" RESET);
    printf("À sua frente surge um %s babando de raiva!\n", m.nome);
}




///////////////


#include <stdio.h>
#include <unistd.h>

void espaco(){
    
    printf("\n");
    
}

void saida_2(){
    printf("Saindo!");
}

void tempo(){
    sleep(1);
}

int menu(){
    
    int escolha=0;
    
    printf("\n_______________________________________________________");
    printf("\n|Após as regras, você terá que decidir entre 3 coisas: |");
    printf("\n________________________________________________________");
    printf("\n|Digite 1 para jogar|");
    printf("\n|Digite 2 para sair|");
    printf("\n|Escolha uma opção: ");
    scanf("%i", &escolha);
    printf("____________________");
    
    return escolha;
}

int main() {

    int numeros[9999];
    int contador_rodadas=0;
    int numero_escondido = 9;
    int contador_vitorias=0;
    int escolha;
    int contador=0;
    int dificuldade=0;
    
    printf("Este é um jogo que consiste em adivinhar um número surpresa,");
    printf("\nIremos fazer perguntas até você acertar");
    espaco();
    
    printf("\nRegras: ");
    printf("\n ______________________________");
    printf("\n| Não vai ter números decimais |");
    
    printf("_________");
    printf("\n| O programa só acaba quando você quiser |");
    printf("\n ________________________________________");
    
    sleep(3);

    espaco();
    
    escolha = menu();
    if(escolha == 1){
        printf("\nEscolha o modo de dificuldade: ");
        espaco();
        tempo();
        printf("\nDigite 1 para o modo Normal, terá dicas e sem limite de tentativas.");
        printf("\nDigite 2 para o modo Difícil, não terá dicas e tem limite de tentativas.");
        espaco();
        printf("\nEscolha: ");
        scanf("%i", &dificuldade);
    }
    

    if(escolha == 2){
        saida_2();
        return 0;
    }
    
    
    espaco();
    if(dificuldade == 1){
        printf("Modo normal escolhido, começando!");
        sleep(3);
        for(int i=0; i < 9999; i++){
            
            int saida_errada=0;
            int saida=0;

            
            printf("\nMe fale um número e eu direi o quão perto ele está do número escondido: ");
            scanf("%i", &numeros[i]);
            
            printf("\n  __");
            printf("\n| %i |", numeros[i]);
            printf("\n  __");
            
            espaco();
            
            tempo();

            
            if(numeros[i] == numero_escondido){
                contador=0;
                contador_vitorias++;
                printf("\nO número está certo!");
                printf("\nVocê teve que errar %i vezes para acertar!", contador);
                numero_escondido = numero_escondido + 6;
                espaco();
                
                tempo();
                
                printf("\nVocê acertou, gostaria de sair do programa? 1 para sim e 2 para não: ");
                scanf("%i", &saida);
                
                if(saida == 1){
                    saida_2();
                    break;
                }
                else if(saida == 2){
                    tempo();
                    printf("\nOK, continuando");
                }
            }
            else{
                
                printf("\nO número está errado, iremos te ajudar se ele estiver perto!");
                
                
                
                if(numeros[i] >= numero_escondido - 3 && numeros[i] < numero_escondido) {
                    printf("\nVocê está muito perto! Chutou um pouco abaixo.");
                }

                else if(numeros[i] <= numero_escondido + 3 && numeros[i] > numero_escondido){
                    printf("\nVocê está muito perto! Chutou um pouco acima.");
                }
                
                espaco();
                contador++;
                contador_rodadas++;
                
                printf("\nVocê errou %i vezes na rodada", contador);
                printf("\nVocê errou %i em todas as rodadas", contador_rodadas);
                printf("\nVocê acertou %i vezes", contador_vitorias);
                
                
                tempo();
                
                printf("\nVocê errou, gostaria de sair do jogo ou continuar? 1 para continuar, 2 para sair");
                tempo();
                scanf("%i", &saida_errada);
                if(saida_errada == 2){
                    printf("\nO número certo era: %i", numero_escondido);
                    saida_2();
                    break;
                }
                
            }
            
        }
    }
    
    
    else if(dificuldade == 2){
        int numero_tentativas=0;
        printf("\nModo difícil escolhido, escolha o número de tentativas: ");
        scanf("%i", &numero_tentativas);
        sleep(3);
        printf("\nVocê tem %i tentativas para acertar.", numero_tentativas);
        int tentativas=0;
        
        for(int i=0; i < 9999; i++){
        
            int saida_errada=0;
            int saida=0;
            

            
            printf("\nMe fale um número:  ");
            scanf("%i", &numeros[i]);
            
            printf("\n  __");
            printf("\n| %i |", numeros[i]);
            printf("\n  __");
            
            espaco();
            
            tempo();

            
            if(numeros[i] == numero_escondido){
                contador=0;
                contador_vitorias++;
                tentativas=0;
                printf("\nO número está certo!");
                printf("Você teve que errar %i vezes para acertar!", contador);
                numero_escondido = numero_escondido + 6;
                espaco();
                
                tempo();
                
                printf("\nVocê acertou, gostaria de sair do programa? 1 para sim e 2 para não: ");
                scanf("%i", &saida);
                
                if(saida == 1){
                    saida_2();
                    break;
                }
                else if(saida == 2){
                    tempo();
                    printf("\nOK, continuando");
                }
            }
            else{
                printf("\nO número está errado!");
                tentativas++;
            
                
                espaco();
                contador++;
                contador_rodadas++;
            
                printf("\nVocê errou %i vezes na rodada", contador);
                espaco();
                printf("\nVocê errou %i em todas as rodadas", contador_rodadas);
                espaco();
                printf("\nVocê acertou %i vezes", contador_vitorias);
                espaco();
                
                tempo();
                
                printf("\nVocê errou, gostaria de sair do jogo ou continuar? 1 para continuar, 2 para sair: ");
                tempo();
                scanf("%i", &saida_errada);
                if(saida_errada == 2){
                    printf("\nO número certo era: %i", numero_escondido);
                    saida_2();
                    break;
                }
            }
            
            
            if(tentativas == numero_tentativas){
                printf("O número de tentativas foi alcançado e você não acertou, encerrando!");
                break;
            
            }
        }
    
    }
    
    sleep(2);
    printf("\nVocê errou %i vezes no total.", contador_rodadas);
    printf("\nVocê acertou %i vezes.", contador_vitorias);
    

}