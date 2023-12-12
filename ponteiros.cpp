//Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char. Associe as variaveis aos ponteiros (use &). Modifique os valores de ´
//cada variavel usando os ponteiros. Imprima os valores das vari ´ aveis antes e ap ´ os a ´
//modificac¸ao.

#include <iostream>
using namespace std;

int main() {
    // Declare as variáveis
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declare os ponteiros e associe às variáveis
    int *ptrInteiro = &inteiro;
    float *ptrReal = &real;
    char *ptrChar = &caractere;

    // Imprima os valores antes da modificação
    cout << "Valores antes da modificacao:" << endl;
    cout << "Inteiro: " << inteiro << endl;
    cout << "Real: " << real << endl;
    cout << "Char: " << caractere << endl;

    // Modifique os valores usando os ponteiros
    *ptrInteiro = 20;
    *ptrReal = 6.28;
    *ptrChar = 'B';

    // Imprima os valores após a modificação
    cout << "\nValores depois da modificacao:" << endl;
    cout << "Inteiro: " << inteiro << endl;
    cout << "Real: " << real << endl;
    cout << "Char: " << caractere << endl;

    return 0;
}