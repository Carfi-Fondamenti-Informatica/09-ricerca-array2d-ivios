#include <iostream>
#include "lib.h"
using namespace std;


int main() {

    char listaNomi[10][20];
    start(listaNomi,10);
    char mioNome[1][20];
    start(mioNome,1);

    for (int i = 0; i < 10; i++) {
        cin >> listaNomi[i];
    }
    cin >> mioNome[0];

    int pos = 0;
    if(cercaNome(listaNomi, mioNome, pos)){
        cout << pos;
    } else {
        cout << "non presente";
    }

    return 0;
}
