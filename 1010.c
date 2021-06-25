#include <stdio.h>
 
int main() {

int CODPECA1, CODPECA2, QNTD;
double VLR, TOTAL;

scanf("%d%d%lf",&CODPECA1,&QNTD,&VLR);

TOTAL = QNTD*VLR;

scanf("%d%d%lf",&CODPECA2,&QNTD,&VLR);

TOTAL = TOTAL + QNTD *VLR;

printf("VALOR A PAGAR: R$ %.2lf\n",TOTAL);

 
    return 0;
}
