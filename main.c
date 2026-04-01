#include <stdio.h>

int main() {
  int numero_inicial;
  int numero_final;
  int incremento = 0;

  printf("%s", "Ingrese el numero inicial");
  scanf("%d", &numero_inicial);

  printf("%s", "Inicie el numero final");
  scanf("%d", &numero_final);

  printf("%s", "Ingrese el valor de incremento de la secuecia");
  scanf("%d", &incremento);

  for (int i = numero_inicial; i <= numero_final; i += incremento) {
    printf("%d", i);
  }

  // for (int i = 0; i <= 10; i++) {
  // printf("%d\n", i);
  // }
  return 0;
}
