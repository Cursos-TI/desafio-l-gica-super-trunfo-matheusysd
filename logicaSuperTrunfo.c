#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

typedef struct {
    char estado[3];
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Cidade;

int main() {
    Cidade carta1, carta2;
    int opcao;
    
    // Cadastro da primeira carta
    printf("\nCadastro da Carta 1:\n");
    printf("Estado (sigla): ");
    scanf("%s", carta1.estado);
    printf("Código: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", carta1.nome);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (R$): ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    
    // Cálculos carta 1
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;
    
    // Cadastro da segunda carta (similar ao da primeira)
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (sigla): ");
    scanf("%s", carta2.estado);
    printf("Código: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]s", carta2.nome);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (R$): ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    
    // Menu de comparação
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção: ");
    scanf("%d", &opcao);
    
    printf("\n");
    
    switch(opcao) {
        case 1:
            printf("Comparação de cartas (Atributo: População):\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", 
                   carta1.nome, carta1.estado, carta1.populacao);
            printf("Carta 2 - %s (%s): %d habitantes\n", 
                   carta2.nome, carta2.estado, carta2.populacao);
            
            if (carta1.populacao > carta2.populacao) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.populacao < carta2.populacao) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 2:
            printf("Comparação de cartas (Atributo: Área):\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", 
                   carta1.nome, carta1.estado, carta1.area);
            printf("Carta 2 - %s (%s): %.2f km²\n", 
                   carta2.nome, carta2.estado, carta2.area);
            
            if (carta1.area > carta2.area) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.area < carta2.area) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 3:
            printf("Comparação de cartas (Atributo: PIB):\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", 
                   carta1.nome, carta1.estado, carta1.pib);
            printf("Carta 2 - %s (%s): R$ %.2f\n", 
                   carta2.nome, carta2.estado, carta2.pib);
            
            if (carta1.pib > carta2.pib) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.pib < carta2.pib) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 4:
            printf("Comparação de cartas (Atributo: Pontos Turísticos):\n");
            printf("Carta 1 - %s (%s): %d pontos\n", 
                   carta1.nome, carta1.estado, carta1.pontosTuristicos);
            printf("Carta 2 - %s (%s): %d pontos\n", 
                   carta2.nome, carta2.estado, carta2.pontosTuristicos);
            
            if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 5:
            printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
            printf("Carta 1 - %s (%s): %.2f hab/km²\n", 
                   carta1.nome, carta1.estado, carta1.densidadePopulacional);
            printf("Carta 2 - %s (%s): %.2f hab/km²\n", 
                   carta2.nome, carta2.estado, carta2.densidadePopulacional);
            
            // a densidade populacional de menor valor vence
            if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        case 6:
            printf("Comparação de cartas (Atributo: PIB per capita):\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", 
                   carta1.nome, carta1.estado, carta1.pibPerCapita);
            printf("Carta 2 - %s (%s): R$ %.2f\n", 
                   carta2.nome, carta2.estado, carta2.pibPerCapita);
            
            if (carta1.pibPerCapita > carta2.pibPerCapita) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", carta1.nome);
            } else if (carta1.pibPerCapita < carta2.pibPerCapita) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", carta2.nome);
            } else {
                printf("\nResultado: Empate!\n");
            }
            break;
            
        default:
            printf("Opção inválida!\n");
            break;
    }
    
    return 0;
}
