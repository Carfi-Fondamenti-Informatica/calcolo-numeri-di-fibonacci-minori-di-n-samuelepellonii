
#include <iostream>
using namespace std;

int main() {

    int a=0, primo_numero=1, secondo_numero=1, serie=0;
    cin >> a;

        cout << primo_numero << endl;
        cout << secondo_numero << endl;

    for (int i=3; i <=a; i++) {
        serie = primo_numero + secondo_numero;
        primo_numero = secondo_numero;
        secondo_numero = serie;
        cout << serie << endl;
    }

    return 0;
}
