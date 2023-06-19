#include <iostream>
#include <sstream>
#include <iomanip>
#include <bitset>

using namespace std;

// Fun��o para converter um n�mero decimal para hexadecimal
string decimalParaHexadecimal(int decimal) {
    stringstream ss;
    ss << hex << decimal;
    return ss.str();
}

// Fun��o para converter um n�mero hexadecimal para decimal
int hexadecimalParaDecimal(string hexadecimal) {
    stringstream ss;
    ss << hex << hexadecimal;
    int decimal;
    ss >> decimal;
    return decimal;
}

// Fun��o para converter um n�mero decimal para bin�rio
string decimalParaBinario(int decimal) {
    bitset<32> binario(decimal);
    return binario.to_string();
}

// Fun��o para converter um n�mero bin�rio para decimal
int binarioParaDecimal(string binario) {
    bitset<32> bits(binario);
    int decimal = bits.to_ulong();
    return decimal;
}

// Fun��o principal
int main() {
	setlocale(LC_ALL, "Portuguese");
    int opcao;
    bool sair = false;

    while (!sair) {
        cout << "Calculadora de Programador" << endl;
        cout << "==========================" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtra��o" << endl;
        cout << "3. Multiplica��o" << endl;
        cout << "4. Divis�o" << endl;
        cout << "5. Convers�es" << endl;
        cout << "6. Sair" << endl;
        cout << "Escolha uma op��o: ";
        cin >> opcao;

        double num1, num2;
        string strNum1, strNum2;

        // Realiza as opera��es de acordo com a op��o escolhida
        switch (opcao) {
            case 1: // Soma
                cout << "Digite o primeiro n�mero: ";
                cin >> num1;
                cout << "Digite o segundo n�mero: ";
                cin >> num2;
                cout << "Resultado: " << num1 + num2 << endl;
                break;

            case 2: // Subtra��o
                cout << "Digite o primeiro n�mero: ";
                cin >> num1;
                cout << "Digite o segundo n�mero: ";
                cin >> num2;
                cout << "Resultado: " << num1 - num2 << endl;
                break;

            case 3: // Multiplica��o
                cout << "Digite o primeiro n�mero: ";
                cin >> num1;
                cout << "Digite o segundo n�mero: ";
                cin >> num2;
                cout << "Resultado: " << num1 * num2 << endl;
                break;

            case 4: // Divis�o
                cout << "Digite o primeiro n�mero: ";
                cin >> num1;
                cout << "Digite o segundo n�mero: ";
                cin >> num2;
                if (num2 != 0)
                    cout << "Resultado: " << num1 / num2 << endl;
                else
                    cout << "Erro: Divis�o por zero!" << endl;
                break;

            case 5: // Convers�es
                cout << "Digite um n�mero decimal: ";
                cin >> num1;

                cout << "Convers�es:" << endl;
                cout << "Decimal para Hexadecimal: " << decimalParaHexadecimal(num1) << endl;
                cout << "Decimal para Bin�rio: " << decimalParaBinario(num1) << endl;
                break;

            case 6: // Sair
                sair = true;
                cout << "Encerrando o programa. At� mais!" << endl;
                break;

            default:
                cout << "Op��o inv�lida!" << endl;
        }

        if (!sair) {
            cout << "Pressione qualquer tecla para voltar ao menu ou digite 'sair' para encerrar: ";
            string resposta;
            cin >> resposta;

            if (resposta == "sair") {
                sair = true;
                cout << "Encerrando o programa. At� mais!" << endl;
            }
        }

        cout << endl;
    }

    return 0;
}

