// Questão 4: Calcular a mediana de uma lista de números.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double calcularMediana(vector<int> numeros) {
    sort(numeros.begin(), numeros.end());
    int n = numeros.size();
    if (n % 2 == 0) {
        return (numeros[n / 2 - 1] + numeros[n / 2]) / 2.0;
    } else {
        return numeros[n / 2];
    }
}

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "A mediana é: " << calcularMediana(numeros) << endl;
    return 0;
}
