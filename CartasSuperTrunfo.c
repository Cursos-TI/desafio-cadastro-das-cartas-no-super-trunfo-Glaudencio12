#include <stdio.h>
#include <string.h>

// Jogo Super Trunfo desenvolvido nos 2 primeiro temas da disciplina Introdução à Programação de computadores
// O jogo foi desenvolvido em diferentes fases, que variam do Nível Novato ao Nível Mestre, sendo este o nível atual disponível.

int main()
{
   // Declaração das variáveis utilizadas para o cadastro de informações das duas cartas
   char pais1[20], pais2[20];
   char cod_carta1[5], cod_carta2[5];
   unsigned long int populacao1, populacao2;
   int pontos_turisticos1, pontos_turisticos2;
   float area1, area2, PIB1, PIB2;

   //Coletando o nome do país da carta 1 digitado pelo usuário
   printf("DADOS CARTA 1 ----->\n");
   printf("País: ");
   fgets(pais1, sizeof(pais1), stdin); // Substitui o scanf para permitir a leitura de entradas que contêm espaços, como "Estados Unidos".  
   pais1[strcspn(pais1, "\n")] = 0; // Remove a quebra de linha que o fgets captura ao ler o dado

   //Coletando o código da carta1 digitado pelo usuário
   printf("Código da carta: ");
   fgets(cod_carta1, sizeof(cod_carta1), stdin); // Substitui o scanf para permitir a leitura de entradas que contêm espaços, como "Estados Unidos".
   cod_carta1[strcspn(cod_carta1, "\n")] = 0;    //  Remove a quebra de linha que o fgets captura ao ler o dado

   //Coletando a população da carta 1 digitada pelo usuário
   printf("População: ");
   scanf("%lu", &populacao1);

   //Coletando a área do país da carta 1 digitada pelo usuário
   printf("Área em Km²: ");
   scanf("%f", &area1);

   //Coletando o PIB do país da carta 1 digitado pelo usuário
   printf("PIB: ");
   scanf("%f", &PIB1);

   //Coletando a quantidade de pontos turísticos do país da carta 1 digitada pelo usuário
   printf("Número de pontos turísticos: ");
   scanf("%d", &pontos_turisticos1);
   getchar();

   printf("\nDADOS CARTA 2 ----->\n");

   //Coletando o nome do país da carta 2 digitado pelo usuário
   printf("País: ");
   fgets(pais2, sizeof(pais2), stdin); //Substitui o scanf para permitir a leitura de entradas que contêm espaços, como "Estados Unidos".
   pais2[strcspn(pais2, "\n")] = 0; // Remove a quebra de linha que o fgets captura ao ler o dado
   
   //Coletando o código da carta 2 digitado pelo usuário
   printf("Código da carta: ");
   fgets(cod_carta2, sizeof(cod_carta2), stdin); // LÊ ENTRADAS COM ESPAÇO, POR EXEMPLO: SÃO PAULO
   cod_carta2[strcspn(cod_carta2, "\n")] = 0;    // REMOVE O \n DE fgets

   //Coletando a população da carta 2 digitada pelo usuário
   printf("População: ");
   scanf("%lu", &populacao2);

   //Coletando a área do país da carta 2 digitada pelo usuário
   printf("Área em Km²: ");
   scanf("%f", &area2);

   //Coletando o PIB do país da carta 2 digitado pelo usuário
   printf("PIB: ");
   scanf("%f", &PIB2);

   //Coletando a quantidade de pontos turísticos do país da carta 2 digitada pelo usuário
   printf("Número de pontos turísticos: ");
   scanf("%d", &pontos_turisticos2);
   getchar(); //Remove o caractere de nova linha que ficou no buffer após a execução do scanf(), garantindo que a próxima leitura não seja afetada

   //Declaração das variáveis que serão utilizadas no cálculo da Renda per Capita, Densidade Populacional e Super Poder das duas cartas
   float densi_populacional1, densi_populacional2, PIB_per_capita1, PIB_per_capita2, super_poder1, super_poder2;

   // Calculando a densidade populacional das dos dois países das duas cartas
   densi_populacional1 = populacao1 / area1;
   densi_populacional2 = populacao2 / area2;

   // Calculando o super poder do país da carta 1
   super_poder1 = (1 / densi_populacional1) + populacao1 + area1 + PIB1 + pontos_turisticos1 + PIB_per_capita1;

   // Calculando o PIB per Capita dos dois países das duas cartas
   PIB_per_capita1 = PIB1 / populacao1;
   PIB_per_capita2 = PIB2 / populacao2;

   // Calculando o super poder do país da carta 2
   super_poder2 = (1 / densi_populacional2) + populacao2 + area2 + PIB2 + pontos_turisticos2 + PIB_per_capita2;

   //Exibindo todas as informações cadastradas sobre a carta 1
   printf("\nCarta1:\n");
   printf("País: %s\n", pais1);
   printf("Código: %s\n", cod_carta1);
   printf("População: %lu \n", populacao1);
   printf("Área: %.2f km² \n", area1);
   printf("PIB: %.2f bilhões de reais\n", PIB1);
   printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
   printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional1);
   printf("PIB per Capita: %.6f reais\n", PIB_per_capita1);
   printf("Super poder: %.2f\n", super_poder1);

   //Exibindo todas as informações cadastradas sobre a carta 2
   printf("\nCarta2:\n");
   printf("País: %s\n", pais2);
   printf("Código: %s\n", cod_carta2);
   printf("População: %lu\n", populacao2);
   printf("Área: %.2f km² \n", area2);
   printf("PIB: %.2f bilhões de reais\n", PIB2);
   printf("Número de pontos turísticos: %d\n", pontos_turisticos2);
   printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional2);
   printf("PIB per Capita: %.6f reais\n", PIB_per_capita2);
   printf("Super poder: %.2f\n", super_poder2);

   // Declaração das variáveis que serão utilizadas na comparação dos atributos das duas cartas
   int escolha_usuario1, escolha_usuario2, resultado1, resultado2;

   //Primeiro menu de opções
   printf("\n===========MENU===========\n");
   printf("ESCOLHA O PRIMEIRO ATRIBUTO DE COMPARAÇÃO ENTRE AS DUAS CARTAS:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade demográfica\n");
   printf("ESCOLHA UMA OPÇÃO: ");
   scanf("%d", &escolha_usuario1);  // Variável que irá armazenar o primeiro atributo que o usuário escolher

   //Switch que irá controlar a comparação do primeiro atributo escolhido
   switch (escolha_usuario1)
   {
   case 1:
      resultado1 = (populacao1 > populacao2) ? 1 : 0;
      break;

   case 2:
      resultado1 = (area1 > area2) ? 1 : 0;
      break;

   case 3:
      resultado1 = (PIB1 > PIB2) ? 1 : 0;
      break;

   case 4:
      resultado1 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
      break;

   case 5:
      resultado1 = (densi_populacional1 < densi_populacional2) ? 1 : 0;
      break;

   default:
      printf("Opcão inválida");
      break;
   }

   // Segundo menu de opções
   printf("\n===========MENU===========\n");
   printf("ESCOLHA O PRIMEIRO ATRIBUTO DE COMPARAÇÃO ENTRE AS DUAS CARTAS:\n");
   printf("1 - População\n");
   printf("2 - Área\n");
   printf("3 - PIB\n");
   printf("4 - Número de pontos turísticos\n");
   printf("5 - Densidade demográfica\n");
   printf("ESCOLHA UMA OPÇÃO: ");
   scanf("%d", &escolha_usuario2); // Variável que irá armazenar o primeiro atributo que o usuário escolher

   // Verifica se as duas opções escolhidas pelo usuário são iguais. Se sim, o programa para a execução
   if (escolha_usuario1 == escolha_usuario2)
   {
      printf("\nVocê não pode escolher o mesmo atributo para a comparação. Tente novamente.\n");
   }
   else //Se os dois atributos não forem iguais, o Switch que irá controlar a comparação do segundo atributo é acionado
   {
      switch (escolha_usuario2)
      {
      case 1:
         resultado2 = (populacao1 > populacao2) ? 1 : 0;
         break;

      case 2:
         resultado2 = (area1 > area2) ? 1 : 0;
         break;

      case 3:
         resultado2 = (PIB1 > PIB2) ? 1 : 0;
         break;

      case 4:
         resultado2 = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
         break;

      case 5:
         resultado2 = (densi_populacional1 < densi_populacional2) ? 1 : 0;
         break;

      default:
         printf("Opcão inválida");
         break;
      }

      // Exibindo as informações obtidas na comparação do dois atributos das duas cartas
      printf("\n========== Informações da comparação ==========\n");
      printf("País 1: %s\n", pais1);
      printf("País 2: %s\n", pais2);
      printf("Atributos da Carta 1 escolhidos: ");

      // Exibindo os dois atributos escolhido pelo usuário e seus respectivos valores
      if (escolha_usuario1 == 1)printf("População ---> %lu\n", populacao1);
      else if (escolha_usuario1 == 2)printf("Área ---> %.2f\n", area1);
      else if (escolha_usuario1 == 3)printf("PIB ---> %.2f\n", PIB1);
      else if (escolha_usuario1 == 4)printf("Número de pontos turísticos ---> %d\n", pontos_turisticos1);
      else if (escolha_usuario1 == 5)printf("Densidade demográfica ---> %2.f\n", densi_populacional1);

      if (escolha_usuario2 == 1)printf("População ---> %lu\n", populacao2);
      else if (escolha_usuario2 == 2)printf("Área ---> %.2f\n", area2);
      else if (escolha_usuario2 == 3)printf("PIB ---> %.2f\n", PIB2);
      else if (escolha_usuario2 == 4)printf("Número de pontos turísticos ---> %d\n", pontos_turisticos2);
      else if (escolha_usuario2 == 5)printf("Densidade demográfica ---> %2.f\n", densi_populacional2);

      //Exibindo o resultado final após a comparção e soma dos atributos
      printf("\nResultado da comparação:\n");
      if (resultado1 + resultado2 == 2)
      {
         printf("A carta 1 venceu!\n");
      }
      else if (resultado1 + resultado2 == 0)
      {
         printf("A carta 2 venceu!\n");
      }
      else
      {
         printf("Empate!\n");
      }
   }

   return 0;
}
