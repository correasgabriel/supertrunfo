#include <stdio.h>
 
int main() {
    
    // Declarando variaveis
    char cidade[50], codigo_carta[3], estado;
    unsigned long int populacao1, populacao2;
    float area1, densidade_populacional1, pib_per_capita1, super_poder1, 
    area2, densidade_populacional2, pib_per_capita2, super_poder2;
    double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2, resultado_populacao, resultado_area, resultado_pib, resultado_pontos_turisticos, resultado_densidade, 
    resultado_percapita, resultado_super_poder;

    

    // Começando processo de cadastro de cartas

    // Carta número 1

    printf("Olá, vamos cadastrar sua carta:\n");
    printf("Carta 1:\n");

    printf("Digite a letra que representa o estado da sua carta:\n");
    scanf(" %c", &estado);
    
    printf("Digite o código da sua carta (a letra do estado seguida de um número de 01 a 04):\n");
    scanf("%s", codigo_carta);
    
    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade da sua carta (somente números):\n");
    scanf("%lu", &populacao1);
    
    printf("Digite a área da cidade da sua carta em quilômetros quadrados:\n");
    scanf("%f", &area1);
    
    printf("Digite o PIB da cidade da sua carta (somente números):\n");
    scanf("%lf", &pib1);
    
    printf("Digite a quantidade de pontos turísticos da cidade da sua carta:\n");
    scanf("%d", &pontos_turisticos1);

    // Calculando a densidade populacional
    
    densidade_populacional1 = (float)populacao1 / area1;

    // Calculando PIB per Capta

    pib_per_capita1 = pib1 / populacao1;

    // Calculando super poder
        super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    // Mostrando os dados que o usuário inseriu:

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %lu \n" , populacao1);
    printf("Área: %.2f km² \n" , area1);
    printf("PIB: R$%.2lf\n" , pib1);
    printf("Número de pontos turísticos: %d\n" , pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n" , densidade_populacional1);
    printf("PIB per Capita: R$%.2f\n" , pib_per_capita1);
    printf("Super Poder: %f\n" , super_poder1);

    // Carta número 2

    printf("Carta 2:\n");

    printf("Digite a letra que representa o estado da sua carta:\n");
    scanf(" %c", &estado);
    
    printf("Digite o código da sua carta (a letra do estado seguida de um número de 01 a 04):\n");
    scanf("%s", codigo_carta);
    
    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade da sua carta (somente números):\n");
    scanf("%lu", &populacao2);
    
    printf("Digite a área da cidade da sua carta em quilômetros quadrados:\n");
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade da sua carta (somente números):\n");
    scanf("%lf", &pib2);
    
    printf("Digite a quantidade de pontos turísticos da cidade da sua carta:\n");
    scanf("%d", &pontos_turisticos2);

    // Calculando a densidade populacional
    
    densidade_populacional2 = (float)populacao2 / area2;

    // Calculando PIB per Capta

    pib_per_capita2 = pib2 / populacao2;

    // Calculando super poder

    super_poder2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);
    
    // mostrando os dados que o usuário inseriu:

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %lu \n" , populacao2);
    printf("Área: %.2f km² \n" , area2);
    printf("PIB: R$%.2lf\n" , pib2);
    printf("Número de pontos turísticos: %d\n" , pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n" , densidade_populacional2);
    printf("PIB per Capita: R$%.2f\n" , pib_per_capita2);
    printf("Super Poder: %f\n" , super_poder2);


    // comparando cartas
    resultado_populacao = populacao1 > populacao2;
    resultado_area = area1 > area2; 
    resultado_pib = pib1 > pib2;
    resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
    resultado_densidade = densidade_populacional1 < densidade_populacional2;
    resultado_percapita = pib_per_capita1 > pib_per_capita2;
    resultado_super_poder = super_poder1 > super_poder2;

    printf("Comparação das cartas (1 para Carta1 VENCEDOR e 0 para Carta2 VENCEDOR):\n");
    printf("População: %u\n", resultado_populacao);
    printf("Área: %u\n", resultado_area);
    printf("PIB: %u\n", resultado_pib);
    printf("Pontos turísticos: %u\n", resultado_pontos_turisticos);
    printf("Densidade populacional: %u\n", resultado_densidade);
    printf("PIB Per Capita: %u\n", resultado_percapita);
    printf("Super Poder: %u\n", resultado_super_poder);


    return 0;
}