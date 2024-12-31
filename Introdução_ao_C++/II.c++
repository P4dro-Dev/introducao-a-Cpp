// Questão 2: Encontrar o valor máximo em uma lista de números.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int valorMaximo(const vector<int>& numeros) {
    return *max_element(numeros.begin(), numeros.end());
}

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "O valor máximo é: " << valorMaximo(numeros) << endl;
    return 0;
}
