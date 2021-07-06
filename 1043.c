#include <stdio.h>

int main()
{
    float A, B, C, AREA,PER, BASE;
    
    scanf("%f%f%f",&A,&B,&C);
    
    if(B + C > A && A + C > B && A + B > C){
        PER = A + B + C;
       printf("Perimetro = %.1f\n",PER);
    }else{
       BASE = A + B;
       AREA = (BASE * C) /2;
       printf("Area = %.1f\n",AREA);
    }

    return 0;
}
