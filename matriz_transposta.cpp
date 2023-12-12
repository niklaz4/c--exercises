#include <iostream>
using namespace std;

// Função para criar a transposta de uma matriz
void transporMatriz(int matriz[3][3], int transposta[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transposta[j][i] = matriz[i][j];
        }
    }
}

// Função para imprimir uma matriz
void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Exemplo de matriz
    int matrizOriginal[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Imprime a matriz original
    std::cout << "Matriz Original:" << std::endl;
    imprimirMatriz(matrizOriginal);

    // Cria a matriz transposta
    int matrizTransposta[3][3];
    transporMatriz(matrizOriginal, matrizTransposta);

    // Imprime a matriz transposta
    std::cout << "\nMatriz Transposta:" << std::endl;
    imprimirMatriz(matrizTransposta);

    return 0;
}