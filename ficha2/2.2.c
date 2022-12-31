#include <stdio.h>
int main(void){
  int a, b, c, maior;
  scanf("%d %d %d", &a, &b, &c); // ler 3 valors
  if (a > b)
      if (a > c)
        maior=a;
      else
        maior=c;
  else
    if (b > c)
      maior=b;
    else
      maior=c;      // determinar o maior
  printf("%d\n", maior); // imprimir o resultado
}
