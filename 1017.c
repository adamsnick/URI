
#include <stdio.h>

int main()
{
int TEMPO, KMH;
double DISTOTAL, GASTO;

    scanf("%d%d",&TEMPO,&KMH);
    
    DISTOTAL = TEMPO * KMH;
    GASTO = DISTOTAL /12;
    
    printf("%.3lf",GASTO);

    return 0;
}
