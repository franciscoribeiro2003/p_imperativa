#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *procurar(char *str, char ch){
  int i;
  for (i=0; *(str + i) != '\0';i++){
    if (*(str + i)==ch){return str+i;}}
  return NULL;
}
  



/*
8.9 (Plataforma codex) Considere a funcao apresentada na aula teorica 9 para procurar um carater numa
cadeia. Pretende-se que escreva uma versao alternativa desta funcao usando apontadores em vez de ındices.
A funcao dever ter a declaracao
char *procurar(char *str, char ch);
O resultado deve ser um apontador para a primeira ocorrencia do carater ch (se este ocorrer) ou NULL caso
contrario.
*/