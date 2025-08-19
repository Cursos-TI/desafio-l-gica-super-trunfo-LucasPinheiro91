#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    int populacaoA, populacaoB;
    char estadoA, estadoB[50];
    int ponto_turisticoA, ponto_turisticoB;
    char cidadeA, cidadeB[40];
    char codigoA, codigoB[8];
    float areaA, areaB;
    float pibA, pibB   
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)
   printf("Digite a População: \n");
   scanf("%d",&populacaoA, populacaoB);
   printf("Digite o Estado: \n");
   scanf("%s",&estadoA, estadoB);
   printf("Digite o Número de Pontos Turísticos: \n");
   scanf("%d",&ponto_turisticoA, ponto_turisticoB);
   printf("Digite o Nome da Cidade: \n");
   scanf("%s",&cidadeA, cidadeB);
   printf("Digite o Código da Cidade: \n");
   scanf("%s",&codigoA, codigoB);
   printf("Digite a Área em Km²: \n");
   scanf("%f",&areaA, areaB);
   printf("Digite o PIB: \n");
   scanf("%f",&pibA, pibB);
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }
    if (populacaoA > populacaoB) {
        printf("Cidade A tem maior população.\n");
    }   else {
        printf("Cidade B tem maior população.\n");
        }
   if (estadoA > estadoB) {
        printf("Estado A tem maior população.\n");
    }   else {
        printf("Estado B tem maior população.\n");
        }
    if (ponto_turisticoA > ponto_turisticoB) {
        printf("Ponto Turistico A tem maior população.\n");
    }   else {
        printf("Ponto Turistico B tem maior população.\n");
        }
    if (cidadeA > cidadeB) {
        printf("Cidade A tem maior população.\n");
    }   else {
        printf("Cidade B tem maior população.\n");
        }
    if (codigoA > codigoB) {
        printf("Codigo A tem maior população.\n");
    }   else {
        printf("Codigo B tem maior população.\n");
        }
    if (areaA > areaB) {
        printf("Area A tem maior população.\n");
    }   else {
        printf("Area B tem maior população.\n");
        }
    if (pibA > pibB) {
        printf("PIB A tem maior população.\n");
    }   else {
        printf("PIB B tem maior população.\n");
        }
    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);
    printf("A População vencedora é: %d\n");
    printf("O Estado vencedor é: %s\n");
    printf("O Ponto Turistico vencedor é: %d\n");
    printf("A Cidade vencedora é: %s\n");
    printf("O Código vencedor é: %s\n");
    printf("A Área vencedora é: %f\n");
    printf("O PIB vencedor é: %f\n");
    return 0;
}
