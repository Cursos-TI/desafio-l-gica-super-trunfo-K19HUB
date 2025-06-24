#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char carta1;
    char estado1;
    char codigo_da_carta1[4];
    char nome_da_cidade1[30];
    int  numero_habitantes1;
    float area_cidade1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    

    char carta2;
    char estado2;
    char codigo_da_carta2[4];
    char nome_da_cidade2[30];
    int  numero_habitantes2;
    float area_cidade2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("carta 1 \n");

    printf("escolha um estado de a-h :\n");
    scanf("%c",&estado1);
    
    printf("digite o código da carta ex(A01,B02): \n");
    scanf("%s",codigo_da_carta1);

    printf ("digite o nome da cidade : \n");
    scanf(" %[^\n]",nome_da_cidade1);//  (" %[^\n]")Permitir por espaço no nome 

    printf("transcreva quantos habitantes há nessa cidade:\n");
    scanf("%d", &numero_habitantes1);

    printf("qual a área da cidade ? \n");
    scanf("%f",&area_cidade1);

    printf("informe qual o PIB da cidade.\n ");
    scanf("%f",&pib1);
    
    printf("digite quantos pontos turisticos existem na cidade :\n\n");
    scanf("%d",&pontos_turisticos1);


    //calculo da densidade populacional 
    densidade_populacional1 = numero_habitantes1 / area_cidade1 ;

    //calcular o PIB per capita 
    pib_per_capita1 =  pib1 / numero_habitantes1 ; 
            // o PIB é float e o número de habitantes é int 
           //fazendo a divisão o resultado saira em float


    //Pegar dados da Carta (2) 
    printf("carta 2 \n");
    
    printf("escolha uma estado de a-h :\n");
    scanf(" %c",&estado2);
    
    printf("digite o código da carta ex(A01,B02): \n");
    scanf("%s",codigo_da_carta2);
    
    printf ("digite o nome da cidade : \n");
    scanf(" %[^\n]",nome_da_cidade2);//  (" %[^\n]")Permitir por espaço no nome 

    printf("transcreva quantos habitantes há nessa cidade:\n");
    scanf("%d", &numero_habitantes2);
    
    printf("qual a área da cidade ? \n");
    scanf("%f",&area_cidade2);
    
    printf("informe qual o PIB da cidade.\n ");
    scanf("%f",&pib2);
    
    printf("digite quantos pontos turisticos existem na cidade :\n\n");
    scanf("%d",&pontos_turisticos2);

    //calculo da densidade populacional 
    densidade_populacional2 = numero_habitantes2 / area_cidade2 ;

    //calcular o PIB per capita 
    pib_per_capita2 =  pib2 / numero_habitantes2 ; 
            // o PIB é float e o número de habitantes é int 
           //fazendo a divisão o resultado saira em float

    
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
  printf("comparação de cartas (atributo: População):\n\n");
    printf("carta 1 - %s: %d\n",nome_da_cidade1,numero_habitantes1);

    printf("carta 2 - %s: %d\n",nome_da_cidade2,numero_habitantes2); 
    
    if(numero_habitantes1>numero_habitantes2){
        printf("Resultado: carta 1 (%s) venceu",nome_da_cidade1);
    }else{
        printf("Resultado: carta 2 (%s) venceu",nome_da_cidade2);
    }


    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    printf("Carta 1\n\n");
    printf("Estado : %c\n",estado1);
    printf("Código :%s\n",codigo_da_carta1);
    printf("Nome da cidade :%s\n ",nome_da_cidade1);
    printf("População :%d\n",numero_habitantes1);
    printf("Área :%.2f km²\n",area_cidade1);
    printf("PIB :%.2f milhões de reais\n",pib1);
    printf("Números de pontos turísticos :%d\n",pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km² \n",densidade_populacional1);
    printf("PIB per capita: %.2f reais  \n\n",pib_per_capita1);

    
    //mostrar todos os dados da carta (2)
    printf("Carta 2 \n\n");
    printf("Estado : %c\n",estado2);
    printf("Código :%s\n",codigo_da_carta2);
    printf("Nome da cidade :%s\n ",nome_da_cidade2);
    printf("População :%d\n",numero_habitantes2);
    printf("Área :%.2f km²\n",area_cidade2);
    printf("PIB :%.2f milhões de reais\n",pib2);
    printf("Números de pontos turísticos :%d\n",pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km² \n",densidade_populacional2);
    printf("PIB per capita: %.2f reais \n\n",pib_per_capita2);

   
    return 0;
}
