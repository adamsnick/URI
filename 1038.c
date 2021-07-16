#include <stdio.h>

int main()
{
    int COD, QNTD;
    float PRECO;
    
    scanf("%d%d",&COD,&QNTD);
    if (COD == 1){
        PRECO = PRECO + 4.00;
        PRECO = PRECO * QNTD;
        printf("Total: R$ %.2f\n",PRECO);
    }else if (COD == 2){
        PRECO = PRECO + 4.50;
        PRECO = PRECO * QNTD;
        printf("Total: R$ %.2f\n",PRECO);
    }else if (COD == 3){
        PRECO = PRECO + 5.00;
        PRECO = PRECO * QNTD;
        printf("Total: R$ %.2f\n",PRECO);
    }else if (COD == 4){
        PRECO = PRECO + 2.00;
        PRECO = PRECO * QNTD;
        printf("Total: R$ %.2f\n",PRECO);
    }else{
        PRECO = PRECO + 1.50;
        PRECO = PRECO * QNTD;
        printf("Total: R$ %.2f\n",PRECO);
    }

    return 0;
}
