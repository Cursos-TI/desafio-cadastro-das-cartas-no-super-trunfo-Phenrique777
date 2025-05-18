#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa
 
// Estrutura para armazenar dados 

//Declarando variaveis carta 1

int main() {
     char estado1;
     char nomedaCiadade1;
     int populacao1;
     float pib1;
     int pontosturisticos1;
     float area1;
     float densidade1;
     char codigo1[4];
     float pibPerCapita1;


// Declarando variaveis para carta 2
     
     char estado2;
     char nomedaCiadade2; 
     int populacao2;
     float pib2;
     int pontosturisticos2;
     float densidade2;
     float area2;
     char codigo2[4];
     float pibPerCapita2;

//Entrada de dados da primeira carta 1
     
     printf("cadastro da primeira carta :\n");

     printf("Estado: ");
     scanf("%C", &estado1);

     printf("Nome da Cidade:  ");
     scanf("%c",nomedaCiadade1);

     printf("População:  ");
     scanf("%d", &populacao1);

     printf("PIB: ");
     scanf("%f", &pib1);

     printf("Numero de pontos turisticos:  ");
     scanf("%d",&pontosturisticos1);

     printf("Area: ");
     scanf("%f", &area1);


     printf("Codigo1  :");
     scanf("%3s", codigo1);  

     //Calculos para a carta 1
     densidade1 = populacao1 / area1;   
     pibPerCapita1 = pib1  / populacao1;



     //Calculos para carta 2
     densidade2 = populacao2 / area2;   
     pibPerCapita2 = pib1  / populacao2;
  
//Entrada de dados da segunda carta 2
  
     printf("\nCadastro da segunda carta:\n"); 

     printf("Estado: ");
     scanf("%C", &estado2);

     printf("Nomdeda Cidade:  ");
     scanf("%c", nomedaCiadade2);


     printf("População:   ");
     scanf("%d", &populacao2);

     printf("PIB:  ");
     scanf("%f", &pib2);

     printf("Numeros de pontos turisticos:   ");
     scanf("%d", &pontosturisticos2);

     printf("Area:  ");
     scanf("%f", &area2);

     printf("Codigo:  ");
     scanf("%3s", codigo2);

//Exibição dos dados da primeira carta
     
     printf("\nDados da primeira carta:\n");

     printf("\nCarta 1:/n");
     printf("Estado: %c/n",estado1);
     printf("Nomes de Cidade: %s/n",nomedaCiadade1);
     printf("População:%d\n", populacao1);
     printf("PIB:%.2f\n", pib1);
     printf("Numeros de pontos turisticos:%d\n", pontosturisticos1);
     printf("Area:%.2f\n",area1);
     printf("Densidade Populaçional:%.2f hab/km²/n", densidade1);
     printf("Codigo:%s\n",codigo1);
     printf("PIB per CAPITA: %.2F reais\n", pibPerCapita1);


//Exibição de dados da segunda carta

     printf("\nDados da segunda carta:\n");
     printf("\nCarta 2:/n");
     printf("Estado: %c/n",estado2);
     printf("Nomes de Cidade: %s/n",nomedaCiadade2);
     printf("População:%d\n", populacao2);
     printf("PIB:%.2f\n", pib2);
     printf("Numeros de pontos turisticos:%d\n", pontosturisticos2);
     printf("Area:%.2f\n", area2);
     printf("Densidade Populaçional:%.2f hab/km²/n", densidade2);
     printf("Codigo: %s\n",codigo2);
     printf("PIB per CAPITA: %.2F reais\n", pibPerCapita2);

     return 0;


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   
    return 0;
}
