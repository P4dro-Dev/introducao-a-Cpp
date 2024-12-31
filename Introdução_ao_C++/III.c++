// Questão 3: Encontrar o valor mínimo em uma lista de números.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int valorMinimo(const vector<int>& numeros) {
    return *min_element(numeros.begin(), numeros.end());
}

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "O valor mínimo é: " << valorMinimo(numeros) << endl;
    return 0;
}
