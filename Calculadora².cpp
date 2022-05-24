#include <stdio.h>

float calcular()
{
  float num;
  printf("\nDigite o numero que deseja calcular:");
  scanf("%f", &num);
  return num * num;
}

int main()
{
  float resultado = 0;
  resultado = calcular();
  printf("O resultado do número fornecido é: %.2f", resultado);
  return 0;
}