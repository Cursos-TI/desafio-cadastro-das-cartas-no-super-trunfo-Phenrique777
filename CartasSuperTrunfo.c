#include <stdio.h>



//Declarando variaveis carta 1

int main() {
     char estado1[3];
     char nomedaCiadade1[50];
     unsigned long int populacao1;
     float pib1;
     int pontosturisticos1;
     float area1;
     float densidadePopulacional1;
     char codigo1[4];
     float pibPerCapita1;
     float superPoder1;


// Declarando variaveis para carta 2
     
     char estado2[3];
     char nomedaCiadade2[50];
     unsigned long int populacao2;
     float pib2;
     int pontosturisticos2;
     float densidadePopulacional2;
     float area2;
     char codigo2[4];
     float pibPerCapita2;
     float superPoder2;

//Entrada de dados da primeira carta 1
     
     printf("cadastro da primeira carta :\n");

     printf("Digite o Estado (UF): ");
     scanf("%2s", estado1);

     getchar();

     printf("Nome da Cidade:  ");
     scanf("%[^\n]s", nomedaCiadade1);

     printf("População:  ");
     scanf("%lu", &populacao1);

     printf("PIB (em R$): ");
     scanf("%f", &pib1);

     printf("Numero de pontos turisticos:  ");
     scanf("%d", &pontosturisticos1);

     printf("Area(em km²): ");
     scanf("%f", &area1);

     getchar();

     printf("Codigo1  :");
     scanf("%3s", codigo1);  

     //Calculos para a carta 1
     densidadePopulacional1 = populacao1 / area1;   
     pibPerCapita1 = pib1  / populacao1;
     superPoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + pibPerCapita1+ (1/densidadePopulacional1); 

  
//Entrada de dados da segunda carta 2
  
     printf("\nCadastro da segunda carta:\n"); 

     printf("Estado (UF):  ");
     scanf("%s", estado2);

     getchar();

     printf("Nome da Cidade:  ");
   scanf("%[^\n]s", nomedaCiadade2);


     printf("População:   ");
     scanf("%lu", &populacao2);

     printf("PIB (em R$ ):  ");
     scanf("%f", &pib2);

     printf("Numeros de pontos turisticos:   ");
     scanf("%d", &pontosturisticos2);

     printf("Area(em km²): ");
     scanf("%f", &area2);

    getchar();

     printf("Codigo:  ");
     scanf("%3s", codigo2);

     //Calculos para a carta 2

     densidadePopulacional2 = populacao2 / area2;   
     pibPerCapita2 = pib2  / populacao2;
     superPoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + pibPerCapita2 + (1/densidadePopulacional2); 


//Exibição dos dados da primeira carta
     
     printf("\nDados da primeira carta:\n");

     
     printf("Estado: %s\n",estado1);
     printf("Nome da Cidade: %s\n", nomedaCiadade1);
     printf("População: %lu\n", populacao1);
     printf("PIB:%.2f\n", pib1);
     printf("Numeros de pontos turisticos: %d\n", pontosturisticos1);
     printf("Area:%.2f km²\n", area1);
     printf("Densidade Populaçional: %.2f hab/km²\n", densidadePopulacional1);
     printf("Codigo:%s\n", codigo1);
     printf("PIB per Capita: %.2F reais\n", pibPerCapita1);
     printf("Super Poder: %f\n", superPoder1);

//Exibição de dados da segunda carta

     printf("\nDados da segunda carta:\n");
     
     printf("Estado: %s\n", estado2);
     printf("Nome da Cidade: %s/n", nomedaCiadade2);
     printf("População: %lu\n", populacao2);
     printf("PIB:%.2f\n", pib2);
     printf("Numeros de pontos turisticos: %d\n", pontosturisticos2);
     printf("Area:%.2f\n", area2);
     printf("Densidade Populaçional:%.2f hab/km²/n", densidadePopulacional2);
     printf("Codigo: %s\n",codigo2);
     printf("PIB per Capita: %.2F reais\n", pibPerCapita2);
     printf("Super poder: %f\n", superPoder2);

     //Comparação Super Poder
   




     
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
