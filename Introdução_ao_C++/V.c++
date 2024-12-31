// Questão 5: Calcular a moda de uma lista de números.
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int calcularModa(const vector<int>& numeros) {
    unordered_map<int, int> frequencia;
    for (int num : numeros) {
        frequencia[num]++;
    }
    int moda = numeros[0];
    int maxFreq = 0;
    for (const auto& par : frequencia) {
        if (par.second > maxFreq) {
            maxFreq = par.second;
            moda = par.first;
        }
    }
    return moda;
}

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50, 10, 20, 10};
    cout << "A moda é: " << calcularModa(numeros) << endl;
    return 0;
}
