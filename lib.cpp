#include "lib.h"

bool cercaNome (char listaNomi[10][20], char mioNome[1][20], int &i){
    for (; i < 10; i++) {
        if (comparaRiga(listaNomi, mioNome, i)){
            return true;
        }
    }
    return false;
}

bool comparaRiga (char listaNomi[10][20], char mioNome[1][20], int &i){
    for (int j = 0; j<20; j++){
        if (listaNomi[i][j]!=mioNome[0][j]){
            return false;
        } else {
            return true;
        }
    }
}

void start (char listaNomi[][20], int m){
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 20; j++) {
            listaNomi[i][j] = ' ';
        }
    }
}
