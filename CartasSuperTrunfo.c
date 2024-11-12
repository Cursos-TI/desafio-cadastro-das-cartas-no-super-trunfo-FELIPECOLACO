#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

struct Brasil{
int codigo_cidade;
int pontos_turisticos;
int populacao;
float area;
float pib;
char cidade[16];
char codigo_estado;
char codigo_carta;
};


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos. 
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
struct Brasil estado[4];
        printf("Digite o número da cidade (1 a 4)"); 
        scanf("%d", &estado[0].codigo_cidade);
    
        printf("Digite a letra referente ao estado  (A a H): "); 
        scanf("%c", &estado[0].codigo_estado);

        printf("Digite o nome da cidade: "); 
        scanf("%s &estado[0].cidade);
    
        printf("Digite a populacao da cidade: "); 
        scanf("%d", &estado[0].populacao);
    
        printf("Digite a area total da cidade: "); 
        scanf("%2f", &estado[0].area);
    
        printf("Digite o PIB da cidade: "); 
        scanf("%f, &estado[0].pib);

        printf("Digite a quantidade de pontos turísticos da cidade"); 
        scanf("%d\n", &estado[0].pontos_turisticos);
    

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
        //sprintf("estado[0]codigo_carta, "%C %d", estado[0].codigo_cidade, estado[0].codigo_estado);
        printf("Codigo do estado e: %c\n", estado[0].codigo_estado);
        printf("Código da cidade e: %d\n", estado[0].codigo_cidade);
        printf("Nome da cidade: %s\n", estado[0].cidade);
        printf("Populacao da cidade: %d\n", estado[0].populacao);
        printf("Áreas total da cidade em km2 e: %f\n", estado[0].area);
        printf("O PIB da cidade e: %f\", estado[0].pib);
        printf("A quantidade de pontos turísticos e: %d\n", estado[0].pontos_turisticos);
    
    

    return 0;
}
