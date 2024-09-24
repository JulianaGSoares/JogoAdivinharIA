#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n;
    int i;
    int sorteado;
    int maior = 1000;
    int menor = 0;

    printf("Adivinhe qual eh o numero entre 1 e 1000...\n");

    srand(time(NULL));
    //Vai gerar números diferentes a partir do horário do computador
    sorteado = rand() % 1001;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for(i = 1;; i++)
    // i com inicialização, mas sem condição para não limitar
    {
        if(n == sorteado)
        {
            printf("\nParabens, voce acertou!\n");
            break;
           // encerra o progama
        }
        if(n > sorteado)
        {
            maior = n;
            printf("O numero esta entre %d e %d, tente de novo.\n", menor, maior);
            printf("Total tentativas: %d\n", i);
        }
        if(n < sorteado)
        {
            menor = n;
            printf("O numero esta entre %d e %d, tente de novo.\n", menor, maior);
            printf("Total tentativas: %d\n", i);
        }
        if(n < menor && n > maior)
        {
            printf("O numero esta entre %d e %d, tente de novo.\n", menor, maior);
            printf("Total tentativas: %d\n", i);
        }
          printf("Digite outro numero: ");
          scanf("%d", &n);
    }
      if(i == 1 && i <= 5)
      {
          printf("Quantidade de tentativas: Excelente!\n");
      }
      if(i > 5 && i <= 7)
      {
          printf("Quantidade de tentativas: Bom.\n");
      }
      if(i > 7 && i <= 12)
      {
          printf("Quantidade de tentativas: Normal.\n");
      }
      if(i > 12 && i <= 14)
      {
          printf("Quantidade de tentativas: Ruim.\n");
      }
      if(i >= 15)
      {
          printf("Quantidade de tentativas: Tragico!\n");
      }
    return 0;
}
