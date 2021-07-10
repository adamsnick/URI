#include <stdio.h>

int main()
{
    int valor=0, cont=1, impar=0, pos=0, neg=0, pares=0;
   
    
    while(cont <= 5){
    scanf("%d",&valor);
    if (valor < 0)
    neg++;
    else if (valor > 0)
    pos++;
    if (valor % 2 ==0)
    pares++;
    else
    impar++;
    cont++;
        }
       
 
    printf("%d valor(es) par(es)\n",pares);
    printf("%d valor(es) impar(es)\n",impar);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
   
    
    
    return 0;
}
