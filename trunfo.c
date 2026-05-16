#include <stdio.h>

int main() {

  char estado1;
  char codigo1[5];
  char nomeCidade1[50];
  int população1;
  float area1;
  float pib1;
  int pontosTuristicos1;


char estado2;
char codigo2[5];
char nomeCidade2[50];
int população2;
float area2;
float pib2;
int pontosTuristicos2;



printf("digite os dados da carta 1:\n");
printf("estado (A-H): ");
printf(" %c" , &estado1);
printf("codigo da carta (A1): ");
printf("%s", codigo1);
printf("nome da cidade: ");
printf(" %[^\n]s", nomeCidade1);
printf("população: ");
printf("%d", &população1);
printf("area (km²): ");
printf("%F", &area1);
printf("pib: ");
printf("%F", &pib1);
printf("numero de pontos turisticos: ");
printf("%d", &pontosTuristicos1);




printf("digite os dados da carta 2:\n");
printf("estado (A-H): ");
printf("%c", &estado2);
printf("codigo da carta (A2): ");
printf("%s", codigo2);
printf("nome da cidade ");
printf("%[^\n]s", nomeCidade2);
printf("população: ");
printf("%d", &população2);
printf("area (KM²): ");
printf("%f", &area2);
printf("pib: ");
printf("%f", &pib2);
printf("numero de pontos turistico: ");
printf("%d", &pontosTuristicos2);



printf("\nCarta 1:\n");
printf("estado: %c\n", estado1);
printf("codigo: %S\n", codigo1);
printf("nome da cidade: %s\n , nomeCidade1");
printf("população: %d\n, populaçao1");
printf("area: %.2f km²\n , area1");
printf("pib: %.2f bilhões de reais\n", pib1);
printf("numero de pontos turisticos: %d\n " , pontosTuristicos1);




   printf("\nCarta 2:\n");
   printf("estado: %c\n", estado2);
   printf("codigo: %s\n", codigo2);
   printf("nome da cidade: %s\n , nomeCidade2");
   printf("população: %d\n, população2");
   printf("area: %.2f km²\n , area2");
   printf("pib:%.2f bilhões de reais\n", pib2);
   printf("numero de pontos turisticos: %d\n " , pontosTuristicos2);


return 0;
} 
