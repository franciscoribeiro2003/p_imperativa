#include <math.h>
#include <stdio.h>

typedef struct ponto {
    double x,y;
} Ponto;

double distancia(Ponto a, Ponto b){
    double dist=sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
    return dist;}

int mesmo_ponto(Ponto a, Ponto b){
    double dist = distancia(a,b);
    if (dist<0.000001) {return 1;}
    return 0;

}



int main (){
    Ponto a = { .x = 7,21, .y = 7.65};
    Ponto b = { .x = 7.21, .y = 7.65};
    double dist1=distancia(a,b);
    int same=mesmo_ponto(a,b);
    printf("%lf\n", dist1);
    printf("%d", same);
    return 0;
}
