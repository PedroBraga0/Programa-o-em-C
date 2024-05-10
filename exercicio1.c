#include <stdio.h>

int main(){
int A,B,soma,sub,div,multi;

printf("DIGITE O PRIMEIRO VALOR:\n");
scanf("%d",&A);
printf("DIGITE O SEGUNDO VALOR:\n");
scanf("%d",&B);

soma = A + B;
sub = A - B;
multi = A * B;
div = A / B;

printf("RESULTADOS: \n");
printf("soma:%d.\n",soma);
printf("sub:%d.\n",sub);
printf("div:%d.\n",div);
printf("multi:%d.\n",multi);
}