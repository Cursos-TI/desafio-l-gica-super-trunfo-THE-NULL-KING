#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis da 1ª Carta
    char estado_1; // Código do Estado, uma letra de 'A' a 'H'
    int id_1; // O código da Cidade, um numero de '01' a '04'
    char cidade_1[20]; // Nome da Cidade
    unsigned long int populacao_1; // População da Cidade
    float areaKm_1; // A área da Cidade em Km²
    float PIB_1; // Produto Interno Bruto(PIB) da Cidade
    int pontosTuris_1; // Quantidade de pontos Turísticos da Cidade
    

    // Variáveis da 2ª Carta
    char estado_2; // Código do Estado, uma letra de 'A' a 'H'
    int id_2; // O código da Cidade, formado pela letra + um numero de '01' a '04'
    char cidade_2[20]; // Nome da Cidade
    unsigned long int populacao_2; // População da Cidade
    float areaKm_2; // A área da Cidade em Km²
    float PIB_2; // Produto Interno Bruto(PIB) da Cidade
    int pontosTuris_2; // Quantidade de pontos Turísticos da Cidade
    

    // Cadastro das Cartas:
    // Cadastro da 1ª Carta:
    printf("Insira o Código do Estado(Uma Letra de 'A' a 'H'): ");
    scanf("%c", &estado_1);
    printf("Insira o Código da Cidade(Um Número de '01' a '04'): ");
    scanf("%i", &id_1);
    printf("Insira o Nome da Cidade: ");
    scanf("%s", cidade_1); // Isso não funciona com nomes compostos
    printf("Insira a População da Cidade: ");
    scanf("%lu", &populacao_1);
    printf("Insira a área da Cidade em Km²: ");
    scanf("%f", &areaKm_1);
    printf("Insira o PIB da Cidade: ");
    scanf("%f", &PIB_1);
    printf("Insira a quantidade de Pontos Turisticos da Cidade: ");
    scanf("%i", &pontosTuris_1);
    printf("Primeira carta cadastrada!\n\n");
    float densPop_1 = (float) populacao_1 / areaKm_1; // Cálculo para a Densidade Populacional
    float PIBperCapita_1 = (float) PIB_1 / populacao_1; // Cálculo para o PIB per Capita
    float super1 = (float) populacao_1 + areaKm_1 + PIB_1 + pontosTuris_1 + PIBperCapita_1 + (1/densPop_1); // Calculo do Super poder da Carta

    // Cadastro da 2ª Carta:
    printf("Insira o Código do Estado(Uma Letra de 'A' a 'H'): ");
    scanf(" %c", &estado_2);
    printf("Insira o Código da Cidade(Um Número de '01' a '04'): ");
    scanf("%i", &id_2);
    printf("Insira o nome da Cidade: ");
    scanf("%s", cidade_2); // Isso continua não funcionando com nomes compostos
    printf("Insira a população da Cidade: ");
    scanf("%lu", &populacao_2);
    printf("Insira a área da Cidade em Km²: ");
    scanf("%f", &areaKm_2);
    printf("Insira o PIB da Cidade: ");
    scanf("%f", &PIB_2);
    printf("Insira a quantidade de pontos turísticos da Cidade: ");
    scanf("%i", &pontosTuris_2);
    printf("Segunda carta cadastrada!\n");
    float densPop_2 = (float) populacao_2 / areaKm_2; // Cálculo para a Densidade Populacional
    float PIBperCapita_2 = (float) PIB_2 / populacao_2; // Cálculo para o PIB per Capita
    float super2 = (float) populacao_2 + areaKm_2 + PIB_2 + pontosTuris_2 + PIBperCapita_2 + (1/densPop_2); // Super poder da Carta

    // Exibição dos Dados das Cartas:
    // Primeira Carta
    printf("\n\n=== Dados da 1ª Carta ===\n");
    printf("Código do Estado: %c\n", estado_1);
    printf("Código da Cidade: %i\n", id_1);
    printf("Código da Carta: %c%i\n",estado_1 , id_1); // Isso é uma gambiarra gigante, mas funciona!
    printf("Nome da Cidade: %s\n", cidade_1);
    printf("População da Cidade: %lu\n", populacao_1);
    printf("Área da Cidade: %.2fKm²\n", areaKm_1);
    printf("Densidade Populacional: %.2fhab/Km²\n", densPop_1);
    printf("PIB da Cidade: R$%.2f\n", PIB_1);
    printf("PIB per Capita: R$%.2f\n", PIBperCapita_1);
    printf("Quantidade de Pontos Turisticos da Cidade: %i\n", pontosTuris_1);
    printf("Super Poder da Carta: %f\n", super1);

    // Segunda Carta
    printf("\n\n=== Dados da 2ª Carta ===\n");
    printf("Código do Estado: %c\n", estado_2);
    printf("Código da Cidade: %i\n", id_2);
    printf("Código da Carta: %c%i\n",estado_2 , id_2); // É a mesma gambiarra de antes!
    printf("Nome da Cidade: %s\n", cidade_2);
    printf("População da Cidade: %lu\n", populacao_2);
    printf("Área da Cidade: %.2fKm²\n", areaKm_2);
    printf("Densidade Populacional: %.2fhab/Km²\n", densPop_2);
    printf("PIB da Cidade: R$%2.f\n", PIB_2);
    printf("PIB per Capita: R$%.2f\n", PIBperCapita_2);
    printf("Quantidade de Pontos Turisticos da Cidade: %i\n", pontosTuris_2);
    printf("Super Poder da Carta: %f\n", super2);

    // Comparando as Cartas
    printf("\n\n=== Comparação das cartas  ===\n");
    printf("População:\n");
    if(populacao_1 > populacao_2){
        printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
    }else{
        printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
    }
    printf("Área:\n");
    if(areaKm_1 > areaKm_2){
        printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
    }else{
        printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
    }
    printf("Densidade Populacional:\n");
    if(densPop_1 < densPop_2){
        printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
    }else{
        printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
    }
    printf("PIB:\n");
    if(PIB_1 > PIB_2){
        printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
    }else{
        printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
    }
    printf("PIB per Capita:\n");
    if(PIBperCapita_1 > PIBperCapita_2){
        printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
    }else{
        printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
    }
    printf("Pontos Turisticos:\n");
    if(pontosTuris_1 > pontosTuris_2){
        printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
    }else{
        printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
    }
    printf("Super Poder:\n");
    if(super1 > super2){
        printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
    }else{
        printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
    }

    return 0;
}
