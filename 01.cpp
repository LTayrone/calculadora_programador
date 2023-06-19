#include <iostream>
#include <sstream>
#include <iomanip>
#include <bitset>

using namespace std;

// Função para converter um número decimal para hexadecimal
string decimalParaHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

// Função para converter um número hexadecimal para decimal
int hexadecimalParaDecimal(string hexadecimal) {
    stringstream ss;
    ss << hex << hexadecimal;
    int decimal;
    ss >> decimal;
    return decimal;
}

// Função para converter um número decimal para binário
string decimalParaBinario(int decimal) {
    bitset<32> binario(decimal);
    return binario.to_string();
}

// Função para converter um número binário para decimal
int binarioParaDecimal(string binario) {
    bitset<32> bits(binario);
    int decimal = bits.to_ulong();
    return decimal;
}

// Função principal
int main() {
	setlocale(LC_ALL, "Portuguese");
    int opcao;
    bool sair = false;

    while (!sair) {
        cout << "Calculadora de Programador" << endl;
        cout << "==========================" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtração" << endl;
        cout << "3. Multiplicação" << endl;
        cout << "4. Divisão" << endl;
        cout << "5. Conversões" << endl;
        cout << "6. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        double num1, num2;
        string strNum1, strNum2;

        // Realiza as operações de acordo com a opção escolhida
        switch (opcao) {
            case 1: // Soma
                cout << "Digite o primeiro número: ";
                cin >> num1;
                cout << "Digite o segundo número: ";
                cin >> num2;
                cout << "Resultado: " << num1 + num2 << endl;
                break;

            case 2: // Subtração
                cout << "Digite o primeiro número: ";
                cin >> num1;
                cout << "Digite o segundo número: ";
                cin >> num2;
                cout << "Resultado: " << num1 - num2 << endl;
                break;

            case 3: // Multiplicação
                cout << "Digite o primeiro número: ";
                cin >> num1;
                cout << "Digite o segundo número: ";
                cin >> num2;
                cout << "Resultado: " << num1 * num2 << endl;
                break;

            case 4: // Divisão
                cout << "Digite o primeiro número: ";
                cin >> num1;
                cout << "Digite o segundo número: ";
                cin >> num2;
                if (num2 != 0)
                    cout << "Resultado: " << num1 / num2 << endl;
                else
                    cout << "Erro: Divisão por zero!" << endl;
                break;

            case 5: // Conversões
                cout << "Digite um número decimal: ";
                cin >> num1;

                cout << "Conversões:" << endl;
                cout << "Decimal para Hexadecimal: " << decimalParaHexadecimal(num1) << endl;
                cout << "Decimal para Binário: " << decimalParaBinario(num1) << endl;
                break;

            case 6: // Sair
                sair = true;
                cout << "Encerrando o programa. Até mais!" << endl;
                break;

            default:
                cout << "Opção inválida!" << endl;
        }

        if (!sair) {
            cout << "Pressione qualquer tecla para voltar ao menu ou digite 'sair' para encerrar: ";
            string resposta;
            cin >> resposta;

            if (resposta == "sair") {
                sair = true;
                cout << "Encerrando o programa. Até mais!" << endl;
            }
        }

        cout << endl;
    }

    return 0;
}

