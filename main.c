#include <stdio.h>

int main() {
  int numero_inicial;
  int numero_final;
  int incremento = 0;

  printf("%s", "Ingrese el numero inicial:\n");
  scanf("%d", &numero_inicial);

  printf("%s", "Inicie el numero final:\n");
  scanf("%d", &numero_final);

  printf("%s", "Ingrese el valor de incremento de la secuencia:\n");
  scanf("%d", &incremento);

  for (int i = numero_inicial; i <= numero_final; i += incremento) {
    printf("Numero -> %d\n", i);
  }

  return 0;
}
