#include <stdio.h>

int main()
{
    int n, valor, i;
    
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
        scanf("%d",&valor);
            if(valor % 2 == 0 && valor > 0){
                printf("EVEN POSITIVE\n");
            }else if(valor % 2 == 1 && valor > 0){
                printf("ODD POSITIVE\n");
            }else if(valor % 2 == 0 && valor < 0){
                printf("EVEN NEGATIVE\n");
            }else if(valor % 2 == -1 && valor < 0){
                printf("ODD NEGATIVE\n");
            }else if(valor == 0){
                printf("NULL\n");
            }
    }

    return 0;
}
