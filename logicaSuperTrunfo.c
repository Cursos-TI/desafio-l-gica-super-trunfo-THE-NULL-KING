#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Variáveis da 1ª Carta
    char estado_1; // Código do Estado, uma letra de 'A' a 'H'
    int id_1; // O código da Cidade, um numero de '01' a '04'
    char cidade_1[20]; // Nome da Cidade
    unsigned long int populacao_1; // População da Cidade
    float areaKm_1; // A área da Cidade em Km²
    double PIB_1; // Produto Interno Bruto(PIB) da Cidade
    int pontosTuris_1; // Quantidade de pontos Turísticos da Cidade
    

    // Variáveis da 2ª Carta
    char estado_2; // Código do Estado, uma letra de 'A' a 'H'
    int id_2; // O código da Cidade, formado pela letra + um numero de '01' a '04'
    char cidade_2[20]; // Nome da Cidade
    unsigned long int populacao_2; // População da Cidade
    float areaKm_2; // A área da Cidade em Km²
    double PIB_2; // Produto Interno Bruto(PIB) da Cidade
    int pontosTuris_2; // Quantidade de pontos Turísticos da Cidade
    
    int opcao;
    int atributo_1, atributo_2;
    int comp_atri;
    int atri_soma_1, atri_soma_2;

    // Menu
    printf("=== Super Trunfo ===\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n\n");
    switch(opcao){
        case 1:
            // Cadastro das Cartas:
            // Cadastro da 1ª Carta:
            printf("Insira o Código do Estado(Uma Letra de 'A' a 'H'): ");
            scanf(" %c", &estado_1);
            printf("Insira o Código da Cidade(Um Número de '01' a '04'): ");
            scanf("%d", &id_1);
            printf("Insira o Nome da Cidade: ");
            while (getchar() != '\n'); // Tive que usar isso para limpar o buffer
            fgets(cidade_1, sizeof(cidade_1), stdin); // Isso aceita nomes compostos
            cidade_1[strcspn(cidade_1, "\n")] = '\0';
            printf("Insira a População da Cidade: ");
            scanf("%lu", &populacao_1);
            printf("Insira a área da Cidade em Km²: ");
            scanf("%f", &areaKm_1);
            printf("Insira o PIB da Cidade: ");
            scanf("%lf", &PIB_1);
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
            scanf(" %i", &id_2);
            printf("Insira o nome da Cidade: ");
            while (getchar() != '\n'); // Limpando o buffer de novo
            fgets(cidade_2, sizeof(cidade_2), stdin);
            cidade_2[strcspn(cidade_2, "\n")] = '\0';
            printf("Insira a população da Cidade: ");
            scanf("%lu", &populacao_2);
            printf("Insira a área da Cidade em Km²: ");
            scanf("%f", &areaKm_2);
            printf("Insira o PIB da Cidade: ");
            scanf("%lf", &PIB_2);
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
            printf("Densidade Populacional: %.4fhab/Km²\n", densPop_1);
            printf("PIB da Cidade: R$%.2lf\n", PIB_1);
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
            printf("Densidade Populacional: %.4fhab/Km²\n", densPop_2);
            printf("PIB da Cidade: R$%.2lf\n", PIB_2);
            printf("PIB per Capita: R$%.2f\n", PIBperCapita_2);
            printf("Quantidade de Pontos Turisticos da Cidade: %i\n", pontosTuris_2);
            printf("Super Poder da Carta: %f\n", super2);

            // Comparando as Cartas

            printf("\n\n=== Comparação das cartas  ===\n");
            printf("1. Nome\n");
            printf("2. População\n");
            printf("3. Área\n");
            printf("4. Densidade Populacional\n");
            printf("5. PIP\n");
            printf("6. PIB per Capita\n");
            printf("7. Pontos Turisticos\n");
            printf("8. Super Poder\n");
            printf("Escolha o 1° Atributo a ser comparado: ");
            scanf("%d", &atributo_1);
            printf("Escolha o 2° Atributo a ser comparado: ");
            scanf("%d", &atributo_2);
            printf("\n\n");
            // Verificando se os atributos são iguais
            comp_atri = atributo_1 == atributo_2 ? 1 : 0;

            if(comp_atri == 1){
                printf("Os atributos não podem ser iguais!\n");
            }else{
                switch(atributo_1){
                    case 1:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                    break;
                    case 2:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("População:\n");
                        printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                        if(populacao_1 > populacao_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(populacao_1 == populacao_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_1 = 1;
                    break;
                    case 3:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Área:\n");
                        printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                        if(areaKm_1 > areaKm_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(areaKm_1 == areaKm_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_1 = 2;
                    break;
                    case 4:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Densidade Populacional:\n");
                        printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                        if(densPop_1 < densPop_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(densPop_1 == densPop_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_1 = 3;
                    break;
                    case 5:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("PIB:\n");
                        printf("=== %.2lf - %.2lf ===\n", PIB_1, PIB_2);
                        if(PIB_1 > PIB_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(PIB_1 == PIB_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_1 = 4;
                    break;
                    case 6:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("PIB per Capita:\n");
                        printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                        if(PIBperCapita_1 > PIBperCapita_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(PIBperCapita_1 == PIBperCapita_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_1 = 5;
                    break;
                    case 7:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Pontos Turisticos:\n");
                        printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                        if(pontosTuris_1 > pontosTuris_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(pontosTuris_1 == pontosTuris_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_1 = 6;
                    break;
                    case 8:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Super Poder:\n");
                        printf("=== %.2f - %.2f ===\n", super1, super2);
                        if(super1 > super2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(super1 == super2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_1 = 7;
                    break;
                    default:
                        printf("Opção Invalida!");
                    break;
                }
                // Comparando o segundo atributo
                switch(atributo_2){
                    case 1:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                    break;
                    case 2:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("População:\n");
                        printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                        if(populacao_1 > populacao_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(populacao_1 == populacao_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_2 = 1;
                    break;
                    case 3:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Área:\n");
                        printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                        if(areaKm_1 > areaKm_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(areaKm_1 == areaKm_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_2 = 2;
                    break;
                    case 4:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Densidade Populacional:\n");
                        printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                        if(densPop_1 < densPop_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(densPop_1 == densPop_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_2 = 3;
                    break;
                    case 5:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("PIB:\n");
                        printf("=== %.2lf - %.2lf ===\n", PIB_1, PIB_2);
                        if(PIB_1 > PIB_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(PIB_1 == PIB_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_2 = 4;
                    break;
                    case 6:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("PIB per Capita:\n");
                        printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                        if(PIBperCapita_1 > PIBperCapita_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(PIBperCapita_1 == PIBperCapita_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_2 = 5;
                    break;
                    case 7:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Pontos Turisticos:\n");
                        printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                        if(pontosTuris_1 > pontosTuris_2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(pontosTuris_1 == pontosTuris_2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_2 = 6;
                    break;
                    case 8:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                        printf("Super Poder:\n");
                        printf("=== %.2f - %.2f ===\n", super1, super2);
                        if(super1 > super2){
                            printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                        }else if(super1 == super2){
                            printf("Empate!\n");
                        }else{
                            printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                        }
                        atri_soma_2 = 7;
                    break;
                    default:
                        printf("Opção Invalida!");
                    break;
                    }
                
                // Verificando quem venceu a rodada
                switch(atri_soma_1 && atri_soma_2){
                case ((1) && (2)) || ((2) && (1)):
                    printf("\n\n=== %s - %s ===\n", cidade_1, cidade_2);
                    printf("Atributos para a Comparação:\n");
                    printf("\n=== População - População ===\n");
                    printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                    printf("\n=== Área - Área ===\n");
                    printf("=== %.2f - %.2f ===\n\n", areaKm_1, areaKm_2);
                    if((populacao_1 + areaKm_1) > (populacao_2 + areaKm_2)){
                        printf("A carta %c%i %s venceu a rodada!\n", estado_1, id_1, cidade_1);
                    }else if((populacao_1 + areaKm_1) == (populacao_2 + areaKm_2)){
                        printf("Empate!\n");
                    }else{
                        printf("A carta %c%i %s venceu a rodada!\n", estado_2, id_2, cidade_2);
                    }
                break;
                
                
                default:
                    break;
                }
            }
        break;
        case 2:
            printf("\n\n=== Regras ===\n");
            printf("1. Vence a carta com o maior valor no atributo escolhido.\n");
            printf("2. Para a Densidade Demográfica: Vence a carta com o menor valor.\n");
        break;
        case 3:
            printf("ADEUS!\n");
        break;
        default:
            printf("Opção Invalida!\n");
        break;
    }

    return 0;
}
