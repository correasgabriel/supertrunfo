#include <stdio.h>
 
int main() {
    
    // Declarando variaveis
    char cidade1[50], cidade2[50], codigo_carta1[4], codigo_carta2[4], estado1, estado2;
    unsigned long int populacao1, populacao2;
    float area1, densidade_populacional1, pib_per_capita1, super_poder1, 
    area2, densidade_populacional2, pib_per_capita2, super_poder2;
    double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    

    // Começando processo de cadastro de cartas

    // Carta número 1

    printf("Olá, vamos cadastrar sua carta:\n");
    printf("Carta 1:\n");

    printf("Digite a letra que representa o estado da sua carta:\n");
    scanf(" %c", &estado1);
    
    printf("Digite o código da sua carta (a letra do estado seguida de um número de 01 a 04):\n");
    scanf("%s", codigo_carta1);
    
    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", cidade1);

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
    printf("Estado: %c\n", estado1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da cidade: %s \n", cidade1);
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
    scanf(" %c", &estado2);
    
    printf("Digite o código da sua carta (a letra do estado seguida de um número de 01 a 04):\n");
    scanf("%s", codigo_carta2);
    
    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", cidade2);

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
    printf("Estado: %c\n", estado2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da cidade: %s \n", cidade2);
    printf("População: %lu \n" , populacao2);
    printf("Área: %.2f km² \n" , area2);
    printf("PIB: R$%.2lf\n" , pib2);
    printf("Número de pontos turísticos: %d\n" , pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n" , densidade_populacional2);
    printf("PIB per Capita: R$%.2f\n" , pib_per_capita2);
    printf("Super Poder: %f\n" , super_poder2);



    // Comparando cartas com IF e ELSE

    printf("Comparação de cartas(atributo: População):\n");
    printf("Carta 1 - %s : %lu\n", cidade1, populacao1);
    printf("Carta 2 - %s : %lu\n", cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu!", cidade2);
    }

    return 0;
}