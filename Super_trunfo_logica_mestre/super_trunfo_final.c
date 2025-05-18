#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para armazenar informações da carta
typedef struct {
    char nomePais[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcularDensidadePopulacional(Carta* carta) {
    carta->densidadePopulacional = carta->populacao / carta->area;
    carta->pibPerCapita = carta->pib / carta->populacao;
}

// Função para exibir os resultados da comparação
void exibirResultado(Carta carta1, Carta carta2, char* atributo1, char* atributo2, float somaCarta1, float somaCarta2) {
    printf("\nResultado da comparação entre %s e %s:\n", carta1.nomePais, carta2.nomePais);
    printf("Atributo 1: %s\n", atributo1);
    printf("Atributo 2: %s\n", atributo2);
    printf("\nCarta 1 - %s:\n", carta1.nomePais);
    printf("%s: %.2f\n", atributo1, somaCarta1);
    printf("%s: %.2f\n", atributo2, somaCarta2);
    printf("\nCarta 2 - %s:\n", carta2.nomePais);
    printf("%s: %.2f\n", atributo1, somaCarta1);
    printf("%s: %.2f\n", atributo2, somaCarta2);
    printf("\n");
    
    if (somaCarta1 > somaCarta2) {
        printf("Carta %s venceu!\n", carta1.nomePais);
    } else if (somaCarta1 < somaCarta2) {
        printf("Carta %s venceu!\n", carta2.nomePais);
    } else {
        printf("Empate!\n");
    }
}

// Função principal
int main() {
    Carta carta1 = {"Brasil", 211000000, 8515767.0, 2085000.0, 800, 0, 0};
    Carta carta2 = {"Argentina", 44000000, 2780400.0, 500000.0, 200, 0, 0};

    // Calcular a densidade populacional e PIB per capita
    calcularDensidadePopulacional(&carta1);
    calcularDensidadePopulacional(&carta2);

    int atributo1, atributo2;
    float somaCarta1 = 0, somaCarta2 = 0;

    // Menu de escolha de atributos
    printf("Escolha os atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");

    // Escolher primeiro atributo
    printf("\nEscolha o primeiro atributo (1-6): ");
    scanf("%d", &atributo1);

    // Excluir o primeiro atributo da lista de opções
    printf("\nEscolha o segundo atributo (1-6, exceto %d): ", atributo1);
    scanf("%d", &atributo2);

    // Lógica de comparação para os atributos escolhidos
    if (atributo1 == 1) {
        somaCarta1 = carta1.populacao;
        somaCarta2 = carta2.populacao;
    } else if (atributo1 == 2) {
        somaCarta1 = carta1.area;
        somaCarta2 = carta2.area;
    } else if (atributo1 == 3) {
        somaCarta1 = carta1.pib;
        somaCarta2 = carta2.pib;
    } else if (atributo1 == 4) {
        somaCarta1 = carta1.pontosTuristicos;
        somaCarta2 = carta2.pontosTuristicos;
    } else if (atributo1 == 5) {
        somaCarta1 = carta1.densidadePopulacional;
        somaCarta2 = carta2.densidadePopulacional;
    } else if (atributo1 == 6) {
        somaCarta1 = carta1.pibPerCapita;
        somaCarta2 = carta2.pibPerCapita;
    }

    // Lógica para o segundo atributo
    float soma2Carta1 = 0, soma2Carta2 = 0;
    if (atributo2 == 1) {
        soma2Carta1 = carta1.populacao;
        soma2Carta2 = carta2.populacao;
    } else if (atributo2 == 2) {
        soma2Carta1 = carta1.area;
        soma2Carta2 = carta2.area;
    } else if (atributo2 == 3) {
        soma2Carta1 = carta1.pib;
        soma2Carta2 = carta2.pib;
    } else if (atributo2 == 4) {
        soma2Carta1 = carta1.pontosTuristicos;
        soma2Carta2 = carta2.pontosTuristicos;
    } else if (atributo2 == 5) {
        soma2Carta1 = carta1.densidadePopulacional;
        soma2Carta2 = carta2.densidadePopulacional;
    } else if (atributo2 == 6) {
        soma2Carta1 = carta1.pibPerCapita;
        soma2Carta2 = carta2.pibPerCapita;
    }

    // Comparar os dois atributos
    exibirResultado(carta1, carta2, "População", "Área", somaCarta1 + soma2Carta1, somaCarta2 + soma2Carta2);

    return 0;
}
