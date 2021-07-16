#include <stdio.h>

int main()
{   
    float N1, N2, N3, N4, MEDIA, EXAME;
    
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    MEDIA = N1 * 0.2+ N2 * 0.3 + N3 * 0.4 + N4 * 0.1;
        if (MEDIA >= 7.0){
            printf("Media: %.1f\n",MEDIA);
            printf("Aluno aprovado.\n");
        }else if (MEDIA < 5.0){
            printf("Media: %.1f\n",MEDIA);
            printf("Aluno reprovado.\n");
        }else{
            printf("Media: %.1f\n",MEDIA);
            printf("Aluno em exame.\n");
            scanf("%f",&EXAME);
            printf("Nota do exame: %.1f\n",EXAME);
            MEDIA = (MEDIA + EXAME) / 2;
            if (MEDIA > 5.0){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n",MEDIA);
            }else{
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n",MEDIA);
            }
        }
    
    

    return 0;
}
