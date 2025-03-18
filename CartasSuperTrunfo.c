#include <stdio.h>

// Desafio Super Trunfo - Cidade
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidade.
// Siga os comentários para implementar cada parte do desafio.
//Teste Lucas

int main() {
        // Sugestão: Defina variáveis separadas para cada atributo da cidade.
        // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        // Declaração das variáveis para armazenar as informações das cartas
        char codigo1[5], codigo2[5];

        char cidade1[100], cidade2[100];

        int populacao1, populacao2;

        float area1, area2, pib1, pib2;

        int pontosTuristicos1, pontosTuristicos2;

        float densidade1, densidade2;

        float pibcapita1, pibcapita2, superPoder1, superPoder2;

        // Calculos cartas

        densidade1 = populacao1 / area1;

        densidade2 = populacao2 / area2;

        pibcapita1 = pib1 / populacao1;

        pibcapita2 = pib2 / populacao2;

        superPoder1 = (float)populacao1 + area1 + pib1 + pontosTuristicos1 + pibcapita1 + (1 / densidade1);

        superPoder2 = (float)populacao2 + area2 + pib2 + pontosTuristicos2 + pibcapita2 + (1 / densidade2);

        // Cadastro das Cartas
        // Cadastro carta 1
        // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

            printf("Informe os dados da Carta 1:\n");
  
            printf("Código da Carta: ");
            scanf("%s", codigo1);
            printf("Nome do cidade: ");
            scanf(" %s", cidade1);  
            printf("População: ");
            scanf("%d", &populacao1);
            printf("Área (km²): ");
            scanf("%f", &area1);
            printf("PIB da cidade: ");
            scanf("%f", &pib1);
            printf("Número de Pontos Turísticos: ");
            scanf("%d", &pontosTuristicos1);

          // Limpeza de dados para exibição de informações limpas
            system("clear");

          // Cadastro carta 2:
          // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

            printf("\nInforme os dados da Carta 2:\n");

            printf("Código da Carta: ");
            scanf("%s", codigo2);
            printf("Nome da Cidade: ");
            scanf(" %s", cidade2);  
            printf("População: ");
            scanf("%d", &populacao2);
            printf("Área (km²): ");
            scanf("%f", &area2);
            printf("PIB da cidade: ");
            scanf("%f", &pib2);
            printf("Número de Pontos Turísticos: ");
            scanf("%d", &pontosTuristicos2);

          // Limpeza de dados para exibição de informações limpas
            system("clear");
    
          // Exibição dos Dados das Cartas
          // Exiba os valores inseridos para cada atributo da cidade, um por linha.

          // Informações Carta 1:
            
            printf("\nCarta 1:\n");

            printf("Código: %s\n", codigo1);
            printf("Nome da Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f km²\n", area1);
            printf("PIB: %.2f\n", pib1);
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
            printf("Densidade populacional: %f\n", densidade1);
            printf("PIB per capita: %f\n", pibcapita1);

          // Informações Carta 2:

            printf("\nCarta 2:\n");

            printf("Código: %s\n", codigo2);
            printf("Nome da Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f km²\n", area2);
            printf("PIB: %.2f\n", pib2);
            printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
            printf("Densidade populacional: %f\n", densidade2);
            printf("PIB per capita: %f\n", pibcapita2);

            // Comparações das cartas

            printf("\nComparação de Cartas:\n");
            printf("População: Carta 1 venceu (%d)\n", populacao1 > populacao2);

            printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

            printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

            printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2);

            printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 > densidade2);

            printf("PIB per Capita: Carta 1 venceu (%d)\n", pibcapita1 > pibcapita2);

            printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

            
            // comparação das Cartas
            printf("\nComparação de Cartas (Atributo: População):\n");
        
            printf("Carta 1 - %s (%s): %d\n", cidade1, populacao1);
            printf("Carta 2 - %s (%s): %d\n", cidade2, populacao2);
          
              if (populacao1 > populacao2) {
                  printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
              } else if (cidade1 < cidade2) {
                  printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
              } 
            

    return 0;
}
