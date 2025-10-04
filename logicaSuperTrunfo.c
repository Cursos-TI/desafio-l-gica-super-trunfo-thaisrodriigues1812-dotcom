#include <stdio.h>
#include <string.h>
/*
   SUPER TRUNFO - Fase 1
   Autor: Thaís Rodrigues
   Objetivo: Comparar duas cartas com base em um único atributo numérico.
   Estruturas de decisão utilizadas: if e if-else
*/
int main() {
   // ======= Estrutura da carta =======
   struct Carta {
       char estado[3];
       char codigo[4];
       char nomeCidade[50];
       int populacao;
       float area;
       float pib;
       int numPontosTuristicos;
       float densidadePopulacional;
       float pibPerCapita;
   };
   // ======= Cadastro de duas cartas =======
   struct Carta carta1, carta2;
   // Carta 1
   strcpy(carta1.estado, "SP");
   strcpy(carta1.codigo, "A01");
   strcpy(carta1.nomeCidade, "São Paulo");
   carta1.populacao = 12300000;
   carta1.area = 1521.11;
   carta1.pib = 699000000000.0; // 699 bilhões
   carta1.numPontosTuristicos = 25;
   carta1.densidadePopulacional = carta1.populacao / carta1.area;
   carta1.pibPerCapita = carta1.pib / carta1.populacao;
   // Carta 2
   strcpy(carta2.estado, "RJ");
   strcpy(carta2.codigo, "A02");
   strcpy(carta2.nomeCidade, "Rio de Janeiro");
   carta2.populacao = 6710000;
   carta2.area = 1200.27;
   carta2.pib = 360000000000.0; // 360 bilhões
   carta2.numPontosTuristicos = 18;
   carta2.densidadePopulacional = carta2.populacao / carta2.area;
   carta2.pibPerCapita = carta2.pib / carta2.populacao;
   // ======= Escolha do atributo a ser comparado =======
   // Altere o valor desta variável para mudar o atributo comparado:
   // 1 = População, 2 = Área, 3 = PIB, 4 = Densidade Populacional, 5 = PIB per capita
   int atributoEscolhido = 1; // Exemplo: 1 = População
   // ======= Comparação das cartas =======
   printf("=== COMPARAÇÃO DE CARTAS SUPER TRUNFO ===\n\n");
   if (atributoEscolhido == 1) {
       // Comparação por População
       printf("Comparação de cartas (Atributo: População):\n");
       printf("Carta 1 - %s (%s): %d\n", carta1.nomeCidade, carta1.estado, carta1.populacao);
       printf("Carta 2 - %s (%s): %d\n", carta2.nomeCidade, carta2.estado, carta2.populacao);
       if (carta1.populacao > carta2.populacao)
           printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
       else if (carta2.populacao > carta1.populacao)
           printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
       else
           printf("Resultado: Empate!\n");
   }
   else if (atributoEscolhido == 2) {
       // Comparação por Área
       printf("Comparação de cartas (Atributo: Área):\n");
       printf("Carta 1 - %s (%s): %.2f km²\n", carta1.nomeCidade, carta1.estado, carta1.area);
       printf("Carta 2 - %s (%s): %.2f km²\n", carta2.nomeCidade, carta2.estado, carta2.area);
       if (carta1.area > carta2.area)
           printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
       else if (carta2.area > carta1.area)
           printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
       else
           printf("Resultado: Empate!\n");
   }
   else if (atributoEscolhido == 3) {
       // Comparação por PIB
       printf("Comparação de cartas (Atributo: PIB):\n");
       printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pib);
       printf("Carta 2 - %s (%s): R$ %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pib);
       if (carta1.pib > carta2.pib)
           printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
       else if (carta2.pib > carta1.pib)
           printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
       else
           printf("Resultado: Empate!\n");
   }
   else if (atributoEscolhido == 4) {
       // Comparação por Densidade Populacional (MENOR vence)
       printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
       printf("Carta 1 - %s (%s): %.2f hab/km²\n", carta1.nomeCidade, carta1.estado, carta1.densidadePopulacional);
       printf("Carta 2 - %s (%s): %.2f hab/km²\n", carta2.nomeCidade, carta2.estado, carta2.densidadePopulacional);
       if (carta1.densidadePopulacional < carta2.densidadePopulacional)
           printf("Resultado: Carta 1 (%s) venceu! (menor densidade)\n", carta1.nomeCidade);
       else if (carta2.densidadePopulacional < carta1.densidadePopulacional)
           printf("Resultado: Carta 2 (%s) venceu! (menor densidade)\n", carta2.nomeCidade);
       else
           printf("Resultado: Empate!\n");
   }
   else if (atributoEscolhido == 5) {
       // Comparação por PIB per capita
       printf("Comparação de cartas (Atributo: PIB per capita):\n");
       printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.nomeCidade, carta1.estado, carta1.pibPerCapita);
       printf("Carta 2 - %s (%s): R$ %.2f\n", carta2.nomeCidade, carta2.estado, carta2.pibPerCapita);
       if (carta1.pibPerCapita > carta2.pibPerCapita)
           printf("Resultado: Carta 1 (%s) venceu!\n", carta1.nomeCidade);
       else if (carta2.pibPerCapita > carta1.pibPerCapita)
           printf("Resultado: Carta 2 (%s) venceu!\n", carta2.nomeCidade);
       else
           printf("Resultado: Empate!\n");
   }
   else {
       printf("Atributo inválido!\n");
   }
   return 0;
}
