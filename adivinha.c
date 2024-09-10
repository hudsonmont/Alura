#include <stdio.h>

// #define para definir constantes
// #define NUMERO_DE_TENTATIVAS 5

int main()
{
    // Imprime cabeçalho do jogo
    printf("*******************************************");
    printf("\nBem vindo ao nosso jogo de adivinhacao!");
    printf("\n*******************************************");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    // Loop de repetição (contador; condição; incremento)
    // for (int i = 1; i <= NUMERO_DE_TENTATIVAS; i++)
    while (ganhou == 0)
    {
        // Imprime a pergunta do jogo
        printf("\nTentativa %d.", tentativas);
        printf("\nQual e o seu palpite? ");
        scanf("%d", &chute);
        printf("Seu chute foi %d", chute);

        if (chute < 0)
        {
            printf("\nVoce nao pode chutar numeros negativos.\n");
            // i--;
            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;
        // int menor = chute < numerosecreto;

        // Se acertar o número
        if (acertou)
        {
            printf("\nVoce acertou na tentativa %d!", tentativas);
            ganhou = 1;
            // Parar execução do FOR
            // break;
        }
        // Se errar o número com mensagem de maior ou menor

        else if (maior)
        {
            printf("\nVoce errou! Seu chute foi maior do que o numero secreto.\nTente de novo.");
        }
        else
        {
            printf("\nVoce errou! Seu chute foi menor que o numero secreto.\nTente de novo.");
        }

        tentativas++;
    }
    printf("\nFim de jogo.");
}