#include <stdio.h>
int prox_bissexto(int n){
  if(n%4==0 && n%100!=0 && n%400!=0){
    return n;
  }
  else{
    while ((n%4!=0 || n%100==0) && (n%400!=0)) {
      n=n+1;
    }
    return n;
  }
  return n;
}
