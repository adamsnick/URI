#include <stdio.h>

int main()
{
    float valor, aux, media;
    int cont, positivo=0;
    
    for(cont=1;cont <= 6;cont++){
        scanf("%f",&valor);
        if (valor > 0){
            positivo = positivo + 1;
            aux = aux + valor;
            
        }
    }
    
    media = aux /  positivo;
    printf("%d valores positivos\n",positivo);
    printf("%.1f\n",media);
    
    
    return 0;
}
