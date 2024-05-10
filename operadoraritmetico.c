#include <stdio.h>

int main () {
int dado = 10;

printf("Dados antes do incremento: %d.\n",dado);

dado++; // aqui sera feito uma soma do elemento 10 + 1.
printf("Dados depois do incremento: %d.\n",dado);

dado --; // aqui o valor de 10 será subtraido menos 1.
printf("Dados depois  do incremento: %d.\n",dado);

dado += 3; // será feito uma soma do valor de 10 + 3.
printf("Dados depois do incremento em 3 unidades : %d.\n",dado);

dado -= 2; // será feito uma subtração do valor 10 por 2.
printf("Depois do incremento em 2 unidades: %d.\n",dado);

dado *=10; // será feito uma multiplicação do valor 10 por 10.
printf("Depois de multiplicar por 10: %d.\n",dado);

return 0;

}