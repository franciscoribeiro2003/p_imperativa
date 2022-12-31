#include <stdio.h>
#include <ctype.h>

#define MAX 20

int main (){
  char str[MAX];
  fgets (str, sizeof(str),stdin);
  for (int i = 0; i<sizeof(str);i++){
    if (str[i]>='a' && str[i]<='z'){
      str[i]=str[i]-32;
    }
  }
  puts (str);
  return 0;
}

//mais ou menos a resolução q pede, a ideia esta falta so modificar a função