#include <stdio.h> 

int main () {
int num1,num2,media,resultado;

printf("POR FAVOR, DIGITE O PRIMEIRO NUMERO: \n");
scanf("%d",&num1);

printf("POR FAVOR, DIGITE O SEGUNDO NUMERO:  \n");
scanf("%d",&num2);

resultado = (num1 + num2) / 2;
media = resultado;

printf("O RESULTADO DA MEDIA é :\n");
printf("media: %d\n",media);

return 0;

}