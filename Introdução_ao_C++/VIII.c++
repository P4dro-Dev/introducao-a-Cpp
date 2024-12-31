// Questão 8: Normalizar uma lista de números (min-max normalization).
#include <iostream>
#include <vector>
using namespace std;

vector<double> normalizar(const vector<int>& numeros) {
    int min_val = *min_element(numeros.begin(), numeros.end());
    int max_val = *max_element(numeros.begin(), numeros.end());
    vector<double> normalizados;
    for (int num : numeros) {
        normalizados.push_back(static_cast<double>(num - min_val) / (max_val - min_val));
    }
    return normalizados;
}

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    vector<double> normalizados = normalizar(numeros);
    cout << "A lista normalizada é: ";
    for (double num : normalizados) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
