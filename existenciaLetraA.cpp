#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int contagem = 0;

    // Solicita ao usuário para informar uma string
    cout << "Informe uma string: ";
    getline(cin, input);

    // Conta ocorrências da letra 'a' (maiúscula ou minúscula)
    for (char ch : input) {
        if (ch == 'a' || ch == 'A') {
            contagem++;
        }
    }

    // Exibe o resultado
    if (contagem > 0) {
        cout << "A letra 'a' aparece " << contagem << " vezes na string." << endl;
    } else {
        cout << "A letra 'a' não aparece na string." << endl;
    }

    return 0;
}
