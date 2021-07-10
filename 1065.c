#include <stdio.h>

int main()
{
    int valor, cont, pares;
   
    
    for(cont=1;cont <= 5;cont++){
        scanf("%d",&valor);
        if (valor % 2 == 0){
            pares++;
            
        }
    }
    
    printf("%d valores pares\n",pares);
   
    
    
    return 0;
}
