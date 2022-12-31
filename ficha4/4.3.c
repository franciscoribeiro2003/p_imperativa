#include <stdio.h>

int main (){
    char ch;
    int flag=1, words=0;
    while ((ch=getchar())!=EOF){
      if (ch==' ' || ch == '\n' || ch == '\t'){
        flag = 1;}
      else if (flag==1 && (ch !=' ' || ch != '\n' || ch != '\t')){
        words++;
        flag = 0;}}
    printf ("%d", words);
    return 0;
}
