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
    int atri_soma_1, atri_soma_2;// Eu já tinha criado essa variavel antes, como eu não queria apagar e repensar a lógica, eu só usei ela de novo.

    // Menu
    printf("=== Super Trunfo ===\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);
    printf("\n\n");
    switch(opcao){
        case 1:// Iniciar Jogo
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
                switch(atributo_1){// Isso está aqui só por redundancia.
                    case 1:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                    break;
                    case 2:
                        atri_soma_1 = 1;
                    break;
                    case 3:
                        atri_soma_1 = 2;
                    break;
                    case 4:
                        atri_soma_1 = 3;
                    break;
                    case 5:
                        atri_soma_1 = 4;
                    break;
                    case 6:
                        atri_soma_1 = 5;
                    break;
                    case 7:
                        atri_soma_1 = 6;
                    break;
                    case 8:
                        
                        atri_soma_1 = 7;
                    break;
                    default:
                        printf("Opção Invalida!");
                    break;
                }
                // Comparando o segundo atributo
                switch(atributo_2){// Mesma coisa do que o switch de cima, é só redundancia.
                    case 1:
                        printf("=== %s - %s ===\n", cidade_1, cidade_2);
                    break;
                    case 2:
                        atri_soma_2 = 1;
                    break;
                    case 3:
                        atri_soma_2 = 2;
                    break;
                    case 4:
                        atri_soma_2 = 3;
                    break;
                    case 5:
                        atri_soma_2 = 4;
                    break;
                    case 6:
                        atri_soma_2 = 5;
                    break;
                    case 7:
                        atri_soma_2 = 6;
                    break;
                    case 8:
                        atri_soma_2 = 7;
                    break;
                    default:
                        printf("Opção Invalida!");
                    break;
                    }
                
                // Verificando quem venceu a rodada
                // Isso vai quebrar se escolher comparar o nome com outro atributo, mas não é pra ninguém fazer isso, então acho que tá tudo bem.
                switch (atri_soma_1){// Isso sim é o que importa, o switch que vai somar e comparar os atributos.
                    case 1:// Comparando População com:
                        switch (atri_soma_2){
                            case 2:// Área
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);// Vai exibir o nome das cidades
                                printf("População:\n");// Vai exibir o 1º atributo que foi escolhido
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);// Vai exibir os valores do 1º atributo
                                printf("Área:\n");// Vai exibir o 2º atributo que foi escolhido
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);// Vai exibir os valores do 2º atributo
                                printf("Soma de Atributos:\n");// Vai exibir a soma dos atributos
                                printf("=== %.2f - %.2f ===\n", (populacao_1 + areaKm_1), (populacao_2 + areaKm_2));// Vai exibir a soma dos atributos
                                if((populacao_1 + areaKm_1) > (populacao_2 + areaKm_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);// Condição de vitória da 1ª carta
                                }else if((populacao_1 + areaKm_1) == (populacao_2 + areaKm_2)){
                                    printf("Empate!\n");// Condição de empate
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);// Condição de vitória da 2ª carta
                                }// O mesmo vale para os outros atributos, só muda o que vai ser exibido.
                            break;
                            case 3:// Densidade Populacional
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (populacao_1 + densPop_1), (populacao_2 + densPop_2));
                                if((populacao_1 + densPop_1) > (populacao_2 + densPop_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((populacao_1 + densPop_1) == (populacao_2 + densPop_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 4:// PIB
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (populacao_1 + PIB_1), (populacao_2 + PIB_2));
                                if((populacao_1 + PIB_1) > (populacao_2 + PIB_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((populacao_1 + PIB_1) == (populacao_2 + PIB_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 5:// PIB per Capita
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (populacao_1 + PIBperCapita_1), (populacao_2 + PIBperCapita_2));
                                if((populacao_1 + PIBperCapita_1) > (populacao_2 + PIBperCapita_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((populacao_1 + PIBperCapita_1) == (populacao_2 + PIBperCapita_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 6:// Pontos Turisticos
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %lu - %lu ===\n", (populacao_1 + pontosTuris_1), (populacao_2 + pontosTuris_2));
                                if((populacao_1 + pontosTuris_1) > (populacao_2 + pontosTuris_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((populacao_1 + pontosTuris_1) == (populacao_2 + pontosTuris_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 7:// Super Poder
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (populacao_1 + super1), (populacao_2 + super2));
                                if((populacao_1 + super1) > (populacao_2 + super2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((populacao_1 + super1) == (populacao_2 + super2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                        }
                    break;
                    case 2:// Comparando Área com:
                        switch (atri_soma_2){
                            case 1:// População
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (areaKm_1 + populacao_1), (areaKm_2 + populacao_2));
                                if((areaKm_1 + populacao_1) > (areaKm_2 + populacao_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((areaKm_1 + populacao_1) == (areaKm_2 + populacao_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 3:// Densidade Populacional
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (areaKm_1 + densPop_1), (areaKm_2 + densPop_2));
                                if((areaKm_1 + densPop_1) > (areaKm_2 + densPop_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((areaKm_1 + densPop_1) == (areaKm_2 + densPop_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 4:// PIB
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (areaKm_1 + PIB_1), (areaKm_2 + PIB_2));
                                if((areaKm_1 + PIB_1) > (areaKm_2 + PIB_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((areaKm_1 + PIB_1) == (areaKm_2 + PIB_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 5:// PIB per Capita
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (areaKm_1 + PIBperCapita_1), (areaKm_2 + PIBperCapita_2));
                                if((areaKm_1 + PIBperCapita_1) > (areaKm_2 + PIBperCapita_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((areaKm_1 + PIBperCapita_1) == (areaKm_2 + PIBperCapita_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 6:// Pontos Turisticos
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2lf - %.2lf ===\n", (areaKm_1 + pontosTuris_1), (areaKm_2 + pontosTuris_2));
                                if((areaKm_1 + pontosTuris_1) > (areaKm_2 + pontosTuris_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((areaKm_1 + pontosTuris_1) == (areaKm_2 + pontosTuris_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 7:// Super Poder
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (areaKm_1 + super1), (areaKm_2 + super2));
                                if((areaKm_1 + super1) > (areaKm_2 + super2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((areaKm_1 + super1) == (areaKm_2 + super2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                        }
                    break;
                    case 3:// Comparando Densidade Populacional com:
                        switch (atri_soma_2){
                            case 1:// População
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (densPop_1 + populacao_1), (densPop_2 + populacao_2));
                                if((densPop_1 + populacao_1) > (densPop_2 + populacao_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((densPop_1 + populacao_1) == (densPop_2 + populacao_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 2:// Área
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (densPop_1 + areaKm_1), (densPop_2 + areaKm_2));
                                if((densPop_1 + areaKm_1) > (densPop_2 + areaKm_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((densPop_1 + areaKm_1) == (densPop_2 + areaKm_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 4:// PIB
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (densPop_1 + PIB_1), (densPop_2 + PIB_2));
                                if((densPop_1 + PIB_1) > (densPop_2 + PIB_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((densPop_1 + PIB_1) == (densPop_2 + PIB_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 5:// PIB per Capita
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (densPop_1 + PIBperCapita_1), (densPop_2 + PIBperCapita_2));
                                if((densPop_1 + PIBperCapita_1) > (densPop_2 + PIBperCapita_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((densPop_1 + PIBperCapita_1) == (densPop_2 + PIBperCapita_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 6:// Pontuação Turistica
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2lf - %.2lf ===\n", (densPop_1 + pontosTuris_1), (densPop_2 + pontosTuris_2));
                                if((densPop_1 + pontosTuris_1) > (densPop_2 + pontosTuris_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((densPop_1 + pontosTuris_1) == (densPop_2 + pontosTuris_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 7:// Super Poder
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (densPop_1 + super1), (densPop_2 + super2));
                                if((densPop_1 + super1) > (densPop_2 + super2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((densPop_1 + super1) == (densPop_2 + super2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                        }
                    break;
                    case 4:// Comparando PIB com:
                        switch (atri_soma_2){
                            case 1:// População
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (PIB_1 + populacao_1), (PIB_2 + populacao_2));
                                if((PIB_1 + populacao_1) > (PIB_2 + populacao_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIB_1 + populacao_1) == (PIB_2 + populacao_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 2:// Área
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIB_1 + areaKm_1), (PIB_2 + areaKm_2));
                                if((PIB_1 + areaKm_1) > (PIB_2 + areaKm_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIB_1 + areaKm_1) == (PIB_2 + areaKm_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 3:// Densidade Populacional
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIB_1 + densPop_1), (PIB_2 + densPop_2));
                                if((PIB_1 + densPop_1) > (PIB_2 + densPop_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIB_1 + densPop_1) == (PIB_2 + densPop_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 5:// PIB per Capita
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIB_1 + PIBperCapita_1), (PIB_2 + PIBperCapita_2));
                                if((PIB_1 + PIBperCapita_1) > (PIB_2 + PIBperCapita_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIB_1 + PIBperCapita_1) == (PIB_2 + PIBperCapita_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 6:// Pontos Turisticos
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2lf - %.2fl ===\n", (PIB_1 + pontosTuris_1), (PIB_2 + pontosTuris_2));
                                if((PIB_1 + pontosTuris_1) > (PIB_2 + pontosTuris_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIB_1 + pontosTuris_1) == (PIB_2 + pontosTuris_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 7:// Super Poder
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIB_1 + super1), (PIB_2 + super2));
                                if((PIB_1 + super1) > (PIB_2 + super2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIB_1 + super1) == (PIB_2 + super2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                        }
                    break;
                    case 5:// Comparando PIB per Capita com:
                        switch (atri_soma_2){
                            case 1:// População
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIBperCapita_1 + populacao_1), (PIBperCapita_2 + populacao_2));
                                if((PIBperCapita_1 + populacao_1) > (PIBperCapita_2 + populacao_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIBperCapita_1 + populacao_1) == (PIBperCapita_2 + populacao_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 2:// Área
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIBperCapita_1 + areaKm_1), (PIBperCapita_2 + areaKm_2));
                                if((PIBperCapita_1 + areaKm_1) > (PIBperCapita_2 + areaKm_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIBperCapita_1 + areaKm_1) == (PIBperCapita_2 + areaKm_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 3:// Densidade Populacional
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIBperCapita_1 + densPop_1), (PIBperCapita_2 + densPop_2));
                                if((PIBperCapita_1 + densPop_1) > (PIBperCapita_2 + densPop_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIBperCapita_1 + densPop_1) == (PIBperCapita_2 + densPop_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 4:// PIB
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIBperCapita_1 + PIB_1), (PIBperCapita_2 + PIB_2));
                                if((PIBperCapita_1 + PIB_1) > (PIBperCapita_2 + PIB_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIBperCapita_1 + PIB_1) == (PIBperCapita_2 + PIB_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 6:// Pontos Turisticos
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2lf - %.2lf ===\n", (PIBperCapita_1 + pontosTuris_1), (PIBperCapita_2 + pontosTuris_2));
                                if((PIBperCapita_1 + pontosTuris_1) > (PIBperCapita_2 + pontosTuris_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIBperCapita_1 + pontosTuris_1) == (PIBperCapita_2 + pontosTuris_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 7:// Super Poder
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (PIBperCapita_1 + super1), (PIBperCapita_2 + super2));
                                if((PIBperCapita_1 + super1) > (PIBperCapita_2 + super2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((PIBperCapita_1 + super1) == (PIBperCapita_2 + super2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                        }
                    break;
                    case 6:// Comparando Pontos Turisticos com:
                        switch (atri_soma_2){
                            case 1:// População
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %lu - %lu ===\n", (pontosTuris_1 + populacao_1), (pontosTuris_2 + populacao_2));
                                if((pontosTuris_1 + populacao_1) > (pontosTuris_2 + populacao_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((pontosTuris_1 + populacao_1) == (pontosTuris_2 + populacao_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 2:// Área
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (pontosTuris_1 + areaKm_1), (pontosTuris_2 + areaKm_2));
                                if((pontosTuris_1 + areaKm_1) > (pontosTuris_2 + areaKm_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((pontosTuris_1 + areaKm_1) == (pontosTuris_2 + areaKm_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 3:// Densidade Populacional
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (pontosTuris_1 + densPop_1), (pontosTuris_2 + densPop_2));
                                if((pontosTuris_1 + densPop_1) > (pontosTuris_2 + densPop_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((pontosTuris_1 + densPop_1) == (pontosTuris_2 + densPop_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 4:// PIB
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (pontosTuris_1 + PIB_1), (pontosTuris_2 + PIB_2));
                                if((pontosTuris_1 + PIB_1) > (pontosTuris_2 + PIB_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((pontosTuris_1 + PIB_1) == (pontosTuris_2 + PIB_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 5:// PIB per Capita
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (pontosTuris_1 + PIBperCapita_1), (pontosTuris_2 + PIBperCapita_2));
                                if((pontosTuris_1 + PIBperCapita_1) > (pontosTuris_2 + PIBperCapita_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((pontosTuris_1 + PIBperCapita_1) == (pontosTuris_2 + PIBperCapita_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 7:// Super Poder
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (pontosTuris_1 + super1), (pontosTuris_2 + super2));
                                if((pontosTuris_1 + super1) > (pontosTuris_2 + super2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((pontosTuris_1 + super1) == (pontosTuris_2 + super2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                        }
                    break;
                    case 7:// Comparando Super Poder com:
                        switch (atri_soma_2){
                            case 1:// População
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("População:\n");
                                printf("=== %lu - %lu ===\n", populacao_1, populacao_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.2f - %.2f ===\n", (super1 + populacao_1), (super2 + populacao_2));
                                if((super1 + populacao_1) > (super2 + populacao_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((super1 + populacao_1) == (super2 + populacao_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 2:// Área
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Área:\n");
                                printf("=== %.2f - %.2f ===\n", areaKm_1, areaKm_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (super1 + areaKm_1), (super2 + areaKm_2));
                                if((super1 + areaKm_1) > (super2 + areaKm_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((super1 + areaKm_1) == (super2 + areaKm_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 3:// Densidade Populacional
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Densidade Populacional:\n");
                                printf("=== %.4f - %.4f ===\n", densPop_1, densPop_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (super1 + densPop_1), (super2 + densPop_2));
                                if((super1 + densPop_1) > (super2 + densPop_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((super1 + densPop_1) == (super2 + densPop_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 4:// PIB
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("PIB:\n");
                                printf("=== %.2f - %.2f ===\n", PIB_1, PIB_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (super1 + PIB_1), (super2 + PIB_2));
                                if((super1 + PIB_1) > (super2 + PIB_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((super1 + PIB_1) == (super2 + PIB_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 5:// PIB per Capita
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("PIB per Capita:\n");
                                printf("=== %.2f - %.2f ===\n", PIBperCapita_1, PIBperCapita_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %.4f - %.4f ===\n", (super1 + PIBperCapita_1), (super2 + PIBperCapita_2));
                                if((super1 + PIBperCapita_1) > (super2 + PIBperCapita_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((super1 + PIBperCapita_1) == (super2 + PIBperCapita_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                            case 6:// Pontos Turisticos
                                printf("\n=== %s - %s ===\n", cidade_1, cidade_2);
                                printf("Super Poder:\n");
                                printf("=== %.2f - %.2f ===\n", super1, super2);
                                printf("Pontos Turisticos:\n");
                                printf("=== %i - %i ===\n", pontosTuris_1, pontosTuris_2);
                                printf("Soma de Atributos:\n");
                                printf("=== %lf - %lf ===\n", (super1 + pontosTuris_1), (super2 + pontosTuris_2));
                                if((super1 + pontosTuris_1) > (super2 + pontosTuris_2)){
                                    printf("A carta %c%i %s venceu!\n", estado_1, id_1, cidade_1);
                                }else if((super1 + pontosTuris_1) == (super2 + pontosTuris_2)){
                                    printf("Empate!\n");
                                }else{
                                    printf("A carta %c%i %s venceu!\n", estado_2, id_2, cidade_2);
                                }
                            break;
                        }
                    break;
                    
                    default:
                    break;
                }
            }
        break;
        case 2:// Regras do Jogo
            printf("\n\n=== Regras ===\n");
            printf("1. Vence a carta com o maior valor no atributo escolhido.\n");
            printf("2. Para a Densidade Demográfica: Vence a carta com o menor valor.\n");
        break;
        case 3:// Finalizar Jogo
            printf("ADEUS!\n");
        break;
        default:// Opção inválida
            printf("Opção Invalida!\n");
        break;
    }

    return 0;
}
/* Meu Deus, quase 1000 linhas de código, eu to cansado.
Esse código vai me atormentar por um bom tempo, mas pelo menos eu aprendi a fazer um jogo de cartas.
Já prevejo que no fim do semestre vou olhar pra esse código e pensar: "Que código horrivel!".
Mas foi divertido trabalhar nisso, cansativo, mas divertido.
ADEUS*/