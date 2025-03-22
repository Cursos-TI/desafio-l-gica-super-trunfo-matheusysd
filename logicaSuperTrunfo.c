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
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
    
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
    
    // Primeiro menu de comparação
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Opção 1: ");
    scanf("%d", &opcao1);
    
    // Segundo menu (excluindo a opção já escolhida)
    printf("\nEscolha o segundo atributo para comparação:\n");
    for(int i = 1; i <= 6; i++) {
        if(i != opcao1) {
            switch(i) {
                case 1: printf("%d - População\n", i); break;
                case 2: printf("%d - Área\n", i); break;
                case 3: printf("%d - PIB\n", i); break;
                case 4: printf("%d - Pontos Turísticos\n", i); break;
                case 5: printf("%d - Densidade Populacional\n", i); break;
                case 6: printf("%d - PIB per capita\n", i); break;
            }
        }
    }
    printf("Opção 2: ");
    scanf("%d", &opcao2);
    
    // Validação das opções
    if(opcao1 == opcao2 || opcao1 < 1 || opcao1 > 6 || opcao2 < 1 || opcao2 > 6) {
        printf("\nOpções inválidas! Escolha dois atributos diferentes.\n");
        return 1;
    }
    
    printf("\nComparando cartas usando dois atributos:\n\n");
    
    // Obter valores do primeiro atributo
    switch(opcao1) {
        case 1: 
            valor1_carta1 = carta1.populacao;
            valor1_carta2 = carta2.populacao;
            printf("Atributo 1 (População):\n");
            printf("Carta 1 - %s: %d habitantes\n", carta1.nome, (int)valor1_carta1);
            printf("Carta 2 - %s: %d habitantes\n\n", carta2.nome, (int)valor1_carta2);
            break;
        case 2:
            valor1_carta1 = carta1.area;
            valor1_carta2 = carta2.area;
            printf("Atributo 1 (Área):\n");
            printf("Carta 1 - %s: %.2f km²\n", carta1.nome, valor1_carta1);
            printf("Carta 2 - %s: %.2f km²\n\n", carta2.nome, valor1_carta2);
            break;
        case 3:
            valor1_carta1 = carta1.pib;
            valor1_carta2 = carta2.pib;
            printf("Atributo 1 (PIB):\n");
            printf("Carta 1 - %s: R$ %.2f\n", carta1.nome, valor1_carta1);
            printf("Carta 2 - %s: R$ %.2f\n\n", carta2.nome, valor1_carta2);
            break;
        case 4:
            valor1_carta1 = carta1.pontosTuristicos;
            valor1_carta2 = carta2.pontosTuristicos;
            printf("Atributo 1 (Pontos Turísticos):\n");
            printf("Carta 1 - %s: %d pontos\n", carta1.nome, (int)valor1_carta1);
            printf("Carta 2 - %s: %d pontos\n\n", carta2.nome, (int)valor1_carta2);
            break;
        case 5:
            valor1_carta1 = -carta1.densidadePopulacional; // Negativo para inverter comparação
            valor1_carta2 = -carta2.densidadePopulacional;
            printf("Atributo 1 (Densidade Populacional):\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", carta1.nome, -valor1_carta1);
            printf("Carta 2 - %s: %.2f hab/km²\n\n", carta2.nome, -valor1_carta2);
            break;
        case 6:
            valor1_carta1 = carta1.pibPerCapita;
            valor1_carta2 = carta2.pibPerCapita;
            printf("Atributo 1 (PIB per capita):\n");
            printf("Carta 1 - %s: R$ %.2f\n", carta1.nome, valor1_carta1);
            printf("Carta 2 - %s: R$ %.2f\n\n", carta2.nome, valor1_carta2);
            break;
    }
    
    // Obter valores do segundo atributo
    switch(opcao2) {
        case 1: 
            valor2_carta1 = carta1.populacao;
            valor2_carta2 = carta2.populacao;
            break;
        case 2:
            valor2_carta1 = carta1.area;
            valor2_carta2 = carta2.area;
            break;
        case 3:
            valor2_carta1 = carta1.pib;
            valor2_carta2 = carta2.pib;
            break;
        case 4:
            valor2_carta1 = carta1.pontosTuristicos;
            valor2_carta2 = carta2.pontosTuristicos;
            break;
        case 5:
            valor2_carta1 = -carta1.densidadePopulacional;
            valor2_carta2 = -carta2.densidadePopulacional;
            break;
        case 6:
            valor2_carta1 = carta1.pibPerCapita;
            valor2_carta2 = carta2.pibPerCapita;
            break;
    }
    
    // Calcular pontuação total
    float total_carta1 = valor1_carta1 + valor2_carta1;
    float total_carta2 = valor1_carta2 + valor2_carta2;
    
    printf("\nPontuação total:\n");
    printf("Carta 1 - %s: %.2f pontos\n", carta1.nome, total_carta1);
    printf("Carta 2 - %s: %.2f pontos\n", carta2.nome, total_carta2);
    
    printf("\nResultado final: ");
    if(total_carta1 > total_carta2) {
        printf("Carta 1 (%s) venceu!\n", carta1.nome);
    } else if(total_carta1 < total_carta2) {
        printf("Carta 2 (%s) venceu!\n", carta2.nome);
    } else {
        printf("Empate!\n");
    }
    
    return 0;
}
