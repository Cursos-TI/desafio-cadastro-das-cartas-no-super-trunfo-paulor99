#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //variaveis
    char estado[3];
    char estado2[3];
    char codigo_cidade[3];
    char codigo_cidade2[3];
    char nome_cidade[25]; 
    char nome_cidade2[25];
    int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int pnt_turisticos, pnt_turisticos2;
    float densidade_populacional, densidade_populacional2;
    float pib_per_capita, pib_per_capita2;
    float super_poder1, super_poder2;



    //print e leitura de dados da carta1
    printf("Insira o nome da cidade 1: \n");
    fgets(nome_cidade,25,stdin);

    
    //Tive que colocar aqui a leitura do nome da cidade 2, pois seu eu colocar mais pra baixo não lê nome da cidade 2S
    printf("Insira o nome da cidade 2: \n");
    fgets(nome_cidade2,sizeof(nome_cidade2),stdin);
     
    printf("Insira o estado da cidade 1 (A-H): \n");
    scanf("%s", estado);

    printf("Insira o código da cidade 1 (1-4): \n");
    scanf("%s", codigo_cidade);    

    printf("Insira a população da cidade 1: \n");
    scanf("%d", &populacao);

    printf("Insira a área da cidade 1: \n");
    scanf("%f", &area);

    printf("Insira o pib da cidade 1: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turisticos 1:\n");
    scanf("%d", &pnt_turisticos);

    //inserir carta 2
    printf("Insira o código da cidade 2 (1-4): \n");
    scanf("%s", codigo_cidade2);    

    printf("Insira o estado da cidade (A-H): \n");
    scanf("%s", estado2);

    printf("Insira a população da cidade 2: \n");
    scanf("%d", &populacao2);

    scanf("%f", &area2);

    printf("Insira o pib da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Insira o número de pontos turisticos 2: \n");
    scanf("%d", &pnt_turisticos2);

   

    //calculos

    densidade_populacional = (float) populacao / area;
    pib_per_capita = pib / (float) populacao;

    super_poder1 = (float) populacao + area + pib + (float) pnt_turisticos + pib_per_capita + densidade_populacional;

    densidade_populacional2 = (float) populacao2 / area2;
    pib_per_capita2 = pib2 / (float) populacao2;
    super_poder2 = (float) populacao2 + area2 + pib2 + (float) pnt_turisticos2 + pib_per_capita2 + densidade_populacional2;


    //Exibição dos dados
    printf("Nome da cidade 1: %s \n", nome_cidade);
    printf("Estado da cidade 1: %s \n", estado);
    printf("Código da cidade 1: %s \n", codigo_cidade);
    printf("População da cidade 1: %d \n", populacao);
    printf("Área da cidade 1: %.2f \n", area);   
    printf("Insira a área da cidade 2: \n");
    printf("PIB da cidade 1: %.2f \n", pib);
    printf("Número de pontos turísticos 1: %d \n", pnt_turisticos);
    printf("Densidade populacional 1: %.2f \n", densidade_populacional);
    printf("PIB per capita 1: %.2f \n", pib_per_capita);

    printf("\n\n");

    printf("Nome da cidade 2: %s \n", nome_cidade2);
    printf("Estado da cidade 2: %s \n", estado2);
    printf("Código da cidade 2: %s \n", codigo_cidade2); 
    printf("População da cidade 2: %d \n", populacao2);
    printf("Área da cidade 2: %.2f \n", area2);
    printf("PIB da cidade 2: %.2f \n", pib2);
    printf("Número de pontos turísticos 2: %d \n", pnt_turisticos2);
    printf("Densidade populacional 2: %.2f \n", densidade_populacional2);
    printf("PIB per capita 2: %.2f \n", pib_per_capita2);

    printf("\n\n");

    //comparações

    printf("Densidade populacional 1 VS Densidade populacional 2: %d\n", densidade_populacional < densidade_populacional2);
    printf("População 1 VS População 2: %d\n", populacao > populacao2);
    printf("Area 1 VS Area 2: %d \n", area > area2);
    printf("PIB 1 VS PIB 2: %d \n", pib > pib2);
    printf("Nº de pontos turisiticos 1 VS Nº de pontos turisiticos 2: %d \n", pnt_turisticos > pnt_turisticos2);
    printf("Pib per capita 1 VS Pib per capita 2: %d \n",pib_per_capita > pib_per_capita2);
    printf("Super poder 1 VS Super poder 2: %d \n", super_poder1 > super_poder2);
    

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
