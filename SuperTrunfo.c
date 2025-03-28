#include <stdio.h>
#include <string.h>
    // Desafio Super Trunfo - Cidade
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidade.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste Lucas
    float obterValor(int opcao, unsigned long int pop, float area, float pib, float densidade, float pibCapita);

    int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Declaração das variáveis para armazenar as informações das cartas
    
    // Declaração das variáveis para as cartas
    
    char estado1, codigo1[5], cidade1[50]; 
    char estado2, codigo2[5], cidade2[50];
    unsigned long int populacao1; 
    unsigned long int populacao2;
    int pontos_tur1; 
    int pontos_tur2;
    int opcao, opcao1, opcao2;
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1; 
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;

    // Leitura dos dados para as cartas
    printf("Digite os dados da Carta 1:\n");

    printf("Estado: ");
    scanf(" %c", &estado1); 
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_tur1);

    // Cálculos para a primeira carta
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 * 1000000000 / populacao1;  // Convertendo PIB de bilhões para reais
    super_poder1 = (float)populacao1 + area1 + pib1 * 1000000000 + pontos_tur1 + pib_per_capita1 + (1.0 / densidade_populacional1);

    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado: ");
    scanf(" %c", &estado2);  
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_tur2);

    // Cálculos para a segunda carta
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 * 1000000000 / populacao2;
    super_poder2 = (float)populacao2 + area2 + pib2 * 1000000000 + pontos_tur2 + pib_per_capita2 + (1.0 / densidade_populacional2);

    // Atributo SUPER PODER Comparação e exibição dos resultados 
      // Exibição do menu interativo
      printf("\nEscolha o primeiro atributo para comparação:\n");
      printf("1 - População\n");
      printf("2 - Área\n");
      printf("3 - PIB\n");
      printf("4 - Densidade Populacional\n");
      printf("5 - PIB per Capita\n");
      printf("Digite sua opção: ");
      scanf(" %d", &opcao1);
      
      do {
          printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
          printf("1 - População\n");
          printf("2 - Área\n");
          printf("3 - PIB\n");
          printf("4 - Densidade Populacional\n");
          printf("5 - PIB per Capita\n");
          printf("Digite sua opção: ");
          scanf(" %d", &opcao2);
      } while (opcao2 == opcao1);
  
      float valor1_carta1, valor1_carta2, valor2_carta1, valor2_carta2;
      float soma1, soma2;
  
      // Função auxiliar para obter valores dos atributos
      float obterValor(int opcao, unsigned long int pop, float area, float pib, float densidade, float pibCapita) {
          switch (opcao) {
              case 1: return pop;
              case 2: return area;
              case 3: return pib;
              case 4: return 1.0 / densidade; // Inverter para densidade populacional
              case 5: return pibCapita;
              default: return 0;
          }
      }
  
      valor1_carta1 = obterValor(opcao1, populacao1, area1, pib1, densidade1, pib1);
      valor1_carta2 = obterValor(opcao1, populacao2, area2, pib2, densidade_populacional2, pib2);
      valor2_carta1 = obterValor(opcao2, populacao1, area1, pib1, densidade_populacional1, pib1);
      valor2_carta2 = obterValor(opcao2, populacao2, area2, pib2, densidade_populacional2, pib2);
  
      soma1 = valor1_carta1 + valor2_carta1;
      soma2 = valor1_carta2 + valor2_carta2;
  
      printf("\nComparação de Cartas:\n");
      printf("%s: %.2f (Atributo 1) + %.2f (Atributo 2) = %.2f\n", estado1, valor1_carta1, valor2_carta1, soma1);
      printf("%s: %.2f (Atributo 1) + %.2f (Atributo 2) = %.2f\n", estado2, valor1_carta2, valor2_carta2, soma2);
      
      if (soma1 > soma2) {
          printf("Resultado: %s venceu!\n", estado1);
      } else if (soma1 < soma2) {
          printf("Resultado: %s venceu!\n", estado2);
      } else {
          printf("Resultado: Empate!\n");
      }

    return 0;
}
