#include <iostream>

using std::cout;
using std::endl;


void swap(int v[], int k) {
    int temp;
    temp = v[k];
    v[k] = v[k+1];
    v[k+1] = temp;
}

int main(int argc, char** argv) {

    int conjunto[5] = {1, 3, 2, 4, 5};

    cout << "Elemento no indice 1 antes da troca: " << conjunto[1] << endl;

    swap(&conjunto[0], 1);

    cout << "Elemento no indice 1 depois da troca: " << conjunto[1] << endl;

    return 0;
}
