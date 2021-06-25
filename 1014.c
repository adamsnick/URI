#include <stdio.h>
 
int main() {

int DIST;
double GASTO, KML;

scanf("%d%lf",&DIST,&GASTO);

KML = DIST / GASTO;

printf("%.3lf km/l\n",KML);
 
    return 0;
}
