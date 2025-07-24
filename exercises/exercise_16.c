#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    Lógica do mini-desafio: contar_vogais(char palavra[])
Queremos criar uma função que receba uma string e conte quantas vogais ela tem. Para isso, precisamos dividir o problema em partes pequenas. Vamos pensar juntos:

🔹 Passo 1: Como você percorre uma string char palavra[]?
Qual função você pode usar para saber quantos caracteres ela tem (sem contar o \0)?

Como você andaria caractere por caractere?

➡️ Reflita e responda: como você percorreria uma string?

🔹 Passo 2: Como saber se um caractere é uma vogal?
Dado um caractere letra, como você verificaria se ele é uma das letras 'a', 'e', 'i', 'o', 'u'?

Como você incluiria também as maiúsculas ('A', 'E'...)?

➡️ Reflita: qual estrutura condicional ou operador você usaria aqui?


*/

// ler input
void contar_vogais(char arr_char[]) {
    for (int i = 0; arr_char[i] != '\0'; i++) {// não precisa do tamanho do array
        if (isupper(arr_char[i])) {
            if (arr_char[i] != 'A' && arr_char[i] != 'E'&& arr_char[i] != 'I'&&
            arr_char[i] != 'O' && arr_char[i] != 'U') {
                printf("%c: Maiusculo concoantes \n", arr_char[i]);
            } else {
                printf("%c: Maiusculo Vogais \n", arr_char[i]);
            }
        } else if (islower(arr_char[i])) {
            if (arr_char[i] != 'a' && arr_char[i] != 'e'&& arr_char[i] != 'i'&&
            arr_char[i] != 'o' && arr_char[i] != 'u') {
                printf("%c: Minusculas concoantes \n", arr_char[i]);
            } else {
                printf("%c: Minusculas vogais \n", arr_char[i]);
            }
        } 
    }

}

int main() {
    char arr_char[10] = {'a', 'b', 'C', 'd', '\0'};
    contar_vogais(arr_char);
    return 0;
}