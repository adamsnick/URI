#include <stdio.h>

int main()
{
    int i, j, posicao, menor;
        scanf("%d",&j);
    int vet[j];
    
        for(i=0;i<j;i++){
            scanf("%d",&vet[i]);
        }
        
        menor = vet[0];
        
        for(i=1;i<j;i++){
            if (menor > vet[i]){
                menor = vet[i];
                posicao = i;
            }
        }
         
        printf("Menor valor: %d\nPosicao: %d\n", menor, posicao);
    return 0;
}
