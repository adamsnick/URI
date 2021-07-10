#include <stdio.h>

int main()
{
    int x, cont=1;
   
    scanf("%d",&x);
    if(x % 2 == 0){
        x = x + 1;
    }else{
        x = x;
    }printf("%d\n",x);
    for(cont=1;cont<=5;cont++){
        printf("%d\n",x = x +2);
    }
    return 0;
}
