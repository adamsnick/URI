#include <stdio.h>

int main()
{
   int VALOR, ANOS, MESES, DIAS;
   
   scanf("%d",&VALOR);
   
   ANOS = VALOR /365;
   VALOR = VALOR - (ANOS*365);
   
   MESES = VALOR / 30;
   VALOR = VALOR - (MESES*30);
   
   DIAS = VALOR / 1;
   VALOR = VALOR - (DIAS*1);
   
   printf("%d ano(s)\n",ANOS);
   
   printf("%d mes(es)\n",MESES);
   
   printf("%d dia(s)\n",DIAS);
   

    return 0;
}
