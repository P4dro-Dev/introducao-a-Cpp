// Questão 7: Calcular o desvio padrão de uma lista de números.
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double calcularMedia(const vector<int>& numeros) {
    int soma = 0;
    for (int num : numeros) {
        soma += num;
    }
    return static_cast<double>(soma) / numeros.size();
}

double calcularVariancia(const vector<int>& numeros) {
    double media = calcularMedia(numeros);
    double soma_dos_quadrados = 0;
    for (int num : numeros) {
        soma_dos_quadrados += pow(num - media, 2);
    }
    return soma_dos_quadrados / (numeros.size() - 1);
}

double calcularDesvioPadrao(const vector<int>& numeros) {
    return sqrt(calcularVariancia(numeros));
}

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "O desvio padrão é: " << calcularDesvioPadrao(numeros) << endl;
    return 0;
}
