#include <stdio.h>

void decompor(int total_seg, int *horas, int *mins, int *segs){
  *horas=(total_seg/60)/60;
  *mins=total_seg/60 - (*horas * 60);
  *segs=total_seg - (*mins * 60) - (*horas * 60 * 60);
  printf("%dh %dmin %dseg \n", *horas, *mins, *segs);
}


int main() {
    int a,horas,mins,segs;
    scanf("%d", &a);
    decompor(a,&horas,&mins,&segs);
    return 0;
}
/*que decompoe um total inteiro de segundos total seg em horas, minutos (0-59) e segundos (0-59); os
resultados devem ser atribuıdos ao conteudo dos apontadores horas, mins e segs. Pode assumir que o
total de segundos e maior que zero.*/
