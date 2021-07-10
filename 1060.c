#include <stdio.h>
int main()
{
float valor;
int	  positivo=0,cont=1;
		
	while ( cont <= 6){
		scanf("%f",&valor);
			if (valor > 0 ){
			positivo++;
		}		
	cont++;
	}
	printf("%d valores positivos\n",positivo);
	
return 0;
}
