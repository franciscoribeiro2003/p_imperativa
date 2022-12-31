double potencia (double x, int n){
    if (n==0){return 1;}
    else {return (x*(potencia (x,(n-1))));}}

double serie_log(double x, int n){
    if (n==1){return x;}
    else {return (((potencia ((-1), (n+1))) * ((potencia (x, n))/(double)n)) + serie_log (x, (n-1)));}}
