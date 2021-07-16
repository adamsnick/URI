#include <stdio.h>

int main()
{
    int H1, H2;
    
    scanf("%d%d",&H1,&H2);
        
        if (H1 > H2){
            printf("O JOGO DUROU %d HORA(S)\n",24 - (H1-H2));
        }else if (H2 > H1){
            printf("O JOGO DUROU %d HORA(S)\n",H2 - H1);
        }else{
            printf("O JOGO DUROU 24 HORA(S)\n");
        }

    return 0;
}
