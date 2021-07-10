#include <stdio.h>

int main()
{
    int x, cont=1;
   
    scanf("%d",&x);
    while(cont <= x){
        if (cont % 2 ==1)
        printf("%d\n",cont);
        cont++;
        }
    
    return 0;
}
