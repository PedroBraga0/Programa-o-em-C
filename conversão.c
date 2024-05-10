#include <stdio.h>

int main() {
float temperaturaCelsius, temperaturaFahrenheit;

printf("Digite a temperatura em Celsius:");
scanf("%f",&temperaturaCelsius);

//MODO DE CONVERSÃO DE TEMPERATURA DE CELSIUS PARA FAHRENHEIT
temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32;

// PROCESSO DE CONVERSÃO DAS TEMPERATURAS
printf("a temperatura %.2f graus Celsius equivalem a %.2f Graus fahrenheit.\n",temperaturaCelsius,temperaturaFahrenheit);

return 0;
}