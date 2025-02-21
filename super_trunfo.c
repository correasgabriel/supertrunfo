#include <stdio.h>
 
int main() {
    
    // Declarando variaveis
    char cidade[50], codigo_carta[3], estado;
    int populacao, pontos_turisticos;
    float area, pib;
    

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
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade da sua carta em quilômetros quadrados:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade da sua carta:\n");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos da cidade da sua carta:\n");
    scanf("%d", &pontos_turisticos);
    
    // Mostrando os dados que o usuário inseriu:

    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n" , populacao);
    printf("Área: %.2f km² \n" , area);
    printf("PIB: %.1f bilhões de reais \n" , pib);
    printf("Número de pontos turísticos: %d\n" , pontos_turisticos);

    // Carta número 2

    printf("Carta 2:\n");

    printf("Digite a letra que representa o estado da sua carta:\n");
    scanf(" %c", &estado);
    
    printf("Digite o código da sua carta (a letra do estado seguida de um número de 01 a 04):\n");
    scanf("%s", codigo_carta);
    
    printf("Digite o nome da cidade da sua carta:\n");
    scanf("%s", cidade);

    printf("Digite o número de habitantes da cidade da sua carta (somente números):\n");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade da sua carta em quilômetros quadrados:\n");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade da sua carta:\n");
    scanf("%f", &pib);
    
    printf("Digite a quantidade de pontos turísticos da cidade da sua carta:\n");
    scanf("%d", &pontos_turisticos);
    
    // mostrando os dados que o usuário inseriu:

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s \n", codigo_carta);
    printf("Nome da cidade: %s \n", cidade);
    printf("População: %d \n" , populacao);
    printf("Área: %.2f km² \n" , area);
    printf("PIB: %.1f bilhões de reais \n" , pib);
    printf("Número de pontos turísticos: %d\n" , pontos_turisticos);

    return 0;
}