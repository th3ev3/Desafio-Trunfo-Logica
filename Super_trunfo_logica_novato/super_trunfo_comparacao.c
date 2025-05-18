#include <stdio.h>
#include <string.h>

// Definição da estrutura Carta
typedef struct {
    char estado[3];          // Estado (UF)
    char codigo[10];         // Código da carta
    char cidade[50];         // Nome da cidade
    int populacao;           // População
    float area;              // Área (em km²)
    float pib;               // PIB
    int pontos_turisticos;   // Número de pontos turísticos
    float densidade_populacional; // Densidade populacional (calculada)
    float pib_per_capita;    // PIB per capita (calculado)
} Carta;

// Função para calcular densidade populacional e PIB per capita
void calcular_dados(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
}

// Função para exibir o resultado da comparação
void comparar_cartas(Carta carta1, Carta carta2) {
    // Escolher o atributo para comparação (aqui escolhemos "populacao")
    // Você pode trocar "populacao" por qualquer outro atributo numérico (como área, pib, etc).
    printf("Comparação de cartas (Atributo: População):\n");

    // Exibir as informações das cartas
    printf("Carta 1 - %s (%s): %d\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d\n", carta2.cidade, carta2.estado, carta2.populacao);

    // Comparação de acordo com a População
    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");
    }
}

int main() {
    // Definição das cartas com seus dados
    Carta carta1 = {"SP", "001", "São Paulo", 12300000, 1521.11, 650000, 450, 0, 0};
    Carta carta2 = {"RJ", "002", "Rio de Janeiro", 6000000, 1200.00, 350000, 200, 0, 0};

    // Calcular densidade populacional e PIB per capita para cada carta
    calcular_dados(&carta1);
    calcular_dados(&carta2);

    // Comparar as cartas
    comparar_cartas(carta1, carta2);

    return 0;
}
