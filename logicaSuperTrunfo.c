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

    //menu interativo
    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("Escolha uma opção:\n");
    printf("1 - Nome do país\n");
    printf("2 - População\n");
    printf("3 - Área\n");
    printf("4 - PIB \n");
    printf("5 - Número de pontos turísticos\n");
    printf("6 - Densidade demográfica\n");

    switch (opcao) {
        
        //nome de paises 
        case 1:
            printf("(%s VS %s)\n",nome_do_pais1,nome_do_pais2);
            break;
          
       // população 
        case 2:
            printf("Países: (%s VS %s)\n",nome_do_pais1,nome_do_pais2);
            printf("População:\n");
            printf("%s tem %d habitantes\n  %s tem %d habitantes\n",nome_do_pais1,numero_habitantes1,nome_do_pais2,numero_habitantes2);

        if(numero_habitantes1>numero_habitantes2){
            printf("carta 1 venceu");
        }else{
            printf("carta 2 venceu");
        }
        break;
        
        //Área 
        case 3:
            printf("Países: (%s VS %s)\n",nome_do_pais1,nome_do_pais2);
            printf("Área:\n");
            printf("%s tem %f km²\n  %s tem %f km²\n",nome_do_pais1,area_cidade1,nome_do_pais2,area_cidade2);

        if (area_pais1>area_pais2){
            printf("carta 1 venceu");
        }else{
            printf("carta 2 venceu");
        }
            break;
    //PIB
       case 4:
           printf("Países: (%s VS %s)\n",nome_do_pais1,nome_do_pais2);
           printf("PIB:\n");
           printf("%s tem %f de PIB \n  %s tem %f de PIB\n",nome_do_pais1,pib1,nome_do_pais2,pib2);

     if (pib1>pib2){
            printf("carta 1 venceu");
        }else{
            printf("carta 2 venceu");
        }
        break;
        
        //Numeros de pontos turistucos 
     case 5:
           printf("Países: (%s VS %s)\n",nome_do_pais1,nome_do_pais2);
           printf("Numero de ponto turísticos:\n");
           printf("%s tem %d de Pontos turísticos \n  %s tem %d de Pontos turísticos\n",nome_do_pais1,pontos_turisticos1,nome_do_pais2,pontos_turisticos2);

     if (pontos_turisticos1>pontos_turisticos2){
            printf("carta 1 venceu");
        }else{
            printf("carta 2 venceu");
          }
        break;

    //densidade demográfica 
     case 6:
           printf("Países: (%s VS %s)\n",nome_do_pais1,nome_do_pais2);
           printf("Densidade demografica :\n");
           printf(" %s tem %f hab/km²\n  %s tem %f de hab/km²\n",nome_do_pais1,densidade_populacional1,nome_do_pais2,densidade_populacional2);

     if (pib1>pib2){
            printf("carta 1 venceu");
        }else{
            printf("carta 2 venceu");
        }
        break;
     
    default: 
         printf("opção inválido");
        
    break;



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
