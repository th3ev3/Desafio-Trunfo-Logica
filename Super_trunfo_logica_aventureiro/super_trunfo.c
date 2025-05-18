#include <stdio.h>
#include <string.h>

// Definição da estrutura Carta
typedef struct {
    char nome[50];           // Nome do país
    int populacao;           // População
    float area;              // Área (em km²)
    float pib;               // PIB
    int pontos_turisticos;   // Número de pontos turísticos
    float densidade_populacional; // Densidade populacional (calculada)
} Carta;

// Função para calcular densidade populacional
void calcular_dados(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
}

// Função para exibir o resultado da comparação
void comparar_cartas(Carta carta1, Carta carta2, int atributo) {
    switch(atributo) {
        case 1: // Comparação de População
            printf("\nComparação de Atributo: População\n");
            printf("Carta 1 - %s: %d\n", carta1.nome, carta1.populacao);
            printf("Carta 2 - %s: %d\n", carta2.nome, carta2.populacao);
            if (carta1.populacao > carta2.populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Comparação de Área
            printf("\nComparação de Atributo: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", carta1.nome, carta1.area);
            printf("Carta 2 - %s: %.2f km²\n", carta2.nome, carta2.area);
            if (carta1.area > carta2.area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // Comparação de PIB
            printf("\nComparação de Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f\n", carta1.nome, carta1.pib);
            printf("Carta 2 - %s: %.2f\n", carta2.nome, carta2.pib);
            if (carta1.pib > carta2.pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Comparação de Pontos Turísticos
            printf("\nComparação de Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d pontos\n", carta1.nome, carta1.pontos_turisticos);
            printf("Carta 2 - %s: %d pontos\n", carta2.nome, carta2.pontos_turisticos);
            if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Comparação de Densidade Populacional
            printf("\nComparação de Atributo: Densidade Populacional\n");
            printf("Carta 1 - %s: %.2f habitantes/km²\n", carta1.nome, carta1.densidade_populacional);
            printf("Carta 2 - %s: %.2f habitantes/km²\n", carta2.nome, carta2.densidade_populacional);
            if (carta1.densidade_populacional < carta2.densidade_populacional) {
                printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.densidade_populacional > carta2.densidade_populacional) {
                printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}

int main() {
    // Definindo duas cartas de exemplo
    Carta carta1 = {"Brasil", 211000000, 8515767.0, 2000000.0, 3000, 0};
    Carta carta2 = {"Argentina", 44000000, 2780400.0, 500000.0, 2500, 0};

    // Calculando os dados adicionais (densidade populacional)
    calcular_dados(&carta1);
    calcular_dados(&carta2);

    int opcao;

    // Menu interativo
    do {
        printf("\nEscolha o atributo para comparação:\n");
        printf("1. População\n");
        printf("2. Área\n");
        printf("3. PIB\n");
        printf("4. Pontos Turísticos\n");
        printf("5. Densidade Populacional\n");
        printf("0. Sair\n");
        printf("Digite sua opção: ");
        scanf("%d", &opcao);

        if (opcao != 0) {
            comparar_cartas(carta1, carta2, opcao);
        }

    } while (opcao != 0);

    return 0;
}
