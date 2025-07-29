#include <stdio.h>
#include <stdbool.h>

int main()
{

    int i = 0;
    bool menorQueCinco = i < 5;

    while (menorQueCinco)
    {
        printf("%d\n", i);
        i++;
        menorQueCinco = i < 5; // descomente esta linha e veja a diferença!
        // atualiza a verificação, já que com o while, esta acontecendo dinamicamente!
    }

    return 0;
}