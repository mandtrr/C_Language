#include <stdio.h>

#include <stdlib.h>


void soma(int a, int b) {

printf("Resultado da soma: %d\n", a + b);

}


void subtracao(int a, int b) {

printf("Resultado da subtração: %d\n", a - b);

}


void multiplicacao(int a, int b) {

printf("Resultado da multiplicação: %d\n", a * b);

}


void divisao(int a, int b) {

if (b != 0) {

printf("Resultado da divisão: %d\n", a / b);

} else {

printf("Não é possível fazer divisão por zero!\n");

}

}


void raiz_quadrada(int a) {

if (a < 0) {

printf("Não é possível fazer a raiz quadrada de número negativo!\n");

return;

}


float x = a;

float y = 1.0;

float e = 0.000001;


while (x - y > e) {

x = (x + y) / 2;

y = a / x;

}


printf("Resultado da raiz quadrada: %.2f\n", x);

}


void potencia(int base, int expoente) {

int resultado = 1;

for (int i = 0; i < expoente; i++) {

resultado *= base;

}

printf("Resultado da potência: %d\n", resultado);

}


int main() {

char opcao;

int num1, num2;


do {

printf("\nEscolha uma operação:\n");

printf("1 - Soma\n");

printf("2 - Subtração\n");

printf("3 - Multiplicação\n");

printf("4 - Divisão\n");

printf("5 - Raiz Quadrada\n");

printf("6 - Potência\n");

printf("S - Sair\n");

printf("Opção: ");


scanf(" %c", &opcao);


if (opcao >= '1' && opcao <= '6') {

printf("Digite um número: ");

scanf("%d", &num1);


if (opcao != '5') {

printf("Digite outro número: ");

scanf("%d", &num2);

}

}


switch (opcao) {

case '1':

soma(num1, num2);

break;

case '2':

subtracao(num1, num2);

break;

case '3':

multiplicacao(num1, num2);

break;

case '4':

divisao(num1, num2);

break;

case '5':

raiz_quadrada(num1);

break;

case '6':

potencia(num1, num2);

break;

case 'S':

case 's':

printf("Saindo do programa........\n");

break;

default:

printf("Opção inválida! Por favor, escolha um número de 1 a 6 ou 'S' para sair.\n");

}


} while (opcao != 'S' && opcao != 's');


return 0;

}