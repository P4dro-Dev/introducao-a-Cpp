// Questão 1: Calcular a média de uma lista de números.
#include <iostream>
#include <vector>
using namespace std;

double calcularMedia(const vector<int>& numeros) {
    int soma = 0;
    for (int num : numeros) {
        soma += num;
    }
    return static_cast<double>(soma) / numeros.size();
}

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "A média é: " << calcularMedia(numeros) << endl;
    return 0;
}
