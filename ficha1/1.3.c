#include <stdio.h>
int main(void) {
    int l, w, h, v; // dimensõese volume
    printf("L=?"); scanf("%d", &l);
    printf("W=?"); scanf("%d", &w);
    printf("H=?"); scanf("%d", &h);
    v =l*w*h; // cálculodo volume
    printf("LxWxH: %d*%d*%d (cm)\n", l,w,h);
    printf("Volume: %d (cm^3)\n", v);
    return 0;
}
