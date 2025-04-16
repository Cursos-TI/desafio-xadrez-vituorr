#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int b = 1, r = 1; // b = bispo | r = rainha

    printf("Movimento da Torre: \n");
    for (int t = 1; t <= 5; t++) // t = torre
    {
        printf("Moveu-se para a DIREITA\n");
    }

    printf("\n\nMovimento do bispo: \n");
    while (b <= 5)
    {
        printf("Moveu-se pra CIMA, DIREITA\n");
        b++;
    }

    printf("\n\nMovimento da Rainha: \n");
    do
    {
        printf("Moveu-se para a ESQUERDA\n");
        r++;
    } while (r <= 8);

    return 0;
}