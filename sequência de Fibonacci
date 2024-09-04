#include <iostream>
using namespace std;

//Função para verificar se um número pertence à sequência de Fibonacci
bool pertenceFibonacci(int num) {
    if (num < 0) return false; //Números negativos não pertencem à sequência

    //Variáveis para os dois primeiros números da sequência
    int a = 0;
    int b = 1;

    //Verifica se o número é um dos dois primeiros da sequência
    if (num == a || num == b) return true;

    //Gera a sequência de Fibonacci e verifica se o número está nela
    int c;
    while (b <= num) {
        c = a + b;
        a = b;
        b = c;

        if (b == num) return true;
    }

    return false;
}

int main() {
    int num;
    
    //Solicita ao usuário para informar um número
    cout << "Informe um número: ";
    cin >> num;

    //Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(num)) {
        cout << num << " pertence à sequência de Fibonacci." << endl;
    } else {
        cout << num << " não pertence à sequência de Fibonacci." << endl;
    }

    return 0;
}
