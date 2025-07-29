#include <stdio.h>
#include <stdbool.h>

// definir função(int) que recebe um char ponteiro(string)
// criar um verificador(variavel) associado ao final do array('\0') e colocar na variavel -> se for diferente de '\0' true se não for false
// incrementar o ponteiro char *str++
// criar um int contador(para contar) e incrementar no loop count++;
// a função ira parar por si só

int length_arr(char *str);
bool strend(char *str);

int main() {

    char str[5] = {'a', 'b', 'c', 'd', '\0'};

    int length = length_arr(str);
    
    printf("O tamanho do array: %d \n", length);
    return 0;
}

bool strend(char *str) {
    return *str != '\0';
}

int length_arr(char *str) {
    int count = 0; // Lembrar que C não tem um garbage collector! Sempre inicializar as variáveis, mesmo que em algum ponto inicialize depois no codigo, mas tem que inicializar no começo, já que é mais seguro!
    
    while (strend(str)) {// quando for false ou seja acabar a string o loop acaba.

        count++; // acrencenta ao loop para poder contar quandos characteres tem!
        str++; // percorre o array, já que esta em um loop -> mesmo que var[i] em um for
         
    }

    return count; // retornar o contador
}