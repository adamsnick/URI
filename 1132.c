#include <stdio.h>

int main()
{
    int x, y, soma=0, aux, aux2;
    
    scanf("%d",&x);
    scanf("%d",&y);
    
    if(x>y){
        aux=x;
        aux2=y;
    }else{
        aux=y;
        aux2=x;
    }
    while(aux>=aux2){
        if(aux % 13 != 0){
            soma = soma + aux;
        }
        aux--;
    }
        
    printf("%d\n",soma);
    
    return 0;
}
