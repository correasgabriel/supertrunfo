#include <stdio.h>
 
int main() {
    
    // Declarando variaveis
    char cidade1[50], cidade2[50], codigo_carta1[4], codigo_carta2[4], estado1, estado2;
    unsigned long int populacao1, populacao2;
    float area1, densidade_populacional1, pib_per_capita1, super_poder1, 
    area2, densidade_populacional2, pib_per_capita2, super_poder2;
    double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2, opcao;
    

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
    
    // Comparando cartas com menu interativo:

    printf("*** Escolha o atributo que você deseja comparar ***\n");
    printf("1 - População.\n");
    printf("2 - Área.\n");
    printf("3 - PIB.\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica.\n");
    scanf("%d" , &opcao);

    // Exibindo resultados:

    printf("### RESULTADO COMPARAÇÃO ###\n");
    printf("### %s X %s ###\n", cidade1, cidade2);
    switch (opcao){

        case 1: 
            printf("Vamos comparar a população:\n");
            printf("A população de %s é: %lu hab. População de %s é: %lu hab.\n" , cidade1 , populacao1 , cidade2 , populacao2);
        
            if (populacao1 > populacao2)
            { 
                printf("### A CARTA UM VENCEU!! ###\n");
            } else if (populacao1 < populacao2)
            {
                printf("### A CARTA DOIS VENCEU!! ###\n");
            } else {
                printf("### EMPATOU!! ###\n");
            }
        break;

        case 2: 
            printf("Vamos comparar a área:\n");
            printf("A área de %s é: %f km². A área de %s é: %f km².\n" , cidade1 , area1, cidade2 , area2);
        
            if (area1 > area2)
            { 
                printf("### A CARTA UM VENCEU!! ###\n");
            } else if (area1 < area2)
            {
                printf("### A CARTA DOIS VENCEU!! ###\n");
            } else {
                printf("### EMPATOU!! ###\n");
            }
        break;

        case 3 :
            printf("Vamos comparar o PIB:\n");
            printf("O PIB de %s é: %lf. O PIB de %s é: %lf.\n" , cidade1 , pib1, cidade2 , pib2);
        
            if (pib1 > pib2)
            { 
                printf("### A CARTA UM VENCEU!! ###\n");
            } else if (pib1 < pib2)
            {
                printf("### A CARTA DOIS VENCEU!! ###\n");
            } else {
                printf("### EMPATOU!! ###\n");
            }
        break;

        case 4 :
            printf("Vamos comparar o número de pontos turísticos:\n");
            printf("%s tem %d pontos turísticos. %s tem %d pontos turísticos.\n" , cidade1 , pontos_turisticos1, cidade2 , pontos_turisticos2);
        
            if (pontos_turisticos1 > pontos_turisticos2)
            { 
                printf("### A CARTA UM VENCEU!! ###\n");
            } else if (pontos_turisticos1 < pontos_turisticos2)
            {
                printf("### A CARTA DOIS VENCEU!! ###\n");
            } else {
                printf("### EMPATOU!! ###\n");
            }
        break;
        
         case 5 :
            printf("Vamos comparar a densidade demográfica:\n");
            printf("A densidade demográfica de %s é: %f. A densidade demográfica de %s é: %f.\n" , cidade1 , densidade_populacional1, cidade2 , densidade_populacional2);
        
            if (densidade_populacional1 < densidade_populacional2)
            { 
                printf("### A CARTA UM VENCEU!! ###\n");
            } else if (densidade_populacional1 > densidade_populacional2)
            {
                printf("### A CARTA DOIS VENCEU!! ###\n");
            } else {
                printf("### EMPATOU!! ###\n");
            }
        break;

        default:
            printf("Opção inválida!\n");
        break;
    }
    return 0;
}