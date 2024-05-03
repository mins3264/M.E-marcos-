#include <iostream>
#include <bitset>
using namespace std;

string intToBinary(int num) {
    return bitset<sizeof(int) * 8>(num).to_string();
}

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;

    string binary = intToBinary(num);
    cout << "O numero " << num << " em binario e: " << binary << endl;

    return 0;
}
