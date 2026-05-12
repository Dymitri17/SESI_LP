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

int main() {
    srand(time(NULL));

    Entidade heroi = {"Valerius, o Bravo", 120, 120, 25, 8, 15};
    Entidade monstro = {"Orc enfurecido", 100, 100, 18, 5, 5};
    
    int escolha, dano_final;
    int pocoes = 3;

    mostrar_intro(monstro);

    while (heroi.hp > 0 && monstro.hp > 0) {
        printf("\n" CYN ">>> TURNO DO HERÓI <<<" RESET "\n");
        barra_vida(heroi, GRN);
        barra_vida(monstro, RED);

        printf("\n1. Espada Pesada\n2. Usar Poção (%d restantes)\n3. Provocar Inimigo\nEscolha: ", pocoes);
        scanf("%d", &escolha);

        // --- Lógica do Herói ---
        if (escolha == 1) {
            dano_final = calcular_dano(heroi, monstro);
            if (dano_final > 0) {
                monstro.hp -= dano_final;
                printf(YEL "\nVocê golpeia o %s causando %d de dano!" RESET "\n", monstro.nome, dano_final);
            } else {
                printf(CYN "\nO %s foi rápido e desviou do seu golpe!" RESET "\n", monstro.nome);
            }
        } 
        else if (escolha == 2 && pocoes > 0) {
            int cura = 30 + (rand() % 20);
            heroi.hp += cura;
            if (heroi.hp > heroi.hp_max) heroi.hp = heroi.hp_max;
            pocoes--;
            printf(GRN "\nVocê bebe uma poção borbulhante e recupera %d HP!" RESET "\n", cura);
        }
        else {
            printf("\nVocê grita insultos! O monstro parece confuso, mas nada acontece...\n");
        }

        // --- Lógica do Monstro ---
        if (monstro.hp > 0) {
            printf("\n" RED ">>> TURNO DO %s <<<" RESET "\n", monstro.nome);
            dano_final = calcular_dano(monstro, heroi);
            
            if (dano_final > 0) {
                heroi.hp -= dano_final;
                printf("O %s ruge e te acerta, causando %d de dano!\n", monstro.nome, dano_final);
            } else {
                printf("Você consegue bloquear o ataque com seu escudo!\n");
            }
        }
    }

    // --- Fim de Jogo ---
    if (heroi.hp > 0) {
        printf("\n" GRN "VITORIA! O %s cai morto no chão. Você sobrevive para mais uma aventura!" RESET "\n", monstro.nome);
    } else {
        printf("\n" RED "DERROTA... A escuridão toma conta de seus olhos. Fim de jogo." RESET "\n");
    }

    
}

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