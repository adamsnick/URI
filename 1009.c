#include <stdio.h>

int main()
{  char  nome;
   double salario, vendas, comissao;
   
   scanf("%s",&nome);
   scanf("%lf%lf",&salario,&vendas);
   comissao = vendas * 0.15 + salario;
   printf("TOTAL = R$ %.2lf\n",comissao);

    return 0;
}
