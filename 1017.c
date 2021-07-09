#include <stdio.h>

int main()
{
int TEMPO, KMH;
double DISTOTAL, GASTO;

    scanf("%d%d",&TEMPO,&KMH);
    
    DISTOTAL = TEMPO * KMH;
    GASTO = DISTOTAL /12;
    
    printf("%.3lf\n",GASTO);

    return 0;
}
