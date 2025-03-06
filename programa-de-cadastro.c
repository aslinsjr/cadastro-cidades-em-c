#include <stdio.h>

int main()
{
    unsigned int populacao1, pontosTuristicos1;
    float area1, pib1;
    char confirmacao[5], estado1[2], cidade1[50];
    float densidade1, pibPerCapta1;
    
    unsigned int populacao2, pontosTuristicos2;
    float area2, pib2;
    char estado2[2], cidade2[50];
    float densidade2, pibPerCapta2;

    printf("Carta 1 \n");
    
    printf("Digite a letra equivalente ao estado (de A a H): ");
    scanf("%1s", estado1);
    getchar(); 

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade1);
    getchar(); 

    printf("Digite a população total da cidade: ");
    scanf("%u", &populacao1);
    getchar(); 

    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &area1);
    getchar(); 

    printf("Digite o PIB da cidade em reais: R$ ");
    scanf("%f", &pib1);
    getchar(); 

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%u", &pontosTuristicos1);
    getchar(); 

    printf("Carta 1 cadastrada com sucesso!\n");

    printf("\033[2J");
    
    printf("Carta 2\n");
    
    printf("Digite a letra equivalente ao estado (de A a H): ");
    scanf("%1s", estado2);
    getchar(); 

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade2);
    getchar(); 

    printf("Digite a população total da cidade: ");
    scanf("%u", &populacao2);
    getchar(); 

    printf("Digite a área total da cidade em km²: ");
    scanf("%f", &area2);
    getchar(); 

    printf("Digite o PIB da cidade em reais: R$ ");
    scanf("%f", &pib2);
    getchar(); 

    printf("Digite o número de pontos turisticos da cidade: ");
    scanf("%u", &pontosTuristicos2);
    getchar(); 

    printf("Carta 2 cadastrada com sucesso!\n");

    densidade1 = (area1 > 0) ? (float)populacao1 / area1 : 0;
    pibPerCapta1 = (populacao1 > 0) ? pib1 / populacao1 : 0;
    
    densidade2 = (area2 > 0) ? (float)populacao2 / area2 : 0;
    pibPerCapta2 = (populacao2 > 0) ? pib2 / populacao2 : 0;

    printf("\nDeseja exibir as cartas? (sim/não) \n");
    scanf("%4s", confirmacao);

    if(confirmacao[0] == 's' || confirmacao[0] == 'S') {
        printf("\033[2J");
        
        printf("Carta 1\n");
        printf("Estado: %c \n", estado1[0]);
        printf("Código: %c01 \n", estado1[0]);
        printf("Cidade: %s \n", cidade1);
        printf("População: %u \n", populacao1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: R$ %.2f \n", pib1);
        printf("Número de Pontos Turísticos: %u \n", pontosTuristicos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
        printf("PIB per Capita: R$ %.2f \n", pibPerCapta1);
        printf("\n");
        
        printf("Carta 2\n");
        printf("Estado: %c \n", estado2[0]);
        printf("Código: %c02 \n", estado2[0]);
        printf("Cidade: %s \n", cidade2);
        printf("População: %u \n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: R$ %.2f \n", pib2);
        printf("Número de Pontos Turísticos: %u \n", pontosTuristicos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
        printf("PIB per Capita: R$ %.2f \n", pibPerCapta2);
        printf("\n");
    } else {
        printf("Programa encerrado sem exibir as cartas.\n");
    }

    return 0;
}
