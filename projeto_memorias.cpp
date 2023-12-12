#include <iostream>
using namespace std;

#define TAMANHO_MEMORIA 10

// Definindo as instruções da CAVE LANGUAGE
enum Opcode {
    SOMAR = 0,
    SUBTRAIR = 1,
    LEVAR_PARA_MEMORIA = 2,
    TRAZER_DA_MEMORIA = 3,
    PARAR = 4
};

// Função para executar o programa
void executarPrograma(int memoriaInstrucoes[][4], int memoria[]) {
    int pc = 0; // Contador de programa

    while (pc < TAMANHO_MEMORIA) {
        int opcode = memoriaInstrucoes[pc][0];

        switch (opcode) {
            case SOMAR:
                {
                    int endereco1 = memoriaInstrucoes[pc][1];
                    int endereco2 = memoriaInstrucoes[pc][2];
                    memoria[endereco1] += memoria[endereco2];
                }
                break;
            case SUBTRAIR:
                {
                    int endereco1 = memoriaInstrucoes[pc][1];
                    int endereco2 = memoriaInstrucoes[pc][2];
                    memoria[endereco1] -= memoria[endereco2];
                }
                break;
            case LEVAR_PARA_MEMORIA:
                {
                    int conteudo = memoriaInstrucoes[pc][1];
                    int endereco = memoriaInstrucoes[pc][2];
                    memoria[endereco] = conteudo;
                }
                break;
            case TRAZER_DA_MEMORIA:
                {
                    int endereco = memoriaInstrucoes[pc][1];
                    cout << "Conteudo da memoria[" << endereco << "]: " << memoria[endereco] << endl;
                }
                break;
            case PARAR:
                cout << "Programa encerrado." << endl;
                return;
            default:
                cerr << "Opcode desconhecido: " << opcode << endl;
                return;
        }

        pc++;
    }
}

int main() {
    // Inicializando a memória
    int memoria[TAMANHO_MEMORIA] = {0}; // Por exemplo, uma memória com 10 posições

    // Exemplo de programa em CAVE LANGUAGE
    int programa[][4] = {
        {LEVAR_PARA_MEMORIA, 10, 5},  // Armazena o valor 5 na posição de memória 10
        {LEVAR_PARA_MEMORIA, 11, 7},  // Armazena o valor 7 na posição de memória 11
        {SOMAR, 12, 10, 11},           // Soma os valores das posições de memória 10 e 11 e armazena em 12
        {TRAZER_DA_MEMORIA, 12},      // Imprime o valor da posição de memória 12
        {PARAR}                       // Encerra o programa
    };

    // Executa o programa na máquina hipotética
    executarPrograma(programa, memoria);

    return 0;
}