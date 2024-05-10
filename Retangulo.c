#include <stdio.h>

int main(){

float area, comprimento, largura;

printf("INFORME O COMPRIMENTO DO RETANGULO: ");
scanf("%f",&comprimento);

printf("INFORME A LARGURA DO RETANGULO: ");
scanf("%f",&largura);

area = comprimento * largura;

printf("A area do retangulo é: %.2f \n",area);

return 0;


}