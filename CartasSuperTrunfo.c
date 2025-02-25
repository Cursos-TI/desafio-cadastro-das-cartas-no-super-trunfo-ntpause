#include <stdio.h>

int main(){
//A seguir, temos as variaveis com nomes sugestivos.
    char estado1[3], estado2[3];
    char codigo_da_carta1[4], codigo_da_carta2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float area2;

//Aqui sera onde o codigo fara as perguntas e deixa salvo nas variaveis as respostas
    printf("Estado:");//faz a pergunta
    scanf(" %2s", &estado1);//salva a resposta
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo_da_carta1); 
    printf("Nome da Cidade: ");
    scanf("%19s", cidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (bilhões): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

//aqui é sobre a segunda carta, o mesmo processo da anterior
    printf("Agora para a segunda carta: \n");
    printf("Estado: ");//faz a pergunta
    scanf(" %2s", &estado2);//salva a resposta
    printf("Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo_da_carta2);
    printf("Nome da Cidade: ");
    scanf("%19s", cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhões): ");
    scanf("%e", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

//a seguir teremos a resposta impressa na tela com os dados salvos das perguntas anteriores
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código da Carta: %s\n", codigo_da_carta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %0.2fkm²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n", pontos_turisticos1);
//o mesmo se aplica aqui para a segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código da Carta: %s\n", codigo_da_carta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %0.2f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;

}