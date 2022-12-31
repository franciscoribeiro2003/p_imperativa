#include <stdio.h>
#include <string.h>


int forte(char str[]){
    int flag1=0,flag2=0,flag3=0;
    if (strlen(str)<6){return 0;}
    for (int i=0;i<strlen(str);i++){
        if (str[i]>='a' && str[i]<='z'){flag1=1;}
        else if (str[i]>='A' && str[i]<='Z'){flag2=1;}
        else if (str[i]>='0' && str[i]<='9'){flag3=1;}
    }
    if (flag1+flag2+flag3==3) {return 1;}
    return 0;
}