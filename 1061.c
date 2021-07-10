#include <stdio.h>

int main()
{
    int  dia, diafinal, horas, horafinal, minutos, minutofinal, segundos, segundofinal;
    
    scanf("Dia %d",&dia);
    scanf ("%d : %d : %d\n",&horas,&minutos,&segundos);
    scanf("Dia %d",&diafinal);
    scanf("%d : %d : %d\n",&horafinal,&minutofinal,&segundofinal);
    
    segundos = segundofinal - segundos;
    minutos = minutofinal - minutos;
    horas = horafinal - horas;
    dia = diafinal - dia;
    
    if (segundos < 0)
    {
     segundos = segundos + 60;
     minutos--;
     }

    if (minutos < 0)
    {
     minutos = minutos + 60;
    horas--;
    }

    if (horas < 0)
    {
     horas = horas + 24;
     dia--;
     }

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    
    
    return 0;
}
