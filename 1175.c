#include <stdio.h>

int main()
{
    int  i, j, v[20], aux;
    
    for (i=0;i<20;i++){
        scanf("%d",&v[i]);
    }
    for (i=0,j=19;i<10;i++,j--){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
    for (i=0;i<20;i++){
        printf("N[%d] = %d\n",i,v[i]);
    }

    return 0;
}
