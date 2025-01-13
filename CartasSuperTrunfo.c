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
    int codigo_cidade;
    char nome_cidade[25];
    float populacao;
    float area;
    float pib;
    int pnt_turisticos;

    //print e leitura de dados
    printf("Insira o código da cidade: \n");
    scanf("%d", &codigo_cidade);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome_cidade);

    printf("Insira a população da cidade: \n");
    scanf("%f", &populacao);

    printf("Insira a área da cidade \n");
    scanf("%f", &area);

    printf("Insira o pib da cidade: \n");
    scanf("%f", &pib);

    printf("Insira o número de pontos turisticos: \n");
    scanf("%d", &pnt_turisticos);

    //Exibição dos dados
    printf("Código da cidade: %d \n", codigo_cidade);
    printf("Nome da cidade: %s \n", nome_cidade);
    printf("População da cidade: %.3f \n", populacao);
    printf("Área da cidade: %.2f \n", area);
    printf("PIB da cidade: %f \n", pib);
    printf("Número de pontos turísticos: %d \n", pnt_turisticos);




    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
