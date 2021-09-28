#include <stdio.h>

int main()
{
    int i=0;
    double n=0, media=0;
    
    
    
    while(i<2){
        scanf("%lf",&n);
            if(n >= 0 && n <= 10){
                media = media + n;
                i++;
            }else{
                printf("nota invalida\n");
            }
    }
    
    printf("media = %.2lf\n",media/2); 
    
    return 0;
}
