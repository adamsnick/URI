#include <stdio.h>

int main()
{
    int VALOR, TROCO, CEM, CINQUENTA, VINTE, DEZ, CINCO, DOIS, UM;
    
    scanf ("%d",&VALOR);
    
    TROCO=VALOR;
    CEM=TROCO/100;
    TROCO=TROCO-(CEM*100);
    
    CINQUENTA=TROCO/50;
    TROCO=TROCO-(CINQUENTA*50);
    
    VINTE=TROCO/20;
    TROCO=TROCO-(VINTE*20);
    
    DEZ=TROCO/10;
    TROCO=TROCO-(DEZ*10);
    
    CINCO=TROCO/5;
    TROCO=TROCO-(CINCO*5);
    
    DOIS=TROCO/2;
    TROCO=TROCO-(DOIS*2);
    
    UM=TROCO/1;
    TROCO=TROCO-(UM*1);

    printf("%d nota(s) de R$ 100,00\n",CEM);
    
    printf("%d nota(s) de R$ 50,00\n",CINQUENTA);

    printf("%d nota(s) de R$ 20,00\n",VINTE);

    printf("%d nota(s) de R$ 10,00\n",DEZ);

    printf("%d nota(s) de R$ 5,00\n",CINCO);

    printf("%d nota(s) de R$ 2,00\n",DOIS);

    printf("%d nota(s) de R$ 1,00\n",UM);


    return 0;
}
