#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
  // Variáveis carta 1
  char estado1;
  char codigo1[4];
  char nomedacidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontosturisticos1;

  // Variáveis carta 2
  char estado2;
  char codigo2[4];
  char nomedacidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  // Área para entrada de dados

  // Cadastro carta 1
  printf("===Cadastro da carta 1===\n");
  
  printf("Digite a letra do Estado(A a H): ");
  scanf(" %c", &estado1); //O espaço antes %c serve para ignorar quebra de linhas anteriores.

  printf("Digite o codigo da carta (ex: A01): ");
  scanf("%s", codigo1);

  printf("Digite o nome da Cidade: ");
  scanf(" %[^\n]", nomedacidade1); //Permite ler nomes compostos com espaços (ex: Rio de Janeiro)

  printf("Digite a População: ");
  scanf("%d", &populacao1);
    
  printf("Digite a Área (em km²): ");
  scanf("%f", &area1);
    
  printf("Digite o PIB (em bilhões de reais): ");
  scanf("%f", &pib1);
    
  printf("Digite o número de Pontos Turísticos: ");
  scanf("%d", &pontosturisticos1);
    
  printf("\n");
  // Área para exibição dos dados da cidade

return 0;
} 
